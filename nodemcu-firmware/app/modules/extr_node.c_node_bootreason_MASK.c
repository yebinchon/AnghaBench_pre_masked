
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct rst_info {scalar_t__ reason; scalar_t__ exccause; scalar_t__ epc1; scalar_t__ epc2; scalar_t__ epc3; scalar_t__ excvaddr; scalar_t__ depc; } ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 struct rst_info* FUNC_2 () ;

__attribute__((used)) static int FUNC_3 (lua_State *VAR_1)
{
  const struct rst_info *VAR_2 = FUNC_2 ();
  uint32_t VAR_3[8] = {
    FUNC_1(),
    VAR_2->reason,
    VAR_2->exccause, VAR_2->epc1, VAR_2->epc2, VAR_2->epc3, VAR_2->excvaddr, VAR_2->depc
  };
  int VAR_4, VAR_5 = ((VAR_2->reason != VAR_0) ? 2 : 8);
  for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4)
    FUNC_0 (VAR_1, VAR_3[VAR_4]);
  return VAR_5;
}
