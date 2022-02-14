
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bpc; int colors; int columns; int stride; } ;
typedef TYPE_1__ fz_predict ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int,int) ;
 int FUNC_1 (unsigned char*,int ,int ) ;
 int FUNC_2 (unsigned char*,int,int,int) ;

__attribute__((used)) static void
FUNC_3(fz_predict *VAR_1, unsigned char *VAR_2, unsigned char *VAR_3)
{
 int VAR_4[VAR_0];
 int VAR_5, VAR_6;
 const int VAR_7 = (1 << VAR_1->bpc)-1;

 for (VAR_6 = 0; VAR_6 < VAR_1->colors; VAR_6++)
  VAR_4[VAR_6] = 0;


 if (VAR_1->bpc == 8)
 {
  for (VAR_5 = 0; VAR_5 < VAR_1->columns; VAR_5++)
   for (VAR_6 = 0; VAR_6 < VAR_1->colors; VAR_6++)
    *VAR_2++ = VAR_4[VAR_6] = (*VAR_3++ + VAR_4[VAR_6]) & 0xFF;
  return;
 }


 if (VAR_1->bpc < 8)
  FUNC_1(VAR_2, 0, VAR_1->stride);

 for (VAR_5 = 0; VAR_5 < VAR_1->columns; VAR_5++)
 {
  for (VAR_6 = 0; VAR_6 < VAR_1->colors; VAR_6++)
  {
   int VAR_8 = FUNC_0(VAR_3, VAR_5 * VAR_1->colors + VAR_6, VAR_1->bpc);
   int VAR_9 = VAR_8 + VAR_4[VAR_6];
   int VAR_10 = VAR_9 & VAR_7;
   FUNC_2(VAR_2, VAR_5 * VAR_1->colors + VAR_6, VAR_1->bpc, VAR_10);
   VAR_4[VAR_6] = VAR_10;
  }
 }
}
