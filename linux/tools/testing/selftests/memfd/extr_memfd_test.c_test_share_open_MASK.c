
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
 int VAR_6 ;
 int FUNC_0 (int) ;
 char* VAR_7 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int,int ,int ) ;
 int VAR_8 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (char*,char*,char*,char*) ;

__attribute__((used)) static void FUNC_7(char *VAR_9, char *VAR_10)
{
 int VAR_11, VAR_12;

 FUNC_6("%s %s %s\n", VAR_7, VAR_9, VAR_10);

 VAR_11 = FUNC_3("kern_memfd_share_open",
       VAR_8,
       VAR_4 | VAR_3);
 FUNC_2(VAR_11, 0);

 VAR_12 = FUNC_4(VAR_11, VAR_6, 0);
 FUNC_1(VAR_11, VAR_2);
 FUNC_2(VAR_11, VAR_2);
 FUNC_2(VAR_12, VAR_2);

 FUNC_1(VAR_12, VAR_1);
 FUNC_2(VAR_11, VAR_2 | VAR_1);
 FUNC_2(VAR_12, VAR_2 | VAR_1);

 FUNC_0(VAR_11);
 VAR_11 = FUNC_4(VAR_12, VAR_5, 0);

 FUNC_5(VAR_11, VAR_0);
 FUNC_2(VAR_11, VAR_2 | VAR_1);
 FUNC_2(VAR_12, VAR_2 | VAR_1);

 FUNC_0(VAR_12);
 VAR_12 = FUNC_4(VAR_11, VAR_6, 0);

 FUNC_1(VAR_12, VAR_0);
 FUNC_2(VAR_11, VAR_2 | VAR_1 | VAR_0);
 FUNC_2(VAR_12, VAR_2 | VAR_1 | VAR_0);

 FUNC_0(VAR_12);
 FUNC_0(VAR_11);
}
