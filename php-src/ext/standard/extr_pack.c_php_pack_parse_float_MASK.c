
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct Copy32 {float f; void* i; } ;


 int FUNC_0 (void**,void*,int) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static float FUNC_2(int VAR_0, void * VAR_1)
{
 union Copy32 {
  float f;
  uint32_t i;
 } VAR_2;
 FUNC_0(&VAR_2.i, VAR_1, sizeof(float));






 if (!VAR_0) {
  VAR_2.i = FUNC_1(VAR_2.i);
 }


 return VAR_2.f;
}
