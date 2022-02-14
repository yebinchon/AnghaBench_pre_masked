
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct vport {TYPE_1__* dev; } ;
struct TYPE_5__ {int priv_flags; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;

void FUNC_5(struct vport *VAR_1)
{
 FUNC_0();
 VAR_1->dev->priv_flags &= ~VAR_0;
 FUNC_3(VAR_1->dev);
 FUNC_4(VAR_1->dev,
    FUNC_2(VAR_1->dev));
 FUNC_1(VAR_1->dev, -1);
}
