
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vport {TYPE_1__* dev; } ;
struct datapath {int dummy; } ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 struct vport* FUNC_0 (struct datapath const*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(const struct datapath *VAR_1)
{
 struct vport *VAR_2;
 int VAR_3;

 FUNC_1();

 VAR_2 = FUNC_0(VAR_1, VAR_0);
 if (VAR_2)
  VAR_3 = VAR_2->dev->ifindex;
 else
  VAR_3 = 0;

 FUNC_2();

 return VAR_3;
}
