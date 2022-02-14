
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int * cmd; } ;
struct lx6464es {int msg_lock; TYPE_1__ rmh; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct lx6464es*,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct lx6464es *VAR_1, u32 VAR_2, int VAR_3)
{
 int VAR_4;
 u32 VAR_5 = FUNC_0(VAR_3, VAR_2);

 FUNC_3(&VAR_1->msg_lock);
 FUNC_1(&VAR_1->rmh, VAR_0);

 VAR_1->rmh.cmd[0] |= VAR_5;

 VAR_4 = FUNC_2(VAR_1, &VAR_1->rmh);

 FUNC_4(&VAR_1->msg_lock);
 return VAR_4;
}
