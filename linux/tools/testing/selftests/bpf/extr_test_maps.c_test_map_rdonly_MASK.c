
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int key ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int,int ,int) ;
 int FUNC_2 (int,int*,int*) ;
 int FUNC_3 (int,int*,int*) ;
 int FUNC_4 (int,int*,int*,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int) ;
 int VAR_7 ;
 int FUNC_6 (char*,char*) ;
 char* FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8(void)
{
 int VAR_8, VAR_9 = 0, VAR_10 = 0;

 VAR_8 = FUNC_1(VAR_2, sizeof(VAR_9), sizeof(VAR_10),
       VAR_5, VAR_7 | VAR_1);
 if (VAR_8 < 0) {
  FUNC_6("Failed to create map for read only test '%s'!\n",
         FUNC_7(VAR_6));
  FUNC_5(1);
 }

 VAR_9 = 1;
 VAR_10 = 1234;

 FUNC_0(FUNC_4(VAR_8, &VAR_9, &VAR_10, VAR_0) == -1 &&
        VAR_6 == VAR_4);


 FUNC_0(FUNC_3(VAR_8, &VAR_9, &VAR_10) == -1 && VAR_6 == VAR_3);
 FUNC_0(FUNC_2(VAR_8, &VAR_9, &VAR_10) == -1 && VAR_6 == VAR_3);
}
