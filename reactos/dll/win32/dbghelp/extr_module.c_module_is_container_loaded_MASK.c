
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct process {struct module* lmodules; } ;
struct TYPE_2__ {scalar_t__ BaseOfImage; scalar_t__ ImageSize; int const* LoadedImageName; } ;
struct module {scalar_t__ type; TYPE_1__ module; struct module* next; } ;
typedef int WCHAR ;
typedef scalar_t__ PCWSTR ;
typedef scalar_t__ DWORD64 ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*,int *) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 size_t FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__,size_t) ;

__attribute__((used)) static BOOL FUNC_6(const struct process* VAR_5,
                                       const WCHAR* VAR_6, DWORD64 VAR_7)
{
    size_t VAR_8;
    struct module* VAR_9;
    PCWSTR VAR_10, VAR_11;

    if (!VAR_7) return VAR_2;
    VAR_10 = FUNC_2(VAR_6, ((void*)0));
    VAR_8 = FUNC_4(VAR_10);

    for (VAR_9 = VAR_5->lmodules; VAR_9; VAR_9 = VAR_9->next)
    {
        if ((VAR_9->type == VAR_0 || VAR_9->type == VAR_1) &&
            VAR_7 >= VAR_9->module.BaseOfImage &&
            VAR_7 < VAR_9->module.BaseOfImage + VAR_9->module.ImageSize)
        {
            VAR_11 = FUNC_2(VAR_9->module.LoadedImageName, ((void*)0));
            if (!FUNC_5(VAR_11, VAR_10, VAR_8) &&
                !FUNC_3(VAR_11 + VAR_8, VAR_3, 3 * sizeof(WCHAR)))
            {
                return VAR_4;
            }
        }
    }

    FUNC_0("Couldn't find container for %s\n", FUNC_1(VAR_6));
    return VAR_2;
}
