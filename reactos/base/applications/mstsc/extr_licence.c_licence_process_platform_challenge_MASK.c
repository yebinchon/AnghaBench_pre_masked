
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int sealed_buffer ;
typedef int STREAM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int **,int **) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (void*,char*,char*,int) ;
 void* FUNC_5 () ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*,char*,int) ;
 int FUNC_8 (int *,int,int ,int,int *,int) ;

__attribute__((used)) static void
FUNC_9(STREAM VAR_5)
{
 uint8 *VAR_6 = ((void*)0), *VAR_7;
 uint8 VAR_8[VAR_2], VAR_9[VAR_2];
 uint8 VAR_10[VAR_0], VAR_11[VAR_0];
 uint8 VAR_12[VAR_2 + VAR_0];
 uint8 VAR_13[VAR_1];
 void * VAR_14;


 FUNC_1(VAR_5, &VAR_6, &VAR_7);
 FUNC_3(VAR_8, VAR_6, VAR_2);


 VAR_14 = FUNC_5();
 FUNC_7(VAR_14, (char *)VAR_3, 16);
 FUNC_4(VAR_14, (char *)VAR_6, (char *)VAR_9, VAR_2);
 FUNC_6(VAR_14);


 FUNC_0(VAR_10);
 FUNC_3(VAR_12, VAR_9, VAR_2);
 FUNC_3(VAR_12 + VAR_2, VAR_10, VAR_0);
 FUNC_8(VAR_13, 16, VAR_4, 16, VAR_12, sizeof(VAR_12));


 VAR_14 = FUNC_5();
 FUNC_7(VAR_14, (char *)VAR_3, 16);
 FUNC_4(VAR_14, (char *)VAR_10, (char *)VAR_11, VAR_0);

 FUNC_2(VAR_8, VAR_11, VAR_13);
}
