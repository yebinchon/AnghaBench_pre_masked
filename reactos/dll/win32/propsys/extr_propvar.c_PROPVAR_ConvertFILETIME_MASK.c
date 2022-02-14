
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VARTYPE ;
struct TYPE_6__ {int pszVal; } ;
struct TYPE_8__ {TYPE_1__ u; } ;
struct TYPE_7__ {int wYear; int wMonth; int wDay; int wHour; int wMinute; int wSecond; int wMilliseconds; } ;
typedef TYPE_2__ SYSTEMTIME ;
typedef TYPE_3__ PROPVARIANT ;
typedef int HRESULT ;
typedef int FILETIME ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int const*,TYPE_2__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_2 ;

 int FUNC_4 (int ,char*,int,int,int,int,int,int,int) ;

__attribute__((used)) static HRESULT FUNC_5(const FILETIME *VAR_3, PROPVARIANT *VAR_4, VARTYPE VAR_5)
{
    SYSTEMTIME VAR_6;

    FUNC_1(VAR_3, &VAR_6);

    switch (VAR_5)
    {
        case 128:
            VAR_4->u.pszVal = FUNC_3(FUNC_2(), 0, 64);
            if (!VAR_4->u.pszVal)
                return VAR_1;

            FUNC_4( VAR_4->u.pszVal, "%04d/%02d/%02d:%02d:%02d:%02d.%03d",
                      VAR_6.wYear, VAR_6.wMonth, VAR_6.wDay,
                      VAR_6.wHour, VAR_6.wMinute, VAR_6.wSecond,
                      VAR_6.wMilliseconds );

            return VAR_2;

        default:
            FUNC_0("Unhandled target type: %d\n", VAR_5);
    }

    return VAR_0;
}
