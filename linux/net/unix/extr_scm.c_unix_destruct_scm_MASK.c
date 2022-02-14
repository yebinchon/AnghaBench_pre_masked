
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct scm_cookie {int pid; } ;
typedef int scm ;
struct TYPE_2__ {scalar_t__ fp; int pid; } ;


 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct scm_cookie*,int ,int) ;
 int FUNC_2 (struct scm_cookie*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct scm_cookie*,struct sk_buff*) ;

void FUNC_5(struct sk_buff *VAR_0)
{
 struct scm_cookie VAR_1;

 FUNC_1(&VAR_1, 0, sizeof(VAR_1));
 VAR_1.pid = FUNC_0(VAR_0).pid;
 if (FUNC_0(VAR_0).fp)
  FUNC_4(&VAR_1, VAR_0);



 FUNC_2(&VAR_1);
 FUNC_3(VAR_0);
}
