
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int resumestate; int nodetype; int instate; int elements; int is_empty_element; } ;
typedef TYPE_1__ xmlreader ;
typedef int strval ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int FUNC_1 (int *) ;
 int VAR_8 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int *,int *,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int VAR_9 ;

__attribute__((used)) static HRESULT FUNC_7(xmlreader *VAR_10)
{
    HRESULT VAR_11;

    switch (VAR_10->resumestate)
    {
    case 129:

        if (FUNC_2(VAR_10, VAR_8)) return VAR_1;


        FUNC_6(VAR_10, 1);

        FUNC_5(VAR_10);
        VAR_10->resumestate = 128;
    case 128:
    {
        strval VAR_12, VAR_13, VAR_14;


        VAR_11 = FUNC_3(VAR_10, &VAR_13, &VAR_14, &VAR_12);
        if (FUNC_0(VAR_11)) return VAR_11;




        if (VAR_10->is_empty_element && FUNC_1(&VAR_10->elements))
            VAR_10->instate = VAR_7;
        else
            VAR_10->instate = VAR_6;

        VAR_10->nodetype = VAR_5;
        VAR_10->resumestate = 129;
        FUNC_4(VAR_10, VAR_2, &VAR_13);
        FUNC_4(VAR_10, VAR_3, &VAR_12);
        FUNC_4(VAR_10, VAR_4, &VAR_9);
        break;
    }
    default:
        VAR_11 = VAR_0;
    }

    return VAR_11;
}
