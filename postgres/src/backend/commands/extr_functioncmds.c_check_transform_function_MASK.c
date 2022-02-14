
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* values; } ;
struct TYPE_5__ {scalar_t__ provolatile; scalar_t__ prokind; int pronargs; TYPE_1__ proargtypes; scalar_t__ proretset; } ;
typedef TYPE_2__* Form_pg_proc ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(Form_pg_proc VAR_5)
{
 if (VAR_5->provolatile == VAR_4)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("transform function must not be volatile")));
 if (VAR_5->prokind != VAR_3)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("transform function must be a normal function")));
 if (VAR_5->proretset)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("transform function must not return a set")));
 if (VAR_5->pronargs != 1)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("transform function must take one argument")));
 if (VAR_5->proargtypes.values[0] != VAR_2)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("first argument of transform function must be type %s",
      "internal")));
}
