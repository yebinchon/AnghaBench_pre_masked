
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {int pszVal; } ;
struct TYPE_6__ {TYPE_1__ u; int vt; } ;
typedef TYPE_2__ PROPVARIANT ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int **) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int,char*,scalar_t__) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(void)
{
    PROPVARIANT VAR_6;
    WCHAR *VAR_7;
    HRESULT VAR_8;

    VAR_6.vt = VAR_2;
    VAR_8 = FUNC_3(&VAR_6, &VAR_7);
    FUNC_5(VAR_8 == VAR_0, "returned %x\n", VAR_8);
    FUNC_5(!FUNC_4(VAR_7, VAR_3), "got %s\n", FUNC_8(VAR_7));
    FUNC_1(VAR_7);

    VAR_6.vt = VAR_1;
    VAR_6.u.pszVal = FUNC_0(FUNC_7(VAR_4)+1);
    FUNC_6(VAR_6.u.pszVal, VAR_4);
    VAR_8 = FUNC_3(&VAR_6, &VAR_7);
    FUNC_5(VAR_8 == VAR_0, "returned %x\n", VAR_8);
    FUNC_5(!FUNC_4(VAR_7, VAR_5), "got %s\n", FUNC_8(VAR_7));
    FUNC_1(VAR_7);
    FUNC_2(&VAR_6);
}
