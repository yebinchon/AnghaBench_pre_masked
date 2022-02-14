
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct csum_state {int size; } ;





 int FUNC_0 (int *,int ,struct csum_state*) ;
 int FUNC_1 (int *,int ,struct csum_state*) ;
 int FUNC_2 (int *,int ,struct csum_state*) ;

void
FUNC_3(uint8_t *VAR_0, uint32_t VAR_1, struct csum_state *VAR_2)
{
 switch (VAR_2->size) {
 case 128:
  FUNC_2(VAR_0,VAR_1,VAR_2);
  break;
 case 130:
  FUNC_0(VAR_0,VAR_1,VAR_2);
  break;
 case 129:
  FUNC_1(VAR_0,VAR_1,VAR_2);
  break;
 }
}
