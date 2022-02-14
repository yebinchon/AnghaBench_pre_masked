
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ulong ;
struct TYPE_5__ {scalar_t__ off; int na; int* a; } ;
struct TYPE_6__ {TYPE_1__ acache; } ;
typedef int DwarfAttr ;
typedef int DwarfAbbrev ;
typedef TYPE_2__ Dwarf ;


 int FUNC_0 (int*) ;
 int* FUNC_1 (int) ;
 int* VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__,int*,int*,int*,int*) ;

__attribute__((used)) static int
FUNC_3(Dwarf *VAR_1, ulong VAR_2, DwarfAbbrev **VAR_3)
{
    int VAR_4, VAR_5;
    DwarfAbbrev *VAR_6;
    DwarfAttr *VAR_7;

    if(VAR_1->acache.off == VAR_2 && VAR_1->acache.na){
        *VAR_3 = VAR_1->acache.a;
        return VAR_1->acache.na;
    }


    if(FUNC_2(VAR_1, VAR_2, VAR_0, VAR_0, &VAR_5, &VAR_4) < 0) {
        return -1;
    }

    VAR_6 = FUNC_1(VAR_5*sizeof(DwarfAbbrev) + VAR_4*sizeof(DwarfAttr));
    VAR_7 = (DwarfAttr*)(VAR_6+VAR_5);

    if(FUNC_2(VAR_1, VAR_2, VAR_6, VAR_7, VAR_0, VAR_0) < 0){
        FUNC_0(VAR_6);
        return -1;
    }

    FUNC_0(VAR_1->acache.a);
    VAR_1->acache.a = VAR_6;
    VAR_1->acache.na = VAR_5;
    VAR_1->acache.off = VAR_2;

    *VAR_3 = VAR_6;
    return VAR_5;
}
