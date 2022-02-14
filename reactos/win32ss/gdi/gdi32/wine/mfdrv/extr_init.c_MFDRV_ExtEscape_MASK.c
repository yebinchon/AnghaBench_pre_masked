
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_5__ {int rdSize; int* rdParm; int rdFunction; } ;
typedef int PHYSDEV ;
typedef TYPE_1__ METARECORD ;
typedef int LPVOID ;
typedef int LPCVOID ;
typedef int INT ;
typedef int DWORD ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (int ,TYPE_1__*,int) ;
 int FUNC_4 (int*,int ,int) ;

__attribute__((used)) static INT FUNC_5( PHYSDEV VAR_2, INT VAR_3, INT VAR_4, LPCVOID VAR_5,
                            INT VAR_6, LPVOID VAR_7 )
{
    METARECORD *VAR_8;
    DWORD VAR_9;
    INT VAR_10;

    if (VAR_6) return 0;

    VAR_9 = sizeof(*VAR_8) + sizeof(WORD) + ((VAR_4 + 1) & ~1);
    VAR_8 = FUNC_1(FUNC_0(), VAR_0, VAR_9);
    VAR_8->rdSize = VAR_9 / 2;
    VAR_8->rdFunction = VAR_1;
    VAR_8->rdParm[0] = VAR_3;
    VAR_8->rdParm[1] = VAR_4;
    FUNC_4(&(VAR_8->rdParm[2]), VAR_5, VAR_4);
    VAR_10 = FUNC_3( VAR_2, VAR_8, VAR_9);
    FUNC_2(FUNC_0(), 0, VAR_8);
    return VAR_10;
}
