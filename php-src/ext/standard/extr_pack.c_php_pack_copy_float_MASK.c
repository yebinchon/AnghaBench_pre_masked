
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct Copy32 {float f; void* i; } ;


 int FUNC_0 (void*,float*,int) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(int VAR_0, void * VAR_1, float VAR_2)
{
 union Copy32 {
  float f;
  uint32_t i;
 } VAR_3;
 VAR_3.f = VAR_2;






 if (!VAR_0) {
  VAR_3.i = FUNC_1(VAR_3.i);
 }


 FUNC_0(VAR_1, &VAR_3.f, sizeof(float));
}
