
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int typestring_offset; } ;
typedef TYPE_1__ type_t ;
typedef int attr_list_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int const*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_1__ const*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,TYPE_1__ const*,int,int *,TYPE_1__*,int *,unsigned int*) ;
 int FUNC_8 (int *,int *,TYPE_1__*,int ,int ,unsigned int*) ;
 scalar_t__ FUNC_9 (int *,int *,TYPE_1__*,int ) ;
 int FUNC_10 (int *,int *,TYPE_1__*,int ,int *,unsigned int*) ;

__attribute__((used)) static void FUNC_11(FILE *VAR_3, const attr_list_t *VAR_4, const type_t *VAR_5,
                                     int VAR_6, unsigned int *VAR_7)
{
    type_t *VAR_8 = FUNC_4(VAR_5);

    if (!FUNC_0(VAR_8) && FUNC_1(VAR_8))
    {
        type_t *VAR_9 = FUNC_6(VAR_8);

        if (FUNC_3(VAR_9))
        {
            FUNC_8(VAR_3, ((void*)0), VAR_8, VAR_1,
                                    VAR_9->typestring_offset, VAR_7);
            return;
        }
        if (VAR_6 && FUNC_2(VAR_4, VAR_8))
        {
            FUNC_10(VAR_3, ((void*)0), VAR_8, VAR_1, ((void*)0), VAR_7);
            return;
        }
        if (!FUNC_2(((void*)0), VAR_8) &&
            (FUNC_5(VAR_9) == VAR_0 || FUNC_5(VAR_9) == VAR_2))
        {
            *VAR_7 += FUNC_9(VAR_3, ((void*)0), VAR_8, VAR_1);
            return;
        }
    }
    FUNC_7(VAR_3, VAR_5, VAR_6, ((void*)0), VAR_8, ((void*)0), VAR_7);
}
