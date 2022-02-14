
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bwriter_shader {int num_inputs; TYPE_1__* inputs; } ;
struct bc_writer {int* v_regnum; int* t_regnum; } ;
struct TYPE_2__ {int usage; int usage_idx; int writemask; int regnum; int builtin; } ;
typedef int HRESULT ;
typedef int DWORD ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static HRESULT FUNC_2(struct bc_writer *VAR_6,
                                         const struct bwriter_shader *VAR_7,
                                         DWORD VAR_8) {
    DWORD VAR_9;
    DWORD VAR_10, VAR_11, VAR_12, VAR_13;

    VAR_6->v_regnum[0] = -1; VAR_6->v_regnum[1] = -1;
    for(VAR_9 = 0; VAR_9 < 8; VAR_9++) VAR_6->t_regnum[VAR_9] = -1;

    for(VAR_9 = 0; VAR_9 < VAR_7->num_inputs; VAR_9++) {
        if(!VAR_7->inputs[VAR_9].builtin) continue;

        VAR_10 = VAR_7->inputs[VAR_9].usage;
        VAR_11 = VAR_7->inputs[VAR_9].usage_idx;
        VAR_12 = VAR_7->inputs[VAR_9].writemask;
        VAR_13 = VAR_7->inputs[VAR_9].regnum;

        switch(VAR_10) {
            case 129:
                if(VAR_11 > 1) {
                    FUNC_1("dcl_color%u not supported in sm 1 shaders\n", VAR_11);
                    return VAR_4;
                }
                if(VAR_12 != VAR_3) {
                    FUNC_1("Only WRITEMASK_ALL is supported on color in sm 1\n");
                    return VAR_4;
                }
                FUNC_0("v%u is v%u\n", VAR_13, VAR_11);
                VAR_6->v_regnum[VAR_11] = VAR_13;
                break;

            case 128:
                if(VAR_11 > VAR_8) {
                    FUNC_1("dcl_texcoord%u not supported in this shader version\n", VAR_11);
                    return VAR_4;
                }
                if(VAR_12 != (VAR_0) &&
                   VAR_12 != (VAR_0 | VAR_1) &&
                   VAR_12 != (VAR_0 | VAR_1 | VAR_2) &&
                   VAR_12 != (VAR_3)) {
                    FUNC_1("Partial writemasks not supported on texture coordinates in sm 1 and 2\n");
                } else {
                    VAR_12 = VAR_3;
                }
                FUNC_0("v%u is t%u\n", VAR_13, VAR_11);
                VAR_6->t_regnum[VAR_11] = VAR_13;
                break;

            default:
                FUNC_1("Varying type %u is not supported in shader model 1.x\n", VAR_10);
                return VAR_4;
        }
    }

    return VAR_5;
}
