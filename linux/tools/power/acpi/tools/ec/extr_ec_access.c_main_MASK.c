
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int,char**) ;
 int VAR_6 ;
 int FUNC_6 (int,int) ;
 int VAR_7 ;
 int FUNC_7 (char*,int ) ;
 int VAR_8 ;
 int FUNC_8 (int,int ,int ) ;
 int VAR_9 ;

int FUNC_9(int VAR_10, char *VAR_11[])
{
 int VAR_12 = VAR_3;
 int VAR_13;

 FUNC_5(VAR_10, VAR_11);

 if (VAR_7 == 0)
  VAR_12 = VAR_4;
 else if (VAR_7 == 1)
  VAR_12 = VAR_3;
 else
  FUNC_7(VAR_11[0], VAR_1);

 VAR_13 = FUNC_4(VAR_5, VAR_12);
 if (VAR_13 == -1)
  FUNC_2(VAR_1, "%s", VAR_5);

 if (VAR_7)
  if (VAR_6 == -1)
   FUNC_1(VAR_13);
  else if (VAR_6 < 0 ||
    VAR_6 >= VAR_0)
   FUNC_7(VAR_11[0], VAR_1);
  else
   FUNC_6(VAR_13, VAR_6);
 else
  FUNC_8(VAR_13, VAR_8, VAR_9);
 FUNC_0(VAR_13);

 FUNC_3(VAR_2);
}
