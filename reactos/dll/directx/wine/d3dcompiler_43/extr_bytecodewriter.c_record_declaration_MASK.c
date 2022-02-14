
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct declaration {scalar_t__ regnum; scalar_t__ writemask; scalar_t__ builtin; scalar_t__ mod; scalar_t__ usage_idx; scalar_t__ usage; } ;
struct bwriter_shader {unsigned int num_outputs; unsigned int num_inputs; struct declaration* inputs; struct declaration* outputs; } ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 struct declaration* FUNC_2 (int) ;
 struct declaration* FUNC_3 (struct declaration*,int) ;

BOOL FUNC_4(struct bwriter_shader *VAR_2, DWORD VAR_3,
                        DWORD VAR_4, DWORD VAR_5, BOOL VAR_6,
                        DWORD VAR_7, DWORD VAR_8, BOOL VAR_9) {
    unsigned int *VAR_10;
    struct declaration **VAR_11;
    unsigned int VAR_12;

    if(!VAR_2) return VAR_0;

    if(VAR_6) {
        VAR_10 = &VAR_2->num_outputs;
        VAR_11 = &VAR_2->outputs;
    } else {
        VAR_10 = &VAR_2->num_inputs;
        VAR_11 = &VAR_2->inputs;
    }

    if(*VAR_10 == 0) {
        *VAR_11 = FUNC_2(sizeof(**VAR_11));
        if(!*VAR_11) {
            FUNC_0("Error allocating declarations array\n");
            return VAR_0;
        }
    } else {
        struct declaration *VAR_13;
        for(VAR_12 = 0; VAR_12 < *VAR_10; VAR_12++) {
            if((*VAR_11)[VAR_12].regnum == VAR_7 && ((*VAR_11)[VAR_12].writemask & VAR_8)) {
                FUNC_1("Declaration of register %u already exists, writemask match 0x%x\n",
                      VAR_7, (*VAR_11)[VAR_12].writemask & VAR_8);
            }
        }

        VAR_13 = FUNC_3(*VAR_11,
                              sizeof(**VAR_11) * ((*VAR_10) + 1));
        if(!VAR_13) {
            FUNC_0("Error reallocating declarations array\n");
            return VAR_0;
        }
        *VAR_11 = VAR_13;
    }
    (*VAR_11)[*VAR_10].usage = VAR_3;
    (*VAR_11)[*VAR_10].usage_idx = VAR_4;
    (*VAR_11)[*VAR_10].regnum = VAR_7;
    (*VAR_11)[*VAR_10].mod = VAR_5;
    (*VAR_11)[*VAR_10].writemask = VAR_8;
    (*VAR_11)[*VAR_10].builtin = VAR_9;
    (*VAR_10)++;

    return VAR_1;
}
