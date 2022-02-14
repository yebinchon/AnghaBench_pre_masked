
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct os_count_struct {int * counts; int freed; int total; } ;
struct RBasic {size_t tt; } ;
typedef int mrb_state ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct RBasic*) ;

__attribute__((used)) static int
FUNC_1(mrb_state *VAR_1, struct RBasic *VAR_2, void *VAR_3)
{
  struct os_count_struct *VAR_4;
  VAR_4 = (struct os_count_struct*)VAR_3;

  VAR_4->total++;

  if (FUNC_0(VAR_1, VAR_2)) {
    VAR_4->freed++;
  }
  else {
    VAR_4->counts[VAR_2->tt]++;
  }
  return VAR_0;
}
