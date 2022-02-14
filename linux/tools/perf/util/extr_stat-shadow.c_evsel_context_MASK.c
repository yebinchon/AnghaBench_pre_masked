
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ exclude_idle; scalar_t__ exclude_host; scalar_t__ exclude_hv; scalar_t__ exclude_user; scalar_t__ exclude_kernel; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct evsel *VAR_5)
{
 int VAR_6 = 0;

 if (VAR_5->core.attr.exclude_kernel)
  VAR_6 |= VAR_3;
 if (VAR_5->core.attr.exclude_user)
  VAR_6 |= VAR_4;
 if (VAR_5->core.attr.exclude_hv)
  VAR_6 |= VAR_1;
 if (VAR_5->core.attr.exclude_host)
  VAR_6 |= VAR_0;
 if (VAR_5->core.attr.exclude_idle)
  VAR_6 |= VAR_2;

 return VAR_6;
}
