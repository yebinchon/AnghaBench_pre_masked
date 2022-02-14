
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int* stat; int * cmd; } ;
struct lx6464es {int msg_lock; TYPE_1__ rmh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct lx6464es*,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct lx6464es *VAR_4, u32 VAR_5, int VAR_6,
      int *VAR_7)
{
 int VAR_8;
 u32 VAR_9 = FUNC_0(VAR_6, VAR_5);

 FUNC_3(&VAR_4->msg_lock);
 FUNC_1(&VAR_4->rmh, VAR_0);

 VAR_4->rmh.cmd[0] |= VAR_9;

 VAR_8 = FUNC_2(VAR_4, &VAR_4->rmh);

 *VAR_7 = (VAR_4->rmh.stat[0] & VAR_2) ? VAR_3 : VAR_1;

 FUNC_4(&VAR_4->msg_lock);
 return VAR_8;
}
