
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int str; } ;
typedef TYPE_1__ jsstr_rope_t ;
typedef int WCHAR ;


 int VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,unsigned int,unsigned int,int *) ;
 int FUNC_2 (int *,int *,unsigned int) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(jsstr_rope_t *VAR_1, jsstr_rope_t *VAR_2)
{
    WCHAR VAR_3[VAR_0], VAR_4[VAR_0];
    unsigned VAR_5 = FUNC_0(&VAR_1->str);
    unsigned VAR_6 = FUNC_0(&VAR_2->str);
    unsigned VAR_7 = 0, VAR_8;
    int VAR_9;


    while(VAR_7 < FUNC_3(VAR_5, VAR_6)) {
        VAR_8 = FUNC_3(VAR_5, VAR_6) - VAR_7;
        if(VAR_8 > VAR_0)
            VAR_8 = VAR_0;

        FUNC_1(VAR_1, VAR_7, VAR_8, VAR_3);
        FUNC_1(VAR_2, VAR_7, VAR_8, VAR_4);
        VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_8);
        if(VAR_9)
            return VAR_9;

        VAR_7 += VAR_8;
    }

    return VAR_5 - VAR_6;
}
