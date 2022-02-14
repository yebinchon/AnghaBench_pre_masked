
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int * disc_data; } ;
struct TYPE_2__ {int (* open ) (struct tty_struct*) ;} ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct tty_struct*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_3)
{
 int VAR_4;

 if (!VAR_1)
  return -VAR_0;





 VAR_3->disc_data = VAR_1;

 VAR_4 = VAR_2.open(VAR_3);

 if (VAR_4 < 0)
  VAR_3->disc_data = ((void*)0);

 return VAR_4;
}
