
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_reg {scalar_t__ regnum; } ;
struct bc_writer {scalar_t__* v_regnum; scalar_t__* t_regnum; int state; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static DWORD FUNC_2(struct bc_writer *VAR_3,
                          const struct shader_reg *VAR_4) {
    DWORD VAR_5;

    for(VAR_5 = 0; VAR_5 < 2; VAR_5++) {
        if(VAR_4->regnum == VAR_3->v_regnum[VAR_5]) {
            return FUNC_1( VAR_0, VAR_5 );
        }
    }
    for(VAR_5 = 0; VAR_5 < 8; VAR_5++) {
        if(VAR_4->regnum == VAR_3->t_regnum[VAR_5]) {
            return FUNC_1( VAR_1, VAR_5 );
        }
    }

    FUNC_0("Invalid ps 1/2 varying\n");
    VAR_3->state = VAR_2;
    return 0;
}
