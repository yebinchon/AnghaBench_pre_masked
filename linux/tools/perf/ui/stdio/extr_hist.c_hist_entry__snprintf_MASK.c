
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_hpp {int dummy; } ;
struct hist_entry {TYPE_1__* hists; } ;
struct TYPE_2__ {int hpp_list; } ;


 int FUNC_0 (struct hist_entry*,struct perf_hpp*,int ) ;

__attribute__((used)) static int FUNC_1(struct hist_entry *VAR_0, struct perf_hpp *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1, VAR_0->hists->hpp_list);
}
