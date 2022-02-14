
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cflayer {int id; TYPE_1__* up; } ;
typedef enum caif_ctrlcmd { ____Placeholder_caif_ctrlcmd } caif_ctrlcmd ;
struct TYPE_2__ {int (* ctrlcmd ) (TYPE_1__*,int,int ) ;} ;


 int FUNC_0 (TYPE_1__*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct cflayer *VAR_0, enum caif_ctrlcmd VAR_1,
      int VAR_2)
{
 if (VAR_0->up && VAR_0->up->ctrlcmd)
  VAR_0->up->ctrlcmd(VAR_0->up, VAR_1, VAR_0->id);
}
