
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int pidlAbsCurrent; } ;
struct TYPE_5__ {TYPE_1__ ShellInfos; } ;
typedef int STRRET ;
typedef int LPSHELLFOLDER ;
typedef int HRESULT ;
typedef TYPE_2__ FileOpenDlgInfos ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int *,int) ;

__attribute__((used)) static void FUNC_7(const FileOpenDlgInfos *VAR_2)
{
    LPSHELLFOLDER VAR_3;
    STRRET VAR_4;
    HRESULT VAR_5;

    VAR_5 = FUNC_3(&VAR_3);
    if (FUNC_0(VAR_5))
        return;

    VAR_5 = FUNC_1(VAR_3, VAR_2->ShellInfos.pidlAbsCurrent,
                                        VAR_1, &VAR_4);
    if (FUNC_4(VAR_5)) {
        WCHAR VAR_6[VAR_0];

        VAR_5 = FUNC_6(&VAR_4, VAR_2->ShellInfos.pidlAbsCurrent, VAR_6, VAR_0);
        if (FUNC_4(VAR_5))
            FUNC_5(VAR_6);
    }

    FUNC_2(VAR_3);
}
