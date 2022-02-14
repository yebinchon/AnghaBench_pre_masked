
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int keysize; int authname; int ciphername; } ;
struct TYPE_3__ {int keysize; int authname; int ciphername; } ;
struct context {TYPE_2__ options; TYPE_1__ c1; } ;



__attribute__((used)) static void
FUNC_0(struct context *VAR_0)
{
    VAR_0->c1.ciphername = VAR_0->options.ciphername;
    VAR_0->c1.authname = VAR_0->options.authname;
    VAR_0->c1.keysize = VAR_0->options.keysize;
}
