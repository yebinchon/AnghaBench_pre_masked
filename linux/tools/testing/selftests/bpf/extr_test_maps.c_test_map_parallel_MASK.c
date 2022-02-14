
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int key ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int,int,int ) ;
 int FUNC_2 (int,int*,int*) ;
 scalar_t__ FUNC_3 (int,int*,int*) ;
 int FUNC_4 (int,int*,int*,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (int) ;
 int VAR_9 ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,int ,int*) ;
 char* FUNC_8 (scalar_t__) ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_9(void)
{
 int VAR_11, VAR_12, VAR_13 = 0, VAR_14 = 0;
 int VAR_15[2];

 VAR_12 = FUNC_1(VAR_0, sizeof(VAR_13), sizeof(VAR_14),
       VAR_6, VAR_9);
 if (VAR_12 < 0) {
  FUNC_6("Failed to create map for parallel test '%s'!\n",
         FUNC_8(VAR_8));
  FUNC_5(1);
 }






 VAR_15[0] = VAR_12;
 VAR_15[1] = VAR_3;
 FUNC_7(VAR_7, VAR_10, VAR_15);


 FUNC_0(FUNC_4(VAR_12, &VAR_13, &VAR_14, VAR_1) == -1 &&
        VAR_8 == VAR_4);


 FUNC_0(FUNC_2(VAR_12, ((void*)0), &VAR_13) == 0);
 VAR_13 = -1;
 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
  FUNC_0(FUNC_2(VAR_12, &VAR_13, &VAR_13) == 0);
 FUNC_0(FUNC_2(VAR_12, &VAR_13, &VAR_13) == -1 && VAR_8 == VAR_5);


 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  VAR_13 = VAR_6 - VAR_11 - 1;

  FUNC_0(FUNC_3(VAR_12, &VAR_13, &VAR_14) == 0 &&
         VAR_14 == VAR_13);
 }


 VAR_15[1] = VAR_2;
 FUNC_7(VAR_7, VAR_10, VAR_15);


 VAR_13 = -1;
 FUNC_0(FUNC_2(VAR_12, ((void*)0), &VAR_13) == -1 && VAR_8 == VAR_5);
 FUNC_0(FUNC_2(VAR_12, &VAR_13, &VAR_13) == -1 && VAR_8 == VAR_5);
}
