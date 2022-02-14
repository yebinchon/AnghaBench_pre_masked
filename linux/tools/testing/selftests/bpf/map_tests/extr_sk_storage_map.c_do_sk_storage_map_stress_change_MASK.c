
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int) ;
 int VAR_5 ;
 int FUNC_8 (int *,int *,int ,int*) ;
 int FUNC_9 (int ,void**) ;
 int VAR_6 ;
 int FUNC_10 (int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12(void)
{
 int VAR_10, VAR_11, VAR_12 = -1, VAR_13 = 0, VAR_14 = 0;
 pthread_t *VAR_15;
 void *VAR_16;

 VAR_15 = FUNC_7(sizeof(pthread_t) * VAR_5);
 if (!VAR_15) {
  FUNC_5(VAR_7, "malloc(sk_threads): NULL\n");
  return -VAR_1;
 }

 VAR_11 = FUNC_10(VAR_0, VAR_2, 0);
 if (VAR_11 == -1) {
  VAR_13 = -VAR_4;
  goto done;
 }

 VAR_12 = FUNC_4();
 FUNC_2(VAR_6, VAR_12);

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  if (VAR_10 & 0x1)
   VAR_13 = FUNC_8(&VAR_15[VAR_10], ((void*)0),
          VAR_9, &VAR_11);
  else
   VAR_13 = FUNC_8(&VAR_15[VAR_10], ((void*)0),
          VAR_3, &VAR_11);
  if (VAR_13) {
   VAR_13 = -VAR_4;
   goto done;
  }
  VAR_14++;
 }

 FUNC_11();

done:
 FUNC_2(VAR_8, 1);
 for (VAR_10 = 0; VAR_10 < VAR_14; VAR_10++) {
  FUNC_9(VAR_15[VAR_10], &VAR_16);
  if (FUNC_0(VAR_16) && !VAR_13) {
   VAR_13 = FUNC_1(VAR_16);
   FUNC_5(VAR_7, "threads#%u: err:%d\n", VAR_10, VAR_13);
  }
 }
 FUNC_6(VAR_15);

 if (VAR_11 != -1)
  FUNC_3(VAR_11);
 FUNC_3(VAR_12);

 return VAR_13;
}
