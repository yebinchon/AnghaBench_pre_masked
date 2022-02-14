
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int FUNC_7 () ;
 int * FUNC_8 (int) ;
 int VAR_3 ;
 int FUNC_9 (int *,int *,int ,int *) ;
 int FUNC_10 (int ,void**) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 () ;
 int FUNC_12 () ;

__attribute__((used)) static int FUNC_13(void)
{
 int VAR_7, VAR_8 = -1, VAR_9 = 0, VAR_10 = 0;
 pthread_t *VAR_11;
 void *VAR_12;

 VAR_11 = FUNC_8(sizeof(pthread_t) * VAR_3);
 if (!VAR_11) {
  FUNC_5(VAR_5, "malloc(sk_threads): NULL\n");
  return -VAR_0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_9 = FUNC_9(&VAR_11[VAR_7], ((void*)0),
         VAR_2, ((void*)0));
  if (VAR_9) {
   VAR_9 = -VAR_1;
   goto done;
  }
  VAR_10++;
 }

 while (!FUNC_7()) {
  VAR_8 = FUNC_4();
  FUNC_2(VAR_4, VAR_8);

  if (!FUNC_11())
   break;

  FUNC_2(VAR_4, -1);
  FUNC_3(VAR_8);
  VAR_8 = -1;

  if (!FUNC_12())
   break;
 }

done:
 FUNC_2(VAR_6, 1);
 for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++) {
  FUNC_10(VAR_11[VAR_7], &VAR_12);
  if (FUNC_0(VAR_12) && !VAR_9) {
   VAR_9 = FUNC_1(VAR_12);
   FUNC_5(VAR_5, "threads#%u: err:%d\n", VAR_7, VAR_9);
  }
 }
 FUNC_6(VAR_11);

 if (VAR_8 != -1)
  FUNC_3(VAR_8);

 return VAR_9;
}
