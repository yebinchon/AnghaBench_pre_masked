
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int VAR_1 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (char*,size_t,char*,int ,int ) ;
 scalar_t__ FUNC_4 (char*,char) ;

int
FUNC_5(char *VAR_2, size_t VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_1);

 VAR_5 = FUNC_3(VAR_2, VAR_3, "%lu,%lu$", FUNC_1(VAR_4), FUNC_0(VAR_4));


 if (FUNC_4(VAR_2, '$')) {
  VAR_2[VAR_5-1] = '\0';
  return 0;
 }
 return VAR_0;
}
