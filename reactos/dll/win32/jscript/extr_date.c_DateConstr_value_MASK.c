
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
typedef int WORD ;
struct TYPE_9__ {int time; } ;
struct TYPE_8__ {int dwLowDateTime; int dwHighDateTime; } ;
typedef int LONGLONG ;
typedef int HRESULT ;
typedef TYPE_1__ FILETIME ;
typedef TYPE_2__ DateInstance ;



 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int *,double,int **) ;
 TYPE_2__* FUNC_6 (int *) ;
 double FUNC_7 () ;
 int FUNC_8 (int ,double*) ;
 int FUNC_9 (int,int ,int ,int *) ;
 int FUNC_10 (int *,unsigned int,int *,double*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 double FUNC_15 (double) ;
 int FUNC_16 (int *,int ,double*) ;
 int FUNC_17 (int *,int ,int *,int ) ;
 int FUNC_18 (int ,TYPE_2__*) ;

__attribute__((used)) static HRESULT FUNC_19(script_ctx_t *VAR_5, vdisp_t *VAR_6, WORD VAR_7, unsigned VAR_8, jsval_t *VAR_9,
        jsval_t *VAR_10)
{
    jsdisp_t *VAR_11;
    HRESULT VAR_12;

    FUNC_4("\n");

    switch(VAR_7) {
    case 129:
        switch(VAR_8) {

        case 0:
            VAR_12 = FUNC_5(VAR_5, ((void*)0), FUNC_7(), &VAR_11);
            if(FUNC_0(VAR_12))
                return VAR_12;
            break;


        case 1: {
            jsval_t VAR_13;
            double VAR_14;

            VAR_12 = FUNC_17(VAR_5, VAR_9[0], &VAR_13, VAR_2);
            if(FUNC_0(VAR_12))
                return VAR_12;

            if(FUNC_12(VAR_13))
                VAR_12 = FUNC_8(FUNC_11(VAR_13), &VAR_14);
            else
                VAR_12 = FUNC_16(VAR_5, VAR_13, &VAR_14);

            FUNC_14(VAR_13);
            if(FUNC_0(VAR_12))
                return VAR_12;

            VAR_12 = FUNC_5(VAR_5, ((void*)0), FUNC_15(VAR_14), &VAR_11);
            if(FUNC_0(VAR_12))
                return VAR_12;
            break;
        }


        default: {
            double VAR_15;
            DateInstance *VAR_16;

            VAR_12 = FUNC_10(VAR_5, VAR_8, VAR_9, &VAR_15);
            if(FUNC_0(VAR_12))
                return VAR_12;

            VAR_12 = FUNC_5(VAR_5, ((void*)0), VAR_15, &VAR_11);
            if(FUNC_0(VAR_12))
                return VAR_12;

            VAR_16 = FUNC_6(VAR_11);
            VAR_16->time = FUNC_18(VAR_16->time, VAR_16);
        }
        }

        *VAR_10 = FUNC_13(VAR_11);
        return VAR_3;

    case 128: {
        FILETIME VAR_17, VAR_18;
        LONGLONG VAR_19;

        FUNC_3(&VAR_17);
        FUNC_2(&VAR_17, &VAR_18);
        VAR_19 = ((LONGLONG)VAR_18.dwHighDateTime<<32)
            + VAR_18.dwLowDateTime;

        return FUNC_9(VAR_19/10000-VAR_4, VAR_1, 0, VAR_10);
    }

    default:
        FUNC_1("unimplemented flags %x\n", VAR_7);
        return VAR_0;
    }

    return VAR_3;
}
