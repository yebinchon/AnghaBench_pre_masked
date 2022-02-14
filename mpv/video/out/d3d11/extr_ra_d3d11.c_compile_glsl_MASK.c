
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spirv_compiler {TYPE_1__* fns; } ;
struct ra_d3d11 {scalar_t__ fl; int (* D3DCompile ) (char const*,int ,int *,int *,int *,char*,int ,int ,int ,int **,int **) ;struct spirv_compiler* spirv; } ;
struct ra {int log; struct ra_d3d11* priv; } ;
typedef scalar_t__ spvc_result ;
typedef int * spvc_parsed_ir ;
typedef int * spvc_context ;
typedef int * spvc_compiler_options ;
typedef int * spvc_compiler ;
typedef scalar_t__ int64_t ;
typedef enum glsl_shader { ____Placeholder_glsl_shader } glsl_shader ;
struct TYPE_5__ {int len; scalar_t__ start; } ;
typedef TYPE_2__ bstr ;
struct TYPE_4__ {int (* compile_glsl ) (struct spirv_compiler*,void*,int,char const*,TYPE_2__*) ;} ;
typedef int SpvId ;
typedef int ID3DBlob ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct ra*,char*,int ,int,char*) ;
 int FUNC_4 (struct ra*,int,char*,...) ;
 int FUNC_5 (struct ra*,char*,scalar_t__,scalar_t__,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (struct ra*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int,char const*) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int *,char const**) ;
 scalar_t__ FUNC_13 (int *,int **) ;
 scalar_t__ FUNC_14 (int *,int *) ;
 scalar_t__ FUNC_15 (int *,int ,int ) ;
 scalar_t__ FUNC_16 (int *,int ,int) ;
 scalar_t__ FUNC_17 (int **) ;
 scalar_t__ FUNC_18 (int *,int ,int *,int ,int **) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (int *,int *,int,int **) ;
 int FUNC_22 (char const*) ;
 int FUNC_23 (struct spirv_compiler*,void*,int,char const*,TYPE_2__*) ;
 int FUNC_24 (char const*,int ,int *,int *,int *,char*,int ,int ,int ,int **,int **) ;
 int FUNC_25 (void*) ;
 void* FUNC_26 (int *) ;

__attribute__((used)) static bool FUNC_27(struct ra *VAR_12, enum glsl_shader VAR_13,
                         const char *VAR_14, ID3DBlob **VAR_15)
{
    struct ra_d3d11 *VAR_16 = VAR_12->priv;
    struct spirv_compiler *VAR_17 = VAR_16->spirv;
    void *VAR_18 = FUNC_26(((void*)0));
    spvc_result VAR_19 = VAR_10;
    spvc_context VAR_20 = ((void*)0);
    spvc_parsed_ir VAR_21 = ((void*)0);
    spvc_compiler VAR_22 = ((void*)0);
    spvc_compiler_options VAR_23 = ((void*)0);
    const char *VAR_24 = ((void*)0);
    ID3DBlob *VAR_25 = ((void*)0);
    bool VAR_26 = 0;
    HRESULT VAR_27;

    int VAR_28;
    if (VAR_16->fl >= VAR_2) {
        VAR_28 = 50;
    } else if (VAR_16->fl >= VAR_1) {
        VAR_28 = 41;
    } else {
        VAR_28 = 40;
    }

    int64_t VAR_29 = FUNC_10();

    bstr VAR_30;
    if (!VAR_17->fns->compile_glsl(VAR_17, VAR_18, VAR_13, VAR_14, &VAR_30))
        goto done;

    int64_t VAR_31 = FUNC_10();

    VAR_19 = FUNC_17(&VAR_20);
    if (VAR_19 != VAR_10)
        goto done;

    VAR_19 = FUNC_21(VAR_20, (SpvId *)VAR_30.start,
                                      VAR_30.len / sizeof(SpvId), &VAR_21);
    if (VAR_19 != VAR_10)
        goto done;

    VAR_19 = FUNC_18(VAR_20, VAR_6, VAR_21,
                                          VAR_7,
                                          &VAR_22);
    if (VAR_19 != VAR_10)
        goto done;

    VAR_19 = FUNC_13(VAR_22, &VAR_23);
    if (VAR_19 != VAR_10)
        goto done;
    VAR_19 = FUNC_16(VAR_23,
        VAR_9, VAR_28);
    if (VAR_19 != VAR_10)
        goto done;
    if (VAR_13 == VAR_3) {

        VAR_19 = FUNC_15(VAR_23,
            VAR_8, VAR_11);
        if (VAR_19 != VAR_10)
            goto done;
    }
    VAR_19 = FUNC_14(VAR_22, VAR_23);
    if (VAR_19 != VAR_10)
        goto done;

    VAR_19 = FUNC_12(VAR_22, &VAR_24);
    if (VAR_19 != VAR_10)
        goto done;

    int64_t VAR_32 = FUNC_10();

    VAR_27 = VAR_16->D3DCompile(VAR_24, FUNC_22(VAR_24), ((void*)0), ((void*)0), ((void*)0), "main",
        FUNC_7(VAR_12, VAR_13), VAR_0, 0, VAR_15,
        &VAR_25);
    if (FUNC_0(VAR_27)) {
        FUNC_3(VAR_12, "D3DCompile failed: %s\n%.*s", FUNC_8(VAR_27),
               (int)FUNC_2(VAR_25),
               (char*)FUNC_1(VAR_25));
        goto done;
    }

    int64_t VAR_33 = FUNC_10();

    FUNC_5(VAR_12, "Compiled a %s shader in %lldus\n", FUNC_11(VAR_13),
               VAR_33 - VAR_29);
    FUNC_5(VAR_12, "shaderc: %lldus, SPIRV-Cross: %lldus, D3DCompile: %lldus\n",
               VAR_31 - VAR_29,
               VAR_32 - VAR_31,
               VAR_33 - VAR_32);

    VAR_26 = 1;
done:
    if (VAR_19 != VAR_10) {
        FUNC_4(VAR_12, VAR_5, "SPIRV-Cross failed: %s\n",
               FUNC_20(VAR_20));
    }
    int VAR_34 = VAR_26 ? VAR_4 : VAR_5;
    FUNC_4(VAR_12, VAR_34, "GLSL source:\n");
    FUNC_9(VAR_12->log, VAR_34, VAR_14);
    if (VAR_24) {
        FUNC_4(VAR_12, VAR_34, "HLSL source:\n");
        FUNC_9(VAR_12->log, VAR_34, VAR_24);
    }
    FUNC_6(VAR_25);
    if (VAR_20)
        FUNC_19(VAR_20);
    FUNC_25(VAR_18);
    return VAR_26;
}
