
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
struct Copy64 {double d; void* i; } ;


 int FUNC_0 (void**,void*,int) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static double FUNC_2(int VAR_0, void * VAR_1)
{
 union Copy64 {
  double d;
  uint64_t i;
 } VAR_2;
 FUNC_0(&VAR_2.i, VAR_1, sizeof(double));






 if (!VAR_0) {
  VAR_2.i = FUNC_1(VAR_2.i);
 }


 return VAR_2.d;
}
