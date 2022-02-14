
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int status_output_owned; scalar_t__ status_output; } ;
struct TYPE_3__ {int status_file_update_freq; int status_file; } ;
struct context {TYPE_2__ c1; TYPE_1__ options; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int,int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct context *VAR_1)
{
    if (!VAR_1->c1.status_output)
    {
        VAR_1->c1.status_output = FUNC_0(VAR_1->options.status_file,
                                          VAR_1->options.status_file_update_freq,
                                          -1,
                                          ((void*)0),
                                          VAR_0);
        VAR_1->c1.status_output_owned = 1;
    }
}
