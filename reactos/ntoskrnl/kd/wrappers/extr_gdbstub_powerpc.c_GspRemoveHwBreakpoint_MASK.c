
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ ULONG ;
struct TYPE_4__ {scalar_t__ Type; scalar_t__ Address; scalar_t__ Length; } ;
typedef int GSPHWBREAKPOINT ;


 int FUNC_0 (char*,unsigned int,...) ;
 int FUNC_1 (char*) ;
 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,unsigned int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(ULONG VAR_3, ULONG_PTR VAR_4, ULONG VAR_5)
{
  unsigned VAR_6;

  FUNC_0("GspRemoveHwBreakpoint(%lu, 0x%p, %lu)\n", VAR_3, VAR_4, VAR_5);
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
    {
      if (VAR_1[VAR_6].Type == VAR_3 &&
          VAR_1[VAR_6].Address == VAR_4 &&
          VAR_1[VAR_6].Length == VAR_5)
        {
          FUNC_0("Found match at index %u\n", VAR_6);
          if (VAR_6 + 1 < VAR_0)
            {
              FUNC_2(VAR_1 + VAR_6,
                      VAR_1 + (VAR_6 + 1),
                      (VAR_0 - VAR_6 - 1) *
                      sizeof(GSPHWBREAKPOINT));
            }
          VAR_0--;
          FUNC_3(VAR_2, "OK");
          return;
        }
    }

  FUNC_1("Not found\n");
  FUNC_3(VAR_2, "E22");
}
