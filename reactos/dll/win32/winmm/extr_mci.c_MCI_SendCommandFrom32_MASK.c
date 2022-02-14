
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT16 ;
struct TYPE_3__ {int hDriver; } ;
typedef int MCIDEVICEID ;
typedef TYPE_1__* LPWINE_MCIDRIVER ;
typedef int DWORD_PTR ;
typedef int DWORD ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static DWORD FUNC_2(MCIDEVICEID VAR_1, UINT16 VAR_2, DWORD_PTR VAR_3, DWORD_PTR VAR_4)
{
    DWORD VAR_5 = VAR_0;
    LPWINE_MCIDRIVER VAR_6 = FUNC_0(VAR_1);

    if (VAR_6) {
        VAR_5 = FUNC_1(VAR_6->hDriver, VAR_2, VAR_3, VAR_4);
    }
    return VAR_5;
}
