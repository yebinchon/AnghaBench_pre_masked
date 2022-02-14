
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samplerdecl {scalar_t__ regnum; scalar_t__ mod; scalar_t__ type; } ;
struct bwriter_shader {unsigned int num_samplers; struct samplerdecl* samplers; } ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,scalar_t__) ;
 struct samplerdecl* FUNC_2 (int) ;
 struct samplerdecl* FUNC_3 (struct samplerdecl*,int) ;

BOOL FUNC_4(struct bwriter_shader *VAR_2, DWORD VAR_3, DWORD VAR_4, DWORD VAR_5) {
    unsigned int VAR_6;

    if(!VAR_2) return VAR_0;

    if(VAR_2->num_samplers == 0) {
        VAR_2->samplers = FUNC_2(sizeof(*VAR_2->samplers));
        if(!VAR_2->samplers) {
            FUNC_0("Error allocating samplers array\n");
            return VAR_0;
        }
    } else {
        struct samplerdecl *VAR_7;

        for(VAR_6 = 0; VAR_6 < VAR_2->num_samplers; VAR_6++) {
            if(VAR_2->samplers[VAR_6].regnum == VAR_5) {
                FUNC_1("Sampler %u already declared\n", VAR_5);



            }
        }

        VAR_7 = FUNC_3(VAR_2->samplers,
                               sizeof(*VAR_2->samplers) * (VAR_2->num_samplers + 1));
        if(!VAR_7) {
            FUNC_0("Error reallocating samplers array\n");
            return VAR_0;
        }
        VAR_2->samplers = VAR_7;
    }

    VAR_2->samplers[VAR_2->num_samplers].type = VAR_3;
    VAR_2->samplers[VAR_2->num_samplers].mod = VAR_4;
    VAR_2->samplers[VAR_2->num_samplers].regnum = VAR_5;
    VAR_2->num_samplers++;
    return VAR_1;
}
