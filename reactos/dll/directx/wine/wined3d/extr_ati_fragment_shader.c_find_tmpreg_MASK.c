
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tex_used ;
struct texture_stage_op {scalar_t__ cop; scalar_t__ carg1; scalar_t__ carg2; scalar_t__ carg0; scalar_t__ aarg1; scalar_t__ aarg2; scalar_t__ aarg0; scalar_t__ dst; } ;
typedef scalar_t__ GLuint ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static GLuint FUNC_2(const struct texture_stage_op VAR_9[VAR_3])
{
    int VAR_10 = -1;
    int VAR_11 = -1;
    int VAR_12;
    BOOL VAR_13[VAR_3];

    FUNC_1(VAR_13, 0, sizeof(VAR_13));
    for (VAR_12 = 0; VAR_12 < VAR_3; ++VAR_12)
    {
        if (VAR_9[VAR_12].cop == VAR_7)
            break;

        if(VAR_10 == -1 &&
          (VAR_9[VAR_12].carg1 == VAR_5 || VAR_9[VAR_12].carg2 == VAR_5 || VAR_9[VAR_12].carg0 == VAR_5 ||
           VAR_9[VAR_12].aarg1 == VAR_5 || VAR_9[VAR_12].aarg2 == VAR_5 || VAR_9[VAR_12].aarg0 == VAR_5)) {
            VAR_10 = VAR_12;
        }

        if(VAR_11 == -1 && VAR_9[VAR_12].dst == VAR_8) {
            VAR_11 = VAR_12;
        }

        if(VAR_9[VAR_12].carg1 == VAR_6 || VAR_9[VAR_12].carg2 == VAR_6 || VAR_9[VAR_12].carg0 == VAR_6 ||
           VAR_9[VAR_12].aarg1 == VAR_6 || VAR_9[VAR_12].aarg2 == VAR_6 || VAR_9[VAR_12].aarg0 == VAR_6) {
            VAR_13[VAR_12] = VAR_4;
        }
    }


    if(VAR_10 == -1) return VAR_0;

    if(VAR_11 >= VAR_10) {
        FUNC_0("Temp register read before being written\n");
    }

    if(VAR_11 == -1) {

        FUNC_0("Temp register read without being written\n");
        return VAR_2;
    } else if(VAR_11 >= 1) {




        return VAR_2;
    } else {



        for(VAR_12 = 1; VAR_12 < 6; VAR_12++) {
            if(!VAR_13[VAR_12]) {
                return VAR_1 + VAR_12;
            }
        }

        FUNC_0("Could not find a register for the temporary register\n");
        return 0;
    }
}
