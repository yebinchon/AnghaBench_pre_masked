
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
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int,int,int ) ;
 int FUNC_2 (int,long long*) ;
 int FUNC_3 (int,long long*,long long*) ;
 int FUNC_4 (int,long long*,long long*) ;
 int FUNC_5 (int,long long*,long long*,int) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (int) ;
 int VAR_9 ;
 int FUNC_8 (char*,char*) ;
 char* FUNC_9 (scalar_t__) ;

__attribute__((used)) static void FUNC_10(unsigned int VAR_10, void *VAR_11)
{
 long long VAR_12, VAR_13, VAR_14, VAR_15;
 int VAR_16;

 VAR_16 = FUNC_1(VAR_2, sizeof(VAR_12), sizeof(VAR_15),
       2, VAR_9);
 if (VAR_16 < 0) {
  FUNC_8("Failed to create hashmap '%s'!\n", FUNC_9(VAR_8));
  FUNC_7(1);
 }

 VAR_12 = 1;
 VAR_15 = 1234;

 FUNC_0(FUNC_5(VAR_16, &VAR_12, &VAR_15, VAR_0) == 0);

 VAR_15 = 0;

 FUNC_0(FUNC_5(VAR_16, &VAR_12, &VAR_15, VAR_3) == -1 &&

        VAR_8 == VAR_5);


 FUNC_0(FUNC_5(VAR_16, &VAR_12, &VAR_15, -1) == -1 &&
        VAR_8 == VAR_6);


 FUNC_0(FUNC_4(VAR_16, &VAR_12, &VAR_15) == 0 && VAR_15 == 1234);

 VAR_12 = 2;

 FUNC_0(FUNC_4(VAR_16, &VAR_12, &VAR_15) == -1 && VAR_8 == VAR_7);


 FUNC_0(FUNC_5(VAR_16, &VAR_12, &VAR_15, VAR_1) == -1 &&

        VAR_8 == VAR_7);


 FUNC_0(FUNC_5(VAR_16, &VAR_12, &VAR_15, VAR_3) == 0);




 VAR_12 = 0;
 FUNC_0(FUNC_5(VAR_16, &VAR_12, &VAR_15, VAR_3) == -1 &&
        VAR_8 == VAR_4);


 VAR_12 = 1;
 FUNC_0(FUNC_5(VAR_16, &VAR_12, &VAR_15, VAR_1) == 0);
 VAR_12 = 2;
 FUNC_0(FUNC_5(VAR_16, &VAR_12, &VAR_15, VAR_0) == 0);
 VAR_12 = 3;
 FUNC_0(FUNC_5(VAR_16, &VAR_12, &VAR_15, VAR_3) == -1 &&
        VAR_8 == VAR_4);


 VAR_12 = 0;
 FUNC_0(FUNC_2(VAR_16, &VAR_12) == -1 && VAR_8 == VAR_7);


 FUNC_0(FUNC_3(VAR_16, ((void*)0), &VAR_14) == 0 &&
        (VAR_14 == 1 || VAR_14 == 2));
 FUNC_0(FUNC_3(VAR_16, &VAR_12, &VAR_13) == 0 &&
        (VAR_13 == VAR_14));
 FUNC_0(FUNC_3(VAR_16, &VAR_13, &VAR_13) == 0 &&
        (VAR_13 == 1 || VAR_13 == 2) &&
        (VAR_13 != VAR_14));
 FUNC_0(FUNC_3(VAR_16, &VAR_13, &VAR_13) == -1 &&
        VAR_8 == VAR_7);


 VAR_12 = 1;
 FUNC_0(FUNC_2(VAR_16, &VAR_12) == 0);
 VAR_12 = 2;
 FUNC_0(FUNC_2(VAR_16, &VAR_12) == 0);
 FUNC_0(FUNC_2(VAR_16, &VAR_12) == -1 && VAR_8 == VAR_7);

 VAR_12 = 0;

 FUNC_0(FUNC_3(VAR_16, ((void*)0), &VAR_13) == -1 &&
        VAR_8 == VAR_7);
 FUNC_0(FUNC_3(VAR_16, &VAR_12, &VAR_13) == -1 &&
        VAR_8 == VAR_7);

 FUNC_6(VAR_16);
}
