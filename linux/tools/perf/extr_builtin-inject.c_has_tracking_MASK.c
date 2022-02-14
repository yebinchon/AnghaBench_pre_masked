
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ task; scalar_t__ comm; scalar_t__ mmap2; scalar_t__ mmap; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;



__attribute__((used)) static bool FUNC_0(struct evsel *VAR_0)
{
 return VAR_0->core.attr.mmap || VAR_0->core.attr.mmap2 || VAR_0->core.attr.comm ||
        VAR_0->core.attr.task;
}
