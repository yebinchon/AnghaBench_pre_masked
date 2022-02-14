
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_acct {int head; int refcnt; } ;


 int VAR_0 ;
 int FUNC_0 (struct nf_acct*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct nf_acct *VAR_2)
{
 int VAR_3 = 0;




 if (FUNC_2(&VAR_2->refcnt)) {

  FUNC_1(&VAR_2->head);
  FUNC_0(VAR_2, VAR_1);
 } else {
  VAR_3 = -VAR_0;
 }
 return VAR_3;
}
