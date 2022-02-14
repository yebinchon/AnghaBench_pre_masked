
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsd_t ;


 int VAR_0 ;
 int FUNC_0 (void*,char*) ;
 int FUNC_1 (int ,int,char*) ;
 int VAR_1 ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void *
FUNC_8(void *VAR_2) {
 int VAR_3 = (int)(uintptr_t)VAR_2;
 void *VAR_4;

 tsd_t *VAR_5 = FUNC_4();
 FUNC_1(FUNC_6(VAR_5), VAR_0,
     "Initial tsd get should return initialization value");

 VAR_4 = FUNC_3(1);
 FUNC_0(VAR_4, "Unexpected malloc() failure");

 FUNC_7(VAR_5, VAR_3);
 FUNC_1(FUNC_6(VAR_5), VAR_3,
     "After tsd set, tsd get should return value that was set");

 VAR_3 = 0;
 FUNC_1(FUNC_6(VAR_5), (int)(uintptr_t)VAR_2,
     "Resetting local data should have no effect on tsd");

 FUNC_5(VAR_5, &VAR_1);

 FUNC_2(VAR_4);
 return ((void*)0);
}
