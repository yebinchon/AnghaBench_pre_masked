
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct decl_info {int dummy; } ;
struct signal_info {int signalling; struct decl_info func; int mutex; int callbacks; int * next; } ;
typedef int pthread_mutexattr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct signal_info*) ;
 int FUNC_1 (int ,char*) ;
 struct signal_info* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct decl_info*) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int ) ;

__attribute__((used)) static inline struct signal_info *FUNC_8(struct decl_info *VAR_2)
{
 pthread_mutexattr_t VAR_3;
 struct signal_info *VAR_4;

 if (FUNC_6(&VAR_3) != 0)
  return ((void*)0);
 if (FUNC_7(&VAR_3, VAR_1) != 0)
  return ((void*)0);

 VAR_4 = FUNC_2(sizeof(struct signal_info));

 VAR_4->func = *VAR_2;
 VAR_4->next = ((void*)0);
 VAR_4->signalling = 0;
 FUNC_3(VAR_4->callbacks);

 if (FUNC_5(&VAR_4->mutex, &VAR_3) != 0) {
  FUNC_1(VAR_0, "Could not create signal");

  FUNC_4(&VAR_4->func);
  FUNC_0(VAR_4);
  return ((void*)0);
 }

 return VAR_4;
}
