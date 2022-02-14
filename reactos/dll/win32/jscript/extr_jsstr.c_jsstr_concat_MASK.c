
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int jsstr_t ;
struct TYPE_4__ {unsigned int depth; int str; int * right; int * left; } ;
typedef TYPE_1__ jsstr_rope_t ;
typedef int WCHAR ;
struct TYPE_5__ {unsigned int depth; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_1__* FUNC_0 (int) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (unsigned int,int **) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,unsigned int,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 unsigned int FUNC_7 (int *) ;

jsstr_t *FUNC_8(jsstr_t *VAR_4, jsstr_t *VAR_5)
{
    unsigned VAR_6, VAR_7;
    jsstr_t *VAR_8;
    WCHAR *VAR_9;

    VAR_6 = FUNC_7(VAR_4);
    if(!VAR_6)
        return FUNC_1(VAR_5);

    VAR_7 = FUNC_7(VAR_5);
    if(!VAR_7)
        return FUNC_1(VAR_4);

    if(VAR_6 + VAR_7 >= VAR_3) {
        unsigned VAR_10, VAR_11;
        jsstr_rope_t *VAR_12;

        VAR_10 = FUNC_6(VAR_4) ? FUNC_3(VAR_4)->depth : 0;
        VAR_11 = FUNC_6(VAR_5) ? FUNC_3(VAR_5)->depth : 0;
        if(VAR_11 > VAR_10)
            VAR_10 = VAR_11;

        if(VAR_10++ < VAR_1) {
            if(VAR_6+VAR_7 > VAR_0)
                return ((void*)0);

            VAR_12 = FUNC_0(sizeof(*VAR_12));
            if(!VAR_12)
                return ((void*)0);

            FUNC_5(&VAR_12->str, VAR_6+VAR_7, VAR_2);
            VAR_12->left = FUNC_1(VAR_4);
            VAR_12->right = FUNC_1(VAR_5);
            VAR_12->depth = VAR_10;
            return &VAR_12->str;
        }
    }

    VAR_8 = FUNC_2(VAR_6+VAR_7, &VAR_9);
    if(!VAR_8)
        return ((void*)0);

    FUNC_4(VAR_4, VAR_9);
    FUNC_4(VAR_5, VAR_9+VAR_6);
    return VAR_8;

}
