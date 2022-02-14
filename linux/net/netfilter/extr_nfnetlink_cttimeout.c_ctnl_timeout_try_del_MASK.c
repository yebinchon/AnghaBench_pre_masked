
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct ctnl_timeout {int timeout; int head; int refcnt; } ;


 int VAR_0 ;
 int FUNC_0 (struct ctnl_timeout*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net*,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net *VAR_2, struct ctnl_timeout *VAR_3)
{
 int VAR_4 = 0;




 if (FUNC_3(&VAR_3->refcnt)) {

  FUNC_1(&VAR_3->head);
  FUNC_2(VAR_2, &VAR_3->timeout);
  FUNC_0(VAR_3, VAR_1);
 } else {
  VAR_4 = -VAR_0;
 }
 return VAR_4;
}
