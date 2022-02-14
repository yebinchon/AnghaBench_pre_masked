
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mp_filter {TYPE_2__* in; } ;
struct TYPE_4__ {TYPE_1__* info; } ;
struct TYPE_3__ {char const* name; } ;



__attribute__((used)) static const char *FUNC_0(struct mp_filter *VAR_0)
{
    return VAR_0 ? VAR_0->in->info->name : "-";
}
