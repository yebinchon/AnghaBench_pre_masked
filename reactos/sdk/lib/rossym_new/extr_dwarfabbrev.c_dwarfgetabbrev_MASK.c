
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef int DwarfAbbrev ;
typedef int Dwarf ;


 int * FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int ,int **) ;
 int * VAR_0 ;
 int FUNC_2 (char*,...) ;

DwarfAbbrev*
FUNC_3(Dwarf *VAR_1, ulong VAR_2, ulong VAR_3)
{
    DwarfAbbrev *VAR_4;
    int VAR_5;
    FUNC_2("want num %d\n", VAR_3);
    if((VAR_5 = FUNC_1(VAR_1, VAR_2, &VAR_4)) < 0){
        FUNC_2("loadabbrevs: %r");
        return VAR_0;
    }
    return FUNC_0(VAR_4, VAR_5, VAR_3);
}
