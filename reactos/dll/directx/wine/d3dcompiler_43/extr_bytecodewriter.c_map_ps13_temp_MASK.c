
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_reg {int regnum; } ;
struct bc_writer {int dummy; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static DWORD FUNC_1(struct bc_writer *VAR_6, const struct shader_reg *VAR_7) {
    if(VAR_7->regnum == VAR_2) {
        return FUNC_0( VAR_1, 0 );
    } else if(VAR_7->regnum == VAR_3) {
        return FUNC_0( VAR_1, 1 );
    } else if(VAR_7->regnum == VAR_4) {
        return FUNC_0( VAR_1, 2 );
    } else if(VAR_7->regnum == VAR_5) {
        return FUNC_0( VAR_1, 3 );
    } else {
        return FUNC_0( VAR_0, VAR_7->regnum );
    }
}
