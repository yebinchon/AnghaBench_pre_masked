
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hFile; } ;
typedef TYPE_1__ WINE_MCIMIDI ;
typedef int HPSTR ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_1__*) ;
 long FUNC_1 (int ,int ,int) ;

__attribute__((used)) static DWORD FUNC_2(WINE_MCIMIDI* VAR_1, BYTE *VAR_2)
{
    DWORD VAR_3 = 0;

    if (FUNC_1(VAR_1->hFile, (HPSTR)VAR_2, sizeof(BYTE)) != (long)sizeof(BYTE)) {
 FUNC_0("Error reading wmm=%p\n", VAR_1);
 VAR_3 = VAR_0;
    }

    return VAR_3;
}
