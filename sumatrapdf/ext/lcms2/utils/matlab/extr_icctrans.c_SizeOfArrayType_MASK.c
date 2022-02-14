
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mxArray ;


 int FUNC_0 (char*) ;

 int FUNC_1 (int const*) ;






__attribute__((used)) static
size_t FUNC_2(const mxArray *VAR_0)
{

 switch (FUNC_1(VAR_0)) {

  case 131: return 1;
  case 128: return 1;
  case 132: return 2;
  case 129: return 2;
  case 130: return 4;
  case 133: return 0;


  default:
   FUNC_0("Unsupported data type");
   return 0;
 }
}
