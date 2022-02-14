
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int selection_end; int selection_start; } ;
typedef int * PUINT ;
typedef int LRESULT ;
typedef TYPE_1__ EDITSTATE ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static LRESULT FUNC_2(const EDITSTATE *VAR_0, PUINT VAR_1, PUINT VAR_2)
{
 UINT VAR_3 = VAR_0->selection_start;
 UINT VAR_4 = VAR_0->selection_end;

 FUNC_1(VAR_3, VAR_4);
 if (VAR_1)
  *VAR_1 = VAR_3;
 if (VAR_2)
  *VAR_2 = VAR_4;
 return FUNC_0(VAR_3, VAR_4);
}
