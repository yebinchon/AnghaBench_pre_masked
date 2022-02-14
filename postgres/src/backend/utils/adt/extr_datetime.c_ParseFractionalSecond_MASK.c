
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fsec_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (double) ;
 double FUNC_2 (char*,char**) ;

__attribute__((used)) static int
FUNC_3(char *VAR_2, fsec_t *VAR_3)
{
 double VAR_4;


 FUNC_0(*VAR_2 == '.');
 VAR_1 = 0;
 VAR_4 = FUNC_2(VAR_2, &VAR_2);

 if (*VAR_2 != '\0' || VAR_1 != 0)
  return VAR_0;
 *VAR_3 = FUNC_1(VAR_4 * 1000000);
 return 0;
}
