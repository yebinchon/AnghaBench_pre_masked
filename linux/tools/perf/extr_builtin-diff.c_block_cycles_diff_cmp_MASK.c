
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cycles; } ;
struct hist_entry {TYPE_1__ diff; } ;
typedef scalar_t__ s64 ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (struct hist_entry*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int64_t FUNC_2(struct hist_entry *VAR_0,
         struct hist_entry *VAR_1)
{
 bool VAR_2 = FUNC_0(VAR_0);
 bool VAR_3 = FUNC_0(VAR_1);
 s64 VAR_4, VAR_5;

 if (!VAR_2 && !VAR_3)
  return 0;

 VAR_4 = FUNC_1(VAR_0->diff.cycles);
 VAR_5 = FUNC_1(VAR_1->diff.cycles);
 return VAR_5 - VAR_4;
}
