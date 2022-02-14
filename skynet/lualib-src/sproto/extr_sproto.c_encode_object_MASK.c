
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sproto_arg {int length; int * value; } ;
typedef int (* sproto_callback ) (struct sproto_arg*) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int
FUNC_2(sproto_callback VAR_2, struct sproto_arg *VAR_3, uint8_t *VAR_4, int VAR_5) {
 int VAR_6;
 if (VAR_5 < VAR_0)
  return -1;
 VAR_3->value = VAR_4+VAR_0;
 VAR_3->length = VAR_5-VAR_0;
 VAR_6 = VAR_2(VAR_3);
 if (VAR_6 < 0) {
  if (VAR_6 == VAR_1)
   return 0;
  return -1;
 }
 FUNC_0(VAR_6 <= VAR_5-VAR_0);
 return FUNC_1(VAR_4, VAR_6);
}
