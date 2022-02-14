
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ predicted; scalar_t__ mispred; } ;
struct branch_entry {TYPE_1__ flags; } ;



__attribute__((used)) static inline char
FUNC_0(struct branch_entry *VAR_0)
{
 if (!(VAR_0->flags.mispred || VAR_0->flags.predicted))
  return '-';

 return VAR_0->flags.predicted ? 'P' : 'M';
}
