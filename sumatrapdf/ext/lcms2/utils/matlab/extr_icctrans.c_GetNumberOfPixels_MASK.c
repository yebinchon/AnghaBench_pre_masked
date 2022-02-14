
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mxArray ;


 int FUNC_0 (char*,int) ;
 int* FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static
size_t FUNC_3(const mxArray* VAR_0)
{
 int VAR_1 = FUNC_2(VAR_0);
 const int *VAR_2 = FUNC_1(VAR_0);

 switch (VAR_1) {

  case 1: return 1;
  case 2: return VAR_2[0];
  case 3: return VAR_2[0]*VAR_2[1];

  default:
   FUNC_0("Unsupported array of %d dimensions", VAR_1);
   return 0;
 }
}
