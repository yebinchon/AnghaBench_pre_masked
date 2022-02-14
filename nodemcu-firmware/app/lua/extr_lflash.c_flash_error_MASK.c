
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ inflate_state; } ;
struct TYPE_3__ {char const* error; int L; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(const char *VAR_2) {
  if (VAR_1)
    VAR_1->error = VAR_2;
  if (VAR_0 && VAR_0->inflate_state)
    FUNC_2(VAR_0->inflate_state);
  FUNC_1(VAR_1->L);
  FUNC_0(VAR_1->L);
}
