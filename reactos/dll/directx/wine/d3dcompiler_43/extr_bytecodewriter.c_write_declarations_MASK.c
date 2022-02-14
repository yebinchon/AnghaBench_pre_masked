
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int writemask; } ;
struct shader_reg {int type; TYPE_1__ u; int regnum; } ;
struct declaration {int usage; int usage_idx; int mod; int writemask; int regnum; scalar_t__ builtin; } ;
struct bytecode_buffer {int dummy; } ;
struct bc_writer {TYPE_2__* funcs; } ;
typedef int reg ;
struct TYPE_4__ {int (* dstreg ) (struct bc_writer*,struct shader_reg*,struct bytecode_buffer*,int ,int ) ;} ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct shader_reg*,int) ;
 int FUNC_1 (struct bytecode_buffer*,int) ;
 int FUNC_2 (struct bc_writer*,struct shader_reg*,struct bytecode_buffer*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct bc_writer *VAR_6,
                               struct bytecode_buffer *VAR_7, BOOL VAR_8,
                               const struct declaration *VAR_9, unsigned int VAR_10, DWORD VAR_11) {
    DWORD VAR_12;
    DWORD VAR_13 = VAR_0;
    DWORD VAR_14;
    struct shader_reg VAR_15;

    FUNC_0(&VAR_15, sizeof(VAR_15));

    if(VAR_8) {
        VAR_13 |= 2 << VAR_1;
    }

    for(VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
        if(VAR_9[VAR_12].builtin) continue;


        FUNC_1(VAR_7, VAR_13);


        VAR_14 = (1u << 31);
        VAR_14 |= (VAR_9[VAR_12].usage << VAR_5) & VAR_4;
        VAR_14 |= (VAR_9[VAR_12].usage_idx << VAR_3) & VAR_2;
        FUNC_1(VAR_7, VAR_14);


        VAR_15.type = VAR_11;
        VAR_15.regnum = VAR_9[VAR_12].regnum;
        VAR_15.u.writemask = VAR_9[VAR_12].writemask;
        VAR_6->funcs->dstreg(VAR_6, &VAR_15, VAR_7, 0, VAR_9[VAR_12].mod);
    }
}
