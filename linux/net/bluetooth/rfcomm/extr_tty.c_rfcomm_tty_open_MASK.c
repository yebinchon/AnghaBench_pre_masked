
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int index; struct rfcomm_dev* driver_data; } ;
struct TYPE_2__ {int count; } ;
struct rfcomm_dev {int dlc; TYPE_1__ port; int channel; int dst; } ;
struct file {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rfcomm_dev*) ;
 int FUNC_3 (TYPE_1__*,struct tty_struct*,struct file*) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_0, struct file *VAR_1)
{
 struct rfcomm_dev *VAR_2 = VAR_0->driver_data;
 int VAR_3;

 FUNC_0("tty %p id %d", VAR_0, VAR_0->index);

 FUNC_0("dev %p dst %pMR channel %d opened %d", VAR_2, &VAR_2->dst,
        VAR_2->channel, VAR_2->port.count);

 VAR_3 = FUNC_3(&VAR_2->port, VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;






 FUNC_2(VAR_2);

 FUNC_1(VAR_2->dlc);

 return 0;
}
