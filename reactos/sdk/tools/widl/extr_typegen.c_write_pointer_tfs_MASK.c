
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type_t ;
typedef enum type_context { ____Placeholder_type_context } type_context ;
typedef int attr_list_t ;
typedef int FILE ;


 int VAR_0 ;


 int FUNC_0 (int *,int *,unsigned int) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,int ) ;
 int FUNC_3 (int *,unsigned int,int *) ;
 int FUNC_4 (int *,int const*,int *,int,unsigned int,unsigned int*) ;
 unsigned int FUNC_5 (int *,int const*,int *,int) ;

__attribute__((used)) static unsigned int FUNC_6(FILE *VAR_1, const attr_list_t *VAR_2,
                                      type_t *VAR_3, unsigned int VAR_4,
                                      enum type_context VAR_5,
                                      unsigned int *VAR_6)
{
    unsigned int VAR_7 = *VAR_6;
    type_t *VAR_8 = FUNC_1(VAR_3);

    FUNC_0(VAR_1, VAR_3, VAR_7);
    FUNC_3(VAR_3, VAR_7, VAR_1);

    switch (FUNC_2(VAR_8, VAR_2, VAR_0))
    {
    case 129:
    case 128:
        *VAR_6 += FUNC_5(VAR_1, VAR_2, VAR_3, VAR_5);
        break;
    default:
        if (VAR_4)
            FUNC_4(VAR_1, VAR_2, VAR_3, VAR_5, VAR_4, VAR_6);
        break;
    }

    return VAR_7;
}
