
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
struct TYPE_4__ {scalar_t__ Address; int Active; } ;
typedef int GSPSWBREAKPOINT ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,unsigned int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(ULONG_PTR VAR_3)
{
  unsigned VAR_4;

  FUNC_1("GspRemoveSwBreakpoint(0x%p)\n", VAR_3);
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
    {
      if (VAR_2[VAR_4].Address == VAR_3)
        {
          FUNC_1("Found match at index %u\n", VAR_4);
          FUNC_0(! VAR_2[VAR_4].Active);
          if (VAR_4 + 1 < VAR_1)
            {
              FUNC_3(VAR_2 + VAR_4,
                      VAR_2 + (VAR_4 + 1),
                      (VAR_1 - VAR_4 - 1) *
                      sizeof(GSPSWBREAKPOINT));
            }
          VAR_1--;
          FUNC_4(VAR_0, "OK");
          return;
        }
    }

  FUNC_2("Not found\n");
  FUNC_4(VAR_0, "E22");
}
