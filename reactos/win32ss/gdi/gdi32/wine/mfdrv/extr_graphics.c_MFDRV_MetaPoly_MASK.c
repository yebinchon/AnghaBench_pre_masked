
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rdSize; short rdFunction; short* rdParm; } ;
typedef int POINTS ;
typedef int PHYSDEV ;
typedef TYPE_1__ METARECORD ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*,int) ;
 int FUNC_4 (short*,int *,short) ;

__attribute__((used)) static BOOL FUNC_5(PHYSDEV VAR_2, short VAR_3, POINTS *VAR_4, short VAR_5)
{
    BOOL VAR_6;
    DWORD VAR_7;
    METARECORD *VAR_8;

    VAR_7 = sizeof(METARECORD) + (VAR_5 * 4);
    if (!(VAR_8 = FUNC_1( FUNC_0(), VAR_1, VAR_7 )))
 return VAR_0;

    VAR_8->rdSize = VAR_7 / 2;
    VAR_8->rdFunction = VAR_3;
    *(VAR_8->rdParm) = VAR_5;
    FUNC_4(VAR_8->rdParm + 1, VAR_4, VAR_5 * 4);
    VAR_6 = FUNC_3( VAR_2, VAR_8, VAR_8->rdSize * 2);
    FUNC_2( FUNC_0(), 0, VAR_8);
    return VAR_6;
}
