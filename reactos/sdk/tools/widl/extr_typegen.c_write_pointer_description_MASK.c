
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int type_t ;
typedef int attr_list_t ;
struct TYPE_2__ {int * type; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int const*,int *,int ,unsigned int*) ;
 int FUNC_8 (int *,int *,int *,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_9 (int *,int *,int *,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_10 (int *,int *,int *,unsigned int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_11(FILE *VAR_3, const attr_list_t *VAR_4, type_t *VAR_5,
                                      unsigned int *VAR_6)
{
    unsigned int VAR_7;
    unsigned int VAR_8;



    if (!FUNC_2(VAR_5))
    {
        VAR_8 = 0;
        VAR_7 = 0;
        FUNC_9(
            VAR_3, ((void*)0), VAR_5,
            &VAR_8, &VAR_7, VAR_6);
    }


    VAR_8 = 0;
    VAR_7 = 0;
    FUNC_8(
        VAR_3, ((void*)0), VAR_5,
        &VAR_8, &VAR_7, VAR_6);



    if (FUNC_3(VAR_5) &&
        (FUNC_4(VAR_5) || !VAR_2))
        FUNC_7(
            VAR_3, VAR_4, VAR_5, 0, VAR_6);
    else if (FUNC_5(VAR_5) == VAR_1 &&
             FUNC_1(VAR_5) == VAR_0)
    {
        type_t *VAR_9 = FUNC_0(VAR_5)->type;
        FUNC_7( VAR_3, ((void*)0), VAR_9,
                                                     FUNC_6(VAR_5), VAR_6);
    }


    VAR_8 = 0;
    VAR_7 = 0;
    FUNC_10(
            VAR_3, ((void*)0), VAR_5,
            &VAR_8, &VAR_7, VAR_6);
}
