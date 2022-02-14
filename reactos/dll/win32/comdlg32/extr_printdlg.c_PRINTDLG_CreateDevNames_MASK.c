
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wDriverOffset; int wDeviceOffset; int wOutputOffset; int wDefault; } ;
typedef TYPE_1__* LPDEVNAMES ;
typedef int HGLOBAL ;
typedef int DWORD ;
typedef int DEVNAMES ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int ,long) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ,long,int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char const*) ;
 char* FUNC_9 (char const*,char) ;

__attribute__((used)) static BOOL FUNC_10(HGLOBAL *VAR_3, const char* VAR_4,
        const char* VAR_5, const char* VAR_6)
{
    long VAR_7;
    char* VAR_8;
    char* VAR_9;
    LPDEVNAMES VAR_10;
    char VAR_11[260];
    DWORD VAR_12 = FUNC_0(VAR_11);
    const char *VAR_13;

    VAR_13 = FUNC_9( VAR_4, '\\' );
    if (VAR_13) VAR_4 = VAR_13 + 1;

    VAR_7 = FUNC_8(VAR_4) + 1
            + FUNC_8(VAR_5) + 1
            + FUNC_8(VAR_6) + 1
            + sizeof(DEVNAMES);

    if(*VAR_3)
        *VAR_3 = FUNC_4(*VAR_3, VAR_7, VAR_1);
    else
        *VAR_3 = FUNC_2(VAR_1, VAR_7);
    if (*VAR_3 == 0)
        return VAR_0;

    VAR_8 = FUNC_3(*VAR_3);
    VAR_10 = (LPDEVNAMES) VAR_8;

    VAR_9 = VAR_8 + sizeof(DEVNAMES);
    FUNC_7(VAR_9, VAR_4);
    VAR_10->wDriverOffset = VAR_9 - VAR_8;

    VAR_9 += FUNC_8(VAR_4) + 1;
    FUNC_7(VAR_9, VAR_5);
    VAR_10->wDeviceOffset = VAR_9 - VAR_8;

    VAR_9 += FUNC_8(VAR_5) + 1;
    FUNC_7(VAR_9, VAR_6);
    VAR_10->wOutputOffset = VAR_9 - VAR_8;

    FUNC_1(VAR_11, &VAR_12);
    VAR_10->wDefault = (FUNC_6(VAR_11, VAR_5) == 0) ? 1 : 0;
    FUNC_5(*VAR_3);
    return VAR_2;
}
