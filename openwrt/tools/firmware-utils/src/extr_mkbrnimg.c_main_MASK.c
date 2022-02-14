
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char*,char*) ;
 int FUNC_4 (char*,int,int) ;
 char* VAR_4 ;
 int FUNC_5 (int*,char***) ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,int ,scalar_t__) ;

int FUNC_10(int VAR_7, char **VAR_8)
{
 int VAR_9;
 int VAR_10;

 FUNC_5(&VAR_7, &VAR_8);

 if (VAR_7 < 1)
  FUNC_8("wrong number of arguments");

 if ((VAR_9 = FUNC_4(VAR_4, VAR_2|VAR_0|VAR_1, 0644)) == -1)
 {
  FUNC_3(VAR_6, "Error opening '%s' for writing: %s\n", VAR_4, FUNC_6(VAR_3));
  FUNC_2(1);
 }

 for (VAR_10=0; VAR_10<VAR_7; VAR_10++) {
  FUNC_0(VAR_9, VAR_8[VAR_10], VAR_10 == 0);
 }
 FUNC_9(VAR_9, VAR_5, FUNC_7(VAR_5)+1);
 FUNC_1(VAR_9);

 return 0;
}
