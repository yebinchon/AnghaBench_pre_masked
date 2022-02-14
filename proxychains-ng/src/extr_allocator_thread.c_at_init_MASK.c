
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_attr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ) ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_5 (void*,int ,int) ;
 void* FUNC_6 (int ,int,int,int,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int *,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_11(void) {
 FUNC_2();
 void *VAR_11 = FUNC_6(0, 4096, VAR_3|VAR_2, VAR_0|VAR_1, -1, 0);
 FUNC_3(VAR_11);
 VAR_7 = VAR_11;
 VAR_6 = (void*)((char*)VAR_11 + 2048);

 FUNC_1(VAR_7);
 FUNC_5(VAR_6, 0, sizeof *VAR_6);
 FUNC_4(VAR_8);
 FUNC_4(VAR_9);
 pthread_attr_t VAR_12;
 FUNC_8(&VAR_12);
 FUNC_9(&VAR_12, FUNC_0(16 * 1024, VAR_4));
 FUNC_10(&VAR_5, &VAR_12, VAR_10, 0);
 FUNC_7(&VAR_12);
}
