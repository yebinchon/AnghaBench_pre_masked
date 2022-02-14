
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_10__ {int assemblies; } ;
struct TYPE_7__ {scalar_t__ wProcessorArchitecture; } ;
struct TYPE_8__ {TYPE_1__ s; } ;
struct TYPE_9__ {TYPE_2__ u; } ;
typedef TYPE_3__ SYSTEM_INFO ;
typedef int IAssemblyName ;
typedef TYPE_4__ IAssemblyEnumImpl ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int *,int ,char const*,char*) ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static HRESULT FUNC_5(IAssemblyEnumImpl *VAR_5, IAssemblyName *VAR_6)
{
    static const WCHAR VAR_7[] = {'\\','G','A','C',0};
    static const WCHAR VAR_8[] = {'\\','G','A','C','_','3','2',0};
    static const WCHAR VAR_9[] = {'\\','G','A','C','_','6','4',0};
    static const WCHAR VAR_10[] = {'\\','G','A','C','_','M','S','I','L',0};
    static const WCHAR VAR_11[] = {'v','4','.','0','_',0};
    WCHAR VAR_12[VAR_2], VAR_13[VAR_2];
    SYSTEM_INFO VAR_14;
    HRESULT VAR_15;
    DWORD VAR_16;

    VAR_16 = VAR_2;
    VAR_15 = FUNC_1(VAR_1, VAR_13, &VAR_16);
    if (FUNC_0(VAR_15))
        return VAR_15;

    FUNC_4(VAR_12, VAR_13);
    FUNC_2(&VAR_14);
    if (VAR_14.u.s.wProcessorArchitecture == VAR_3)
    {
        FUNC_4(VAR_12 + VAR_16 - 1, VAR_9);
        VAR_15 = FUNC_3(&VAR_5->assemblies, VAR_6, 0, VAR_11, VAR_12);
        if (FUNC_0(VAR_15))
            return VAR_15;
    }
    FUNC_4(VAR_12 + VAR_16 - 1, VAR_8);
    VAR_15 = FUNC_3(&VAR_5->assemblies, VAR_6, 0, VAR_11, VAR_12);
    if (FUNC_0(VAR_15))
        return VAR_15;

    FUNC_4(VAR_12 + VAR_16 - 1, VAR_10);
    VAR_15 = FUNC_3(&VAR_5->assemblies, VAR_6, 0, VAR_11, VAR_12);
    if (FUNC_0(VAR_15))
        return VAR_15;

    VAR_16 = VAR_2;
    VAR_15 = FUNC_1(VAR_0, VAR_13, &VAR_16);
    if (FUNC_0(VAR_15))
        return VAR_15;

    FUNC_4(VAR_12, VAR_13);
    if (VAR_14.u.s.wProcessorArchitecture == VAR_3)
    {
        FUNC_4(VAR_12 + VAR_16 - 1, VAR_9);
        VAR_15 = FUNC_3(&VAR_5->assemblies, VAR_6, 0, ((void*)0), VAR_12);
        if (FUNC_0(VAR_15))
            return VAR_15;
    }
    FUNC_4(VAR_12 + VAR_16 - 1, VAR_8);
    VAR_15 = FUNC_3(&VAR_5->assemblies, VAR_6, 0, ((void*)0), VAR_12);
    if (FUNC_0(VAR_15))
        return VAR_15;

    FUNC_4(VAR_12 + VAR_16 - 1, VAR_10);
    VAR_15 = FUNC_3(&VAR_5->assemblies, VAR_6, 0, ((void*)0), VAR_12);
    if (FUNC_0(VAR_15))
        return VAR_15;

    FUNC_4(VAR_12 + VAR_16 - 1, VAR_7);
    VAR_15 = FUNC_3(&VAR_5->assemblies, VAR_6, 0, ((void*)0), VAR_12);
    if (FUNC_0(VAR_15))
        return VAR_15;

    return VAR_4;
}
