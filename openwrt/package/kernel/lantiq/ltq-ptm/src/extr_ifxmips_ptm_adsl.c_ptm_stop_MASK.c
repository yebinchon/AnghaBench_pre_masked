
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* itf; } ;
struct TYPE_3__ {int napi; } ;


 int FUNC_0 (struct net_device**) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int,int ,int ) ;
 int VAR_0 ;
 struct net_device** VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3)
{
    int VAR_4;

    for ( VAR_4 = 0; VAR_4 < FUNC_0(VAR_1) && VAR_1[VAR_4] != VAR_3; VAR_4++ );
    FUNC_1(VAR_4 >= 0 && VAR_4 < FUNC_0(VAR_1), "ndev = %d (wrong value)", VAR_4);

    FUNC_2((1 << VAR_4) | (1 << (VAR_4 + 16)), 0, VAR_0);

    FUNC_3(&VAR_2.itf[VAR_4].napi);

    FUNC_4(VAR_3);

    return 0;
}
