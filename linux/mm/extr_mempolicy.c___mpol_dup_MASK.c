
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct mempolicy {int refcnt; } ;
typedef int nodemask_t ;
struct TYPE_5__ {struct mempolicy* mempolicy; } ;


 int VAR_0 ;
 struct mempolicy* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_3 () ;
 struct mempolicy* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct mempolicy*,int *) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

struct mempolicy *FUNC_8(struct mempolicy *VAR_4)
{
 struct mempolicy *VAR_5 = FUNC_4(VAR_3, VAR_1);

 if (!VAR_5)
  return FUNC_0(-VAR_0);


 if (VAR_4 == VAR_2->mempolicy) {
  FUNC_6(VAR_2);
  *VAR_5 = *VAR_4;
  FUNC_7(VAR_2);
 } else
  *VAR_5 = *VAR_4;

 if (FUNC_3()) {
  nodemask_t VAR_6 = FUNC_2(VAR_2);
  FUNC_5(VAR_5, &VAR_6);
 }
 FUNC_1(&VAR_5->refcnt, 1);
 return VAR_5;
}
