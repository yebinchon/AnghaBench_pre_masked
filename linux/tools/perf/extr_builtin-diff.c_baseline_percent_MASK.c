
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef double u64 ;
struct TYPE_2__ {double period; } ;
struct hist_entry {TYPE_1__ stat; int hists; } ;


 double FUNC_0 (int ) ;

__attribute__((used)) static double FUNC_1(struct hist_entry *VAR_0)
{
 u64 VAR_1 = FUNC_0(VAR_0->hists);

 return 100.0 * VAR_0->stat.period / VAR_1;
}
