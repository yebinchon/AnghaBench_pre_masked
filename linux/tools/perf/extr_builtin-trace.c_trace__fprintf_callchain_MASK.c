
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace {int output; } ;
struct perf_sample {int dummy; } ;
struct TYPE_2__ {int bt_stop_list; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct perf_sample*,int,unsigned int const,int *,int ,int ) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static int FUNC_1(struct trace *VAR_5, struct perf_sample *VAR_6)
{

 const unsigned int VAR_7 = VAR_1 |
            VAR_0 |
            VAR_2;

 return FUNC_0(VAR_6, 38, VAR_7, &VAR_3, VAR_4.bt_stop_list, VAR_5->output);
}
