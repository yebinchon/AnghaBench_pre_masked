
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int * stat; } ;
struct lx6464es {int msg_lock; TYPE_1__ rmh; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (struct lx6464es*,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct lx6464es *VAR_1, u32 *VAR_2)
{
 u16 VAR_3;

 FUNC_2(&VAR_1->msg_lock);

 FUNC_0(&VAR_1->rmh, VAR_0);
 VAR_3 = FUNC_1(VAR_1, &VAR_1->rmh);

 *VAR_2 = VAR_1->rmh.stat[1];
 FUNC_3(&VAR_1->msg_lock);
 return VAR_3;
}
