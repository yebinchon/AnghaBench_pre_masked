
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
typedef int __be16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, int VAR_1, size_t VAR_2, char VAR_3,
      __be16 *VAR_4)
{
 u_int16_t VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = VAR_1; VAR_6 < VAR_2; VAR_6++) {

  if (VAR_0[VAR_6] == VAR_3) {
   if (VAR_5 == 0)
    break;
   *VAR_4 = FUNC_0(VAR_5);
   FUNC_1("get_port: return %d\n", VAR_5);
   return VAR_6 + 1;
  }
  else if (VAR_0[VAR_6] >= '0' && VAR_0[VAR_6] <= '9')
   VAR_5 = VAR_5*10 + VAR_0[VAR_6] - '0';
  else {
   FUNC_1("get_port: invalid char.\n");
   break;
  }
 }
 return 0;
}
