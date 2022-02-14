
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int* stat; int * cmd; } ;
struct lx6464es {int msg_lock; TYPE_1__ rmh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct lx6464es*,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct lx6464es *VAR_2, u32 VAR_3, int VAR_4,
         u64 *VAR_5)
{
 int VAR_6;
 u32 VAR_7 = FUNC_0(VAR_4, VAR_3);

 FUNC_3(&VAR_2->msg_lock);
 FUNC_1(&VAR_2->rmh, VAR_0);

 VAR_2->rmh.cmd[0] |= VAR_7;

 VAR_6 = FUNC_2(VAR_2, &VAR_2->rmh);

 *VAR_5 = ((u64) (VAR_2->rmh.stat[0] & VAR_1)
        << 32)
  + VAR_2->rmh.stat[1];

 FUNC_4(&VAR_2->msg_lock);
 return VAR_6;
}
