
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int receive_room; int * disc_data; TYPE_1__* ops; } ;
struct TYPE_2__ {int write; } ;


 int VAR_0 ;
 int FUNC_0 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_1)
{



 if (!VAR_1->ops->write)
  return -VAR_0;

 VAR_1->disc_data = ((void*)0);
 VAR_1->receive_room = 65536;


 FUNC_0(VAR_1);

 return 0;
}
