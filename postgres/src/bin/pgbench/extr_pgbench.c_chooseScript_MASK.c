
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_5__ {scalar_t__ weight; } ;
struct TYPE_4__ {int ts_choose_rs; } ;
typedef TYPE_1__ TState ;


 scalar_t__ FUNC_0 (int *,int ,scalar_t__) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_1(TState *VAR_3)
{
 int VAR_4 = 0;
 int64 VAR_5;

 if (VAR_0 == 1)
  return 0;

 VAR_5 = FUNC_0(&VAR_3->ts_choose_rs, 0, VAR_2 - 1);
 do
 {
  VAR_5 -= VAR_1[VAR_4++].weight;
 } while (VAR_5 >= 0);

 return VAR_4 - 1;
}
