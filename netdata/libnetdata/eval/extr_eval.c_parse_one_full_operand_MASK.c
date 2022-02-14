
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int calculated_number ;
struct TYPE_11__ {void* operator; void* precedence; } ;
typedef TYPE_1__ EVAL_NODE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,char*) ;
 void* FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (char const**) ;
 int FUNC_7 (char const**) ;
 scalar_t__ FUNC_8 (char const**,int *) ;
 TYPE_1__* FUNC_9 (char const**,int*) ;
 scalar_t__ FUNC_10 (char const**) ;
 TYPE_1__* FUNC_11 (char const**,void*,int*) ;
 scalar_t__ FUNC_12 (char const**) ;
 scalar_t__ FUNC_13 (char const**) ;
 scalar_t__ FUNC_14 (char const**) ;
 scalar_t__ FUNC_15 (char const**,char*,int ) ;
 int FUNC_16 (char const**) ;

__attribute__((used)) static inline EVAL_NODE *FUNC_17(const char **VAR_11, int *VAR_12) {
    char VAR_13[VAR_4 + 1];
    EVAL_NODE *VAR_14 = ((void*)0);
    calculated_number VAR_15;

    *VAR_12 = VAR_2;

    FUNC_16(VAR_11);
    if(!(**VAR_11)) {
        *VAR_12 = VAR_1;
        return ((void*)0);
    }

    if(FUNC_12(VAR_11)) {
        VAR_14 = FUNC_11(VAR_11, VAR_8, VAR_12);
        VAR_14->precedence = FUNC_5(VAR_8);
    }
    else if(FUNC_14(VAR_11)) {
        VAR_14 = FUNC_11(VAR_11, VAR_10, VAR_12);
        VAR_14->precedence = FUNC_5(VAR_10);
    }
    else if(FUNC_10(VAR_11)) {
        VAR_14 = FUNC_11(VAR_11, VAR_9, VAR_12);
        VAR_14->precedence = FUNC_5(VAR_9);
    }
    else if(FUNC_6(VAR_11)) {
        VAR_14 = FUNC_11(VAR_11, VAR_5, VAR_12);
        VAR_14->precedence = FUNC_5(VAR_5);
    }
    else if(FUNC_13(VAR_11)) {
        EVAL_NODE *VAR_16 = FUNC_9(VAR_11, VAR_12);
        if(VAR_16) {
            VAR_14 = FUNC_0(1);
            VAR_14->operator = VAR_6;
            VAR_14->precedence = FUNC_5(VAR_6);
            FUNC_3(VAR_14, 0, VAR_16);
            if(!FUNC_7(VAR_11)) {
                *VAR_12 = VAR_0;
                FUNC_1(VAR_14);
                return ((void*)0);
            }
        }
    }
    else if(FUNC_15(VAR_11, VAR_13, VAR_4)) {
        VAR_14 = FUNC_0(1);
        VAR_14->operator = VAR_7;
        FUNC_4(VAR_14, 0, VAR_13);
    }
    else if(FUNC_8(VAR_11, &VAR_15)) {
        VAR_14 = FUNC_0(1);
        VAR_14->operator = VAR_7;
        FUNC_2(VAR_14, 0, VAR_15);
    }
    else if(**VAR_11)
        *VAR_12 = VAR_3;
    else
        *VAR_12 = VAR_1;

    return VAR_14;
}
