
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct console_cmdline {scalar_t__ brl_options; int options; int index; } ;
struct console {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct console*,int ,int ,scalar_t__) ;

int
FUNC_1(struct console *VAR_1, struct console_cmdline *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2->brl_options) {
  VAR_1->flags |= VAR_0;
  VAR_3 = FUNC_0(VAR_1, VAR_2->index, VAR_2->options,
            VAR_2->brl_options);
 }

 return VAR_3;
}
