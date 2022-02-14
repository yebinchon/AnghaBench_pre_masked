
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct devlink {TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* bus; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_3, struct devlink *VAR_4)
{
 if (FUNC_1(VAR_3, VAR_0, VAR_4->dev->bus->name))
  return -VAR_2;
 if (FUNC_1(VAR_3, VAR_1, FUNC_0(VAR_4->dev)))
  return -VAR_2;
 return 0;
}
