
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; int count; int ** matches; } ;
typedef TYPE_1__ MatchCollection2 ;
typedef int IMatchCollection2 ;
typedef int IMatch2 ;
typedef int IMatch ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (char*,TYPE_1__*,int *) ;
 int ** FUNC_2 (int) ;
 int ** FUNC_3 (int **,int) ;
 TYPE_1__* FUNC_4 (int *) ;

__attribute__((used)) static HRESULT FUNC_5(IMatchCollection2 *VAR_2, IMatch2 *VAR_3)
{
    MatchCollection2 *VAR_4 = FUNC_4(VAR_2);

    FUNC_1("(%p)->(%p)\n", VAR_4, VAR_3);

    if(!VAR_4->size) {
        VAR_4->matches = FUNC_2(8*sizeof(IMatch*));
        if(!VAR_4->matches)
            return VAR_0;
        VAR_4->size = 8;
    }else if(VAR_4->size == VAR_4->count) {
        IMatch2 **VAR_5 = FUNC_3(VAR_4->matches, 2*VAR_4->size*sizeof(IMatch*));
        if(!VAR_5)
            return VAR_0;

        VAR_4->matches = VAR_5;
        VAR_4->size <<= 1;
    }

    VAR_4->matches[VAR_4->count++] = VAR_3;
    FUNC_0(VAR_3);
    return VAR_1;
}
