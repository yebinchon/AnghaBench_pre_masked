
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gl_video {TYPE_2__* ra; } ;
struct TYPE_4__ {TYPE_1__* fns; } ;
struct TYPE_3__ {int (* debug_marker ) (TYPE_2__*,char const*) ;} ;


 int FUNC_0 (TYPE_2__*,char const*) ;

__attribute__((used)) static void FUNC_1(struct gl_video *VAR_0, const char *VAR_1)
{
    if (VAR_0->ra->fns->debug_marker)
        VAR_0->ra->fns->debug_marker(VAR_0->ra, VAR_1);
}
