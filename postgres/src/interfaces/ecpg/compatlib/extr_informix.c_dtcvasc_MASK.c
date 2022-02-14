
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp ;


 int VAR_0 ;
 int FUNC_0 (char*,char**) ;
 int VAR_1 ;

int
FUNC_1(char *VAR_2, timestamp * VAR_3)
{
 timestamp VAR_4;
 int VAR_5;
 char **VAR_6 = &VAR_2;

 VAR_1 = 0;
 VAR_4 = FUNC_0(VAR_2, VAR_6);
 VAR_5 = VAR_1;
 if (VAR_5)

  return VAR_5;
 if (**VAR_6)
 {

  return VAR_0;
 }



 *VAR_3 = VAR_4;

 return 0;
}
