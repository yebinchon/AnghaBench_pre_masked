
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* itf; } ;
struct TYPE_3__ {int napi; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_0 ;
 struct net_device** VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3)
{
    FUNC_0(VAR_3 == VAR_1[0], "incorrect device");

    FUNC_1(1 | (1 << 17), 0, VAR_0);

    FUNC_2(&VAR_2.itf[0].napi);

    FUNC_3(VAR_3);

    return 0;
}
