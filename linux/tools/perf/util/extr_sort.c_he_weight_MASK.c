
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int nr_events; int weight; } ;
struct hist_entry {TYPE_1__ stat; } ;



__attribute__((used)) static u64 FUNC_0(struct hist_entry *VAR_0)
{
 return VAR_0->stat.nr_events ? VAR_0->stat.weight / VAR_0->stat.nr_events : 0;
}
