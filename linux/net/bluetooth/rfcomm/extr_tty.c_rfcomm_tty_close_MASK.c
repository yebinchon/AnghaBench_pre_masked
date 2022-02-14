
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {scalar_t__ driver_data; } ;
struct TYPE_2__ {int count; } ;
struct rfcomm_dev {TYPE_1__ port; int dlc; } ;
struct file {int dummy; } ;


 int FUNC_0 (char*,struct tty_struct*,struct rfcomm_dev*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,struct tty_struct*,struct file*) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_0, struct file *VAR_1)
{
 struct rfcomm_dev *VAR_2 = (struct rfcomm_dev *) VAR_0->driver_data;

 FUNC_0("tty %p dev %p dlc %p opened %d", VAR_0, VAR_2, VAR_2->dlc,
      VAR_2->port.count);

 FUNC_1(&VAR_2->port, VAR_0, VAR_1);
}
