
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_2__ {int (* write_wakeup ) (struct tty_struct*) ;} ;


 int FUNC_0 (struct tty_struct*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct tty_struct *VAR_1)
{
 VAR_0.write_wakeup(VAR_1);
}
