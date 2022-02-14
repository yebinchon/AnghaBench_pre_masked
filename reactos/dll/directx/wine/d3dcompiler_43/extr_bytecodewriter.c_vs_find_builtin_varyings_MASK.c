
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bwriter_shader {size_t num_outputs; TYPE_1__* outputs; } ;
struct bc_writer {size_t oPos_regnum; size_t* oD_regnum; size_t* oT_regnum; size_t oPts_regnum; size_t oPts_mask; size_t oFog_regnum; size_t oFog_mask; } ;
struct TYPE_2__ {size_t usage; size_t usage_idx; size_t writemask; size_t regnum; int builtin; } ;
typedef int HRESULT ;
typedef size_t DWORD ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,size_t,...) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static HRESULT FUNC_2(struct bc_writer *VAR_7, const struct bwriter_shader *VAR_8) {
    DWORD VAR_9;
    DWORD VAR_10, VAR_11, VAR_12, VAR_13;

    for(VAR_9 = 0; VAR_9 < VAR_8->num_outputs; VAR_9++) {
        if(!VAR_8->outputs[VAR_9].builtin) continue;

        VAR_10 = VAR_8->outputs[VAR_9].usage;
        VAR_11 = VAR_8->outputs[VAR_9].usage_idx;
        VAR_12 = VAR_8->outputs[VAR_9].writemask;
        VAR_13 = VAR_8->outputs[VAR_9].regnum;

        switch(VAR_10) {
            case 131:
            case 130:
                if(VAR_11 > 0) {
                    FUNC_1("dcl_position%u not supported in sm 1/2 shaders\n", VAR_11);
                    return VAR_5;
                }
                FUNC_0("o%u is oPos\n", VAR_13);
                VAR_7->oPos_regnum = VAR_13;
                break;

            case 133:
                if(VAR_11 > 1) {
                    FUNC_1("dcl_color%u not supported in sm 1/2 shaders\n", VAR_11);
                    return VAR_5;
                }
                if(VAR_12 != VAR_4) {
                    FUNC_1("Only WRITEMASK_ALL is supported on color in sm 1/2\n");
                    return VAR_5;
                }
                FUNC_0("o%u is oD%u\n", VAR_13, VAR_11);
                VAR_7->oD_regnum[VAR_11] = VAR_13;
                break;

            case 128:
                if(VAR_11 >= 8) {
                    FUNC_1("dcl_color%u not supported in sm 1/2 shaders\n", VAR_11);
                    return VAR_5;
                }
                if(VAR_12 != (VAR_0) &&
                   VAR_12 != (VAR_0 | VAR_1) &&
                   VAR_12 != (VAR_0 | VAR_1 | VAR_2) &&
                   VAR_12 != (VAR_4)) {
                    FUNC_1("Partial writemasks not supported on texture coordinates in sm 1 and 2\n");
                    return VAR_5;
                }
                FUNC_0("o%u is oT%u\n", VAR_13, VAR_11);
                VAR_7->oT_regnum[VAR_11] = VAR_13;
                break;

            case 129:
                if(VAR_11 > 0) {
                    FUNC_1("dcl_psize%u not supported in sm 1/2 shaders\n", VAR_11);
                    return VAR_5;
                }
                FUNC_0("o%u writemask 0x%08x is oPts\n", VAR_13, VAR_12);
                VAR_7->oPts_regnum = VAR_13;
                VAR_7->oPts_mask = VAR_12;
                break;

            case 132:
                if(VAR_11 > 0) {
                    FUNC_1("dcl_fog%u not supported in sm 1 shaders\n", VAR_11);
                    return VAR_5;
                }
                if(VAR_12 != VAR_0 && VAR_12 != VAR_1 &&
                   VAR_12 != VAR_2 && VAR_12 != VAR_3) {
                    FUNC_1("Unsupported fog writemask\n");
                    return VAR_5;
                }
                FUNC_0("o%u writemask 0x%08x is oFog\n", VAR_13, VAR_12);
                VAR_7->oFog_regnum = VAR_13;
                VAR_7->oFog_mask = VAR_12;
                break;

            default:
                FUNC_1("Varying type %u is not supported in shader model 1.x\n", VAR_10);
                return VAR_5;
        }
    }

    return VAR_6;
}
