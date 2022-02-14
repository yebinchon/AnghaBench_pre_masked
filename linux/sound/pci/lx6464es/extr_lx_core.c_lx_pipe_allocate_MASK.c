
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int* cmd; } ;
struct lx6464es {TYPE_1__* card; int msg_lock; TYPE_2__ rmh; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (struct lx6464es*,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct lx6464es *VAR_1, u32 VAR_2, int VAR_3,
       int VAR_4)
{
 int VAR_5;
 u32 VAR_6 = FUNC_0(VAR_3, VAR_2);

 FUNC_4(&VAR_1->msg_lock);
 FUNC_2(&VAR_1->rmh, VAR_0);

 VAR_1->rmh.cmd[0] |= VAR_6;
 VAR_1->rmh.cmd[0] |= VAR_4;

 VAR_5 = FUNC_3(VAR_1, &VAR_1->rmh);
 FUNC_5(&VAR_1->msg_lock);

 if (VAR_5 != 0)
  FUNC_1(VAR_1->card->dev, "could not allocate pipe\n");

 return VAR_5;
}
