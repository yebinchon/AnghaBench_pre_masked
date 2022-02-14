
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct posix_clock_desc {scalar_t__ clk; struct file* fp; } ;
struct file {int private_data; TYPE_1__* f_op; } ;
typedef int clockid_t ;
struct TYPE_2__ {scalar_t__ open; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const) ;
 struct file* FUNC_1 (int ) ;
 int FUNC_2 (struct file*) ;
 scalar_t__ FUNC_3 (struct file*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_4(const clockid_t VAR_3, struct posix_clock_desc *VAR_4)
{
 struct file *VAR_5 = FUNC_1(FUNC_0(VAR_3));
 int VAR_6 = -VAR_0;

 if (!VAR_5)
  return VAR_6;

 if (VAR_5->f_op->open != VAR_2 || !VAR_5->private_data)
  goto out;

 VAR_4->fp = VAR_5;
 VAR_4->clk = FUNC_3(VAR_5);

 VAR_6 = VAR_4->clk ? 0 : -VAR_1;
out:
 if (VAR_6)
  FUNC_2(VAR_5);
 return VAR_6;
}
