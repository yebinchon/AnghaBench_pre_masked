
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int id; TYPE_2__* up; } ;
struct caif_device_entry {TYPE_1__ layer; } ;
struct TYPE_4__ {int (* ctrlcmd ) (TYPE_2__*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct caif_device_entry* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct caif_device_entry*) ;
 int FUNC_2 (struct caif_device_entry*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_2, int VAR_3)
{
 struct caif_device_entry *VAR_4;

 FUNC_3();

 VAR_4 = FUNC_0(VAR_2);
 if (!VAR_4 || !VAR_4->layer.up || !VAR_4->layer.up->ctrlcmd) {
  FUNC_4();
  return;
 }

 FUNC_1(VAR_4);
 FUNC_4();

 VAR_4->layer.up->ctrlcmd(VAR_4->layer.up,
     VAR_3 ?
     VAR_1 :
     VAR_0,
     VAR_4->layer.id);
 FUNC_2(VAR_4);
}
