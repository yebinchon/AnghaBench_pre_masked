
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
 char* VAR_6 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*,int ,int) ;
 int VAR_7 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (char*,char*,char*,char*) ;

__attribute__((used)) static void FUNC_7(char *VAR_8, char *VAR_9)
{
 int VAR_10, VAR_11;

 FUNC_6("%s %s %s\n", VAR_6, VAR_8, VAR_9);

 VAR_10 = FUNC_4("kern_memfd_share_dup",
       VAR_7,
       VAR_5 | VAR_4);
 FUNC_3(VAR_10, 0);

 VAR_11 = FUNC_2(VAR_10);
 FUNC_3(VAR_11, 0);

 FUNC_1(VAR_10, VAR_3);
 FUNC_3(VAR_10, VAR_3);
 FUNC_3(VAR_11, VAR_3);

 FUNC_1(VAR_11, VAR_2);
 FUNC_3(VAR_10, VAR_3 | VAR_2);
 FUNC_3(VAR_11, VAR_3 | VAR_2);

 FUNC_1(VAR_10, VAR_1);
 FUNC_3(VAR_10, VAR_3 | VAR_2 | VAR_1);
 FUNC_3(VAR_11, VAR_3 | VAR_2 | VAR_1);

 FUNC_5(VAR_10, VAR_0);
 FUNC_5(VAR_11, VAR_0);
 FUNC_5(VAR_10, VAR_1);
 FUNC_5(VAR_11, VAR_1);

 FUNC_0(VAR_11);

 FUNC_5(VAR_10, VAR_0);
 FUNC_0(VAR_10);
}
