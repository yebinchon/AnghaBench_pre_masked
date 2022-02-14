
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int handle; } ;
typedef TYPE_1__ WINE_MCICDAUDIO ;
typedef int UINT ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (int ,int ,int *,int ,int *,int ,int *,int *) ;

__attribute__((used)) static DWORD FUNC_3(UINT VAR_4, BOOL VAR_5)
{
    WINE_MCICDAUDIO* VAR_6 = FUNC_0(VAR_4);
    DWORD VAR_7;

    FUNC_1("(%04x, %s) !\n", VAR_4, (VAR_5) ? "OPEN" : "CLOSE");

    if (VAR_6 == ((void*)0)) return VAR_3;

    if (!FUNC_2(VAR_6->handle,
                         (VAR_5) ? VAR_0 : VAR_1,
                         ((void*)0), 0, ((void*)0), 0, &VAR_7, ((void*)0)))
 return VAR_2;

    return 0;
}
