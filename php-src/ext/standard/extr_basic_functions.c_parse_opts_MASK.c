
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char opt_char; int need_param; int * opt_name; } ;
typedef TYPE_1__ opt_struct ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_1 (int,unsigned int,int ) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(char * VAR_0, opt_struct ** VAR_1)
{
 opt_struct * VAR_2 = ((void*)0);
 unsigned int VAR_3, VAR_4 = 0;
 unsigned int VAR_5 = (unsigned int)FUNC_2(VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
  if ((VAR_0[VAR_3] >= 48 && VAR_0[VAR_3] <= 57) ||
   (VAR_0[VAR_3] >= 65 && VAR_0[VAR_3] <= 90) ||
   (VAR_0[VAR_3] >= 97 && VAR_0[VAR_3] <= 122)
  ) {
   VAR_4++;
  }
 }

 VAR_2 = FUNC_1(sizeof(opt_struct), VAR_4, 0);
 FUNC_0(VAR_2, 0, sizeof(opt_struct) * VAR_4);
 *VAR_1 = VAR_2;
 while ( (*VAR_0 >= 48 && *VAR_0 <= 57) ||
   (*VAR_0 >= 65 && *VAR_0 <= 90) ||
   (*VAR_0 >= 97 && *VAR_0 <= 122)
 ) {
  VAR_2->opt_char = *VAR_0;
  VAR_2->need_param = *(++VAR_0) == ':';
  VAR_2->opt_name = ((void*)0);
  if (VAR_2->need_param == 1) {
   VAR_0++;
   if (*VAR_0 == ':') {
    VAR_2->need_param++;
    VAR_0++;
   }
  }
  VAR_2++;
 }
 return VAR_4;
}
