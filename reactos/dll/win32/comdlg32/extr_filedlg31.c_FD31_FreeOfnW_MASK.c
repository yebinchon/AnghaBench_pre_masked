
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* lpstrCustomFilter; void* lpstrFile; void* lpstrFileTitle; scalar_t__ lpTemplateName; scalar_t__ lpstrTitle; scalar_t__ lpstrInitialDir; scalar_t__ lpstrFilter; } ;
typedef TYPE_1__ OPENFILENAMEW ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(OPENFILENAMEW *VAR_0)
{
    FUNC_1((void *)VAR_0->lpstrFilter);
    FUNC_1(VAR_0->lpstrCustomFilter);
    FUNC_1(VAR_0->lpstrFile);
    FUNC_1(VAR_0->lpstrFileTitle);
    FUNC_1((void *)VAR_0->lpstrInitialDir);
    FUNC_1((void *)VAR_0->lpstrTitle);
    if (!FUNC_0(VAR_0->lpTemplateName))
        FUNC_1((void *)VAR_0->lpTemplateName);
}
