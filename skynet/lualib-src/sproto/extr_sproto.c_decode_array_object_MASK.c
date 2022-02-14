
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct sproto_arg {int index; int length; int * value; } ;
typedef scalar_t__ (* sproto_callback ) (struct sproto_arg*) ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(sproto_callback VAR_1, struct sproto_arg *VAR_2, uint8_t * VAR_3, int VAR_4) {
 uint32_t VAR_5;
 int VAR_6 = 1;
 while (VAR_4 > 0) {
  if (VAR_4 < VAR_0)
   return -1;
  VAR_5 = FUNC_0(VAR_3);
  VAR_3 += VAR_0;
  VAR_4 -= VAR_0;
  if (VAR_5 > VAR_4)
   return -1;
  VAR_2->index = VAR_6;
  VAR_2->value = VAR_3;
  VAR_2->length = VAR_5;
  if (VAR_1(VAR_2))
   return -1;
  VAR_4 -= VAR_5;
  VAR_3 += VAR_5;
  ++VAR_6;
 }
 return 0;
}
