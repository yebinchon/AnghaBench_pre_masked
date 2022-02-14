
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8 ;
typedef int stb_vorbis ;
struct TYPE_3__ {char last_decoded_sample; scalar_t__ page_start; scalar_t__ page_end; } ;
typedef TYPE_1__ ProbedPage ;


 int FUNC_0 (int *,char*,char) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(stb_vorbis *VAR_0, ProbedPage *VAR_1)
{
   uint8 VAR_2[27], VAR_3[255];
   int VAR_4,VAR_5;


   VAR_1->page_start = FUNC_2(VAR_0);


   FUNC_0(VAR_0, VAR_2, 27);
   if (VAR_2[0] != 'O' || VAR_2[1] != 'g' || VAR_2[2] != 'g' || VAR_2[3] != 'S')
      return 0;
   FUNC_0(VAR_0, VAR_3, VAR_2[26]);


   VAR_5 = 0;
   for (VAR_4=0; VAR_4 < VAR_2[26]; ++VAR_4)
      VAR_5 += VAR_3[VAR_4];


   VAR_1->page_end = VAR_1->page_start + 27 + VAR_2[26] + VAR_5;


   VAR_1->last_decoded_sample = VAR_2[6] + (VAR_2[7] << 8) + (VAR_2[8] << 16) + (VAR_2[9] << 24);


   FUNC_1(VAR_0, VAR_1->page_start);
   return 1;
}
