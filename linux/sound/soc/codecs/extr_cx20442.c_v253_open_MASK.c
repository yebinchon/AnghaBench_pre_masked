
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int receive_room; int * disc_data; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* write ) (struct tty_struct*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct tty_struct*,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_4)
{
 int VAR_5, VAR_6 = FUNC_0(VAR_3);


 if (!VAR_4->ops->write)
  return -VAR_0;


 if (!VAR_4->disc_data)
  return -VAR_2;

 VAR_4->receive_room = 16;
 if (VAR_4->ops->write(VAR_4, VAR_3, VAR_6) != VAR_6) {
  VAR_5 = -VAR_1;
  goto err;
 }

 return 0;
err:
 VAR_4->disc_data = ((void*)0);
 return VAR_5;
}
