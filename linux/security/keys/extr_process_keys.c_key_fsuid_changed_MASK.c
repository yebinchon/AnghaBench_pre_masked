
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cred {TYPE_1__* thread_keyring; int fsuid; } ;
struct TYPE_2__ {int sem; int uid; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct cred *VAR_0)
{

 if (VAR_0->thread_keyring) {
  FUNC_0(&VAR_0->thread_keyring->sem);
  VAR_0->thread_keyring->uid = VAR_0->fsuid;
  FUNC_1(&VAR_0->thread_keyring->sem);
 }
}
