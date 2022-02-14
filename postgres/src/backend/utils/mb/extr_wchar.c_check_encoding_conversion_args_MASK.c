
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 TYPE_1__* VAR_1 ;

void
FUNC_2(int VAR_2,
          int VAR_3,
          int VAR_4,
          int VAR_5,
          int VAR_6)
{
 if (!FUNC_0(VAR_2))
  FUNC_1(VAR_0, "invalid source encoding ID: %d", VAR_2);
 if (VAR_2 != VAR_5 && VAR_5 >= 0)
  FUNC_1(VAR_0, "expected source encoding \"%s\", but got \"%s\"",
    VAR_1[VAR_5].name,
    VAR_1[VAR_2].name);
 if (!FUNC_0(VAR_3))
  FUNC_1(VAR_0, "invalid destination encoding ID: %d", VAR_3);
 if (VAR_3 != VAR_6 && VAR_6 >= 0)
  FUNC_1(VAR_0, "expected destination encoding \"%s\", but got \"%s\"",
    VAR_1[VAR_6].name,
    VAR_1[VAR_3].name);
 if (VAR_4 < 0)
  FUNC_1(VAR_0, "encoding conversion length must not be negative");
}
