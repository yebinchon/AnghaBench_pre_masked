
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int,int const,int) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,int *,int *) ;
 int FUNC_4 (int,int *,scalar_t__*) ;
 scalar_t__ FUNC_5 (int,int *,scalar_t__*) ;
 int FUNC_6 (int,int *,scalar_t__*,int ) ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (int) ;
 int VAR_7 ;
 int FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 () ;
 char* FUNC_11 (scalar_t__) ;

__attribute__((used)) static void FUNC_12(unsigned int VAR_8, void *VAR_9)
{
 const int VAR_10 = 32;
 __u32 VAR_11[VAR_10 + VAR_10/2], VAR_12;
 int VAR_13, VAR_14;


 for (VAR_14 = 0; VAR_14 < VAR_10 + VAR_10/2; VAR_14++)
  VAR_11[VAR_14] = FUNC_10();


 VAR_13 = FUNC_1(VAR_2, 4, sizeof(VAR_12), VAR_10,
       VAR_7);
 FUNC_0(VAR_13 < 0 && VAR_6 == VAR_4);

 VAR_13 = FUNC_1(VAR_2, 0, sizeof(VAR_12), VAR_10,
       VAR_7);

 if (VAR_7 & VAR_1) {
  FUNC_0(VAR_13 < 0 && VAR_6 == VAR_4);
  return;
 }
 if (VAR_13 < 0) {
  FUNC_9("Failed to create queuemap '%s'!\n", FUNC_11(VAR_6));
  FUNC_8(1);
 }


 for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++)
  FUNC_0(FUNC_6(VAR_13, ((void*)0), &VAR_11[VAR_14], 0) == 0);


 FUNC_0(FUNC_6(VAR_13, ((void*)0), &VAR_12, 0) == -1 &&
        VAR_6 == VAR_3);


 FUNC_0(FUNC_5(VAR_13, ((void*)0), &VAR_12) == 0 && VAR_12 == VAR_11[0]);


 for (VAR_14 = VAR_10; VAR_14 < VAR_10 + VAR_10/2; VAR_14++)
  FUNC_0(FUNC_6(VAR_13, ((void*)0), &VAR_11[VAR_14], VAR_0) == 0);


 for (VAR_14 = VAR_10/2; VAR_14 < VAR_10 + VAR_10/2; VAR_14++)
  FUNC_0(FUNC_4(VAR_13, ((void*)0), &VAR_12) == 0 &&
         VAR_12 == VAR_11[VAR_14]);


 FUNC_0(FUNC_4(VAR_13, ((void*)0), &VAR_12) == -1 &&
        VAR_6 == VAR_5);


 FUNC_0(FUNC_2(VAR_13, ((void*)0)) == -1 && VAR_6 == VAR_4);
 FUNC_0(FUNC_3(VAR_13, ((void*)0), ((void*)0)) == -1 && VAR_6 == VAR_4);

 FUNC_7(VAR_13);
}
