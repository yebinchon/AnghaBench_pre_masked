
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pthread_t ;
struct TYPE_2__ {scalar_t__ (* release_pages ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int *,int ,void*) ;
 scalar_t__ FUNC_3 (int ,void**) ;
 int FUNC_4 (int *) ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__* VAR_13 ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static int FUNC_7(unsigned long *VAR_14)
{
 unsigned long VAR_15;
 pthread_t VAR_16[VAR_7];
 pthread_t VAR_17[VAR_7];
 pthread_t VAR_18[VAR_7];
 void **VAR_19 = (void **) VAR_14;

 VAR_5 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++) {
  if (FUNC_2(&VAR_16[VAR_15], &VAR_2,
       VAR_6, (void *)VAR_15))
   return 1;
  if (VAR_4 & VAR_0) {
   if (FUNC_2(&VAR_17[VAR_15], &VAR_2,
        VAR_10, (void *)VAR_15))
    return 1;
  } else {
   if (FUNC_2(&VAR_17[VAR_15], &VAR_2,
        VAR_12,
        &VAR_19[VAR_15]))
    return 1;
   FUNC_4(&VAR_11);
  }
  if (FUNC_2(&VAR_18[VAR_15], &VAR_2,
       VAR_3, (void *)VAR_15))
   return 1;
 }
 for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++)
  if (FUNC_3(VAR_18[VAR_15], ((void*)0)))
   return 1;
 if (VAR_13->release_pages(VAR_1))
  return 1;


 VAR_5 = 1;
 for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++)
  if (FUNC_3(VAR_16[VAR_15], ((void*)0)))
   return 1;

 for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++) {
  char VAR_20;
  if (VAR_4 & VAR_0) {
   if (FUNC_6(VAR_8[VAR_15*2+1], &VAR_20, 1) != 1) {
    FUNC_0(VAR_9, "pipefd write error\n");
    return 1;
   }
   if (FUNC_3(VAR_17[VAR_15], &VAR_19[VAR_15]))
    return 1;
  } else {
   if (FUNC_1(VAR_17[VAR_15]))
    return 1;
   if (FUNC_3(VAR_17[VAR_15], ((void*)0)))
    return 1;
  }
 }

 return 0;
}
