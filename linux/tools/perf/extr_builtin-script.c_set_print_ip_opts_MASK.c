
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event_attr {int type; } ;
struct TYPE_2__ {int print_ip_opts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct perf_event_attr *VAR_11)
{
 unsigned int VAR_12 = FUNC_1(VAR_11->type);

 VAR_10[VAR_12].print_ip_opts = 0;
 if (FUNC_0(VAR_6))
  VAR_10[VAR_12].print_ip_opts |= VAR_2;

 if (FUNC_0(VAR_8))
  VAR_10[VAR_12].print_ip_opts |= VAR_4;

 if (FUNC_0(VAR_0))
  VAR_10[VAR_12].print_ip_opts |= VAR_1;

 if (FUNC_0(VAR_9))
  VAR_10[VAR_12].print_ip_opts |= VAR_5;

 if (FUNC_0(VAR_7))
  VAR_10[VAR_12].print_ip_opts |= VAR_3;
}
