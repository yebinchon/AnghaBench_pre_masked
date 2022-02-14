
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ) ;

int FUNC_7(int VAR_3, char **VAR_4)
{
 char *VAR_5 = ((void*)0);
 int VAR_6 = 0;

 if (FUNC_4(VAR_1))
  return -1;

 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5 == ((void*)0)) {
  FUNC_3("malloc() failure\n");
  return -1;
 }
 VAR_6 = FUNC_6(VAR_5, VAR_2);
 if (VAR_6)
  return VAR_6;
 FUNC_2(VAR_5, VAR_2);
 FUNC_0(VAR_5);


 VAR_5 = FUNC_1(VAR_0);
 if (VAR_5 == ((void*)0)) {
  FUNC_3("malloc() failure\n");
  return -1;
 }
 VAR_6 = FUNC_5(VAR_5, VAR_0);
 if (VAR_6)
  return VAR_6;
 FUNC_2(VAR_5, VAR_0);
 FUNC_0(VAR_5);

 return 0;
}
