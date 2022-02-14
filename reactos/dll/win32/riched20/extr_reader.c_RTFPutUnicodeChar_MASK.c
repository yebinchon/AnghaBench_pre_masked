
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {int dwOutputCount; int* OutputBuffer; scalar_t__ dwCPOutputCount; } ;
typedef TYPE_1__ RTF_Info ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(RTF_Info *VAR_0, int VAR_1)
{
 if (VAR_0->dwCPOutputCount)
                FUNC_0(VAR_0);
        if (VAR_0->dwOutputCount * sizeof(WCHAR) >= ( sizeof VAR_0->OutputBuffer - 1 ) )
  FUNC_1( VAR_0 );
 VAR_0->OutputBuffer[VAR_0->dwOutputCount++] = VAR_1;
}
