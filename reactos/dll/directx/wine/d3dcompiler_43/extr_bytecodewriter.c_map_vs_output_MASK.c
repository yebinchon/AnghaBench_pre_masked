
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bc_writer {scalar_t__ oPos_regnum; scalar_t__ oFog_regnum; scalar_t__ oFog_mask; scalar_t__ oPts_regnum; scalar_t__ oPts_mask; scalar_t__* oD_regnum; scalar_t__* oT_regnum; int state; } ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static DWORD FUNC_2(struct bc_writer *VAR_10, DWORD VAR_11, DWORD VAR_12, DWORD *VAR_13) {
    DWORD VAR_14;

    *VAR_13 = VAR_9;
    if(VAR_11 == VAR_10->oPos_regnum) {
        return FUNC_1( VAR_1, VAR_6 );
    }
    if(VAR_11 == VAR_10->oFog_regnum && VAR_12 == VAR_10->oFog_mask) {
        *VAR_13 = VAR_8;
        return FUNC_1( VAR_1, VAR_4 ) | VAR_3;
    }
    if(VAR_11 == VAR_10->oPts_regnum && VAR_12 == VAR_10->oPts_mask) {
        *VAR_13 = VAR_8;
        return FUNC_1( VAR_1, VAR_5 ) | VAR_3;
    }
    for(VAR_14 = 0; VAR_14 < 2; VAR_14++) {
        if(VAR_11 == VAR_10->oD_regnum[VAR_14]) {
            return FUNC_1( VAR_0, VAR_14 );
        }
    }
    for(VAR_14 = 0; VAR_14 < 8; VAR_14++) {
        if(VAR_11 == VAR_10->oT_regnum[VAR_14]) {
            return FUNC_1( VAR_2, VAR_14 );
        }
    }




    FUNC_0("Undeclared varying %u\n", VAR_11);
    VAR_10->state = VAR_7;
    return -1;
}
