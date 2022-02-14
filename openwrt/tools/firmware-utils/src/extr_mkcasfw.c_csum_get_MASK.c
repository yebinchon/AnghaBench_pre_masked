
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct csum_state {int size; } ;





 int FUNC_0 (struct csum_state*) ;
 int FUNC_1 (struct csum_state*) ;
 int FUNC_2 (struct csum_state*) ;

uint32_t
FUNC_3(struct csum_state *VAR_0)
{
 uint32_t VAR_1;

 switch (VAR_0->size) {
 case 128:
  VAR_1 = FUNC_2(VAR_0);
  break;
 case 130:
  VAR_1 = FUNC_0(VAR_0);
  break;
 case 129:
  VAR_1 = FUNC_1(VAR_0);
 }

 return VAR_1;
}
