
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int off; int node; } ;
typedef TYPE_1__ rangepoint_t ;
typedef char WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_2 (char) ;
 char FUNC_3 (TYPE_1__*) ;
 char FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static BOOL FUNC_6(rangepoint_t *VAR_2, BOOL VAR_3)
{
    rangepoint_t VAR_4;
    WCHAR VAR_5;
    BOOL VAR_6 = VAR_0;

    if(!VAR_3) {
        FUNC_1(&VAR_4, VAR_2->node, VAR_2->off);
        VAR_5 = FUNC_4(&VAR_4);
        FUNC_0(&VAR_4);
        if(FUNC_2(VAR_5))
            return VAR_0;
    }

    do {
        FUNC_1(&VAR_4, VAR_2->node, VAR_2->off);
        VAR_5 = FUNC_3(VAR_2);
        if(VAR_5 == '\n') {
            FUNC_0(VAR_2);
            *VAR_2 = VAR_4;
            return VAR_6;
        }
        if(!VAR_5) {
            if(!VAR_6)
                VAR_6 = !FUNC_5(VAR_2, &VAR_4);
        }else {
            VAR_6 = VAR_1;
        }
        FUNC_0(&VAR_4);
    }while(VAR_5 && !FUNC_2(VAR_5));

    return VAR_6;
}
