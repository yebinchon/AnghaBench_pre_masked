
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xsltTransformFunction ;
typedef int xsltPreComputeFunction ;
typedef int * xsltExtElementPtr ;
typedef int xmlChar ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int *,int const*,int const*,void*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_4 (int ,int *) ;

int
FUNC_5(const xmlChar * VAR_3, const xmlChar * VAR_4,
                             xsltPreComputeFunction VAR_5,
                             xsltTransformFunction VAR_6)
{
    int VAR_7 = 0;

    xsltExtElementPtr VAR_8;

    if ((VAR_3 == ((void*)0)) || (VAR_4 == ((void*)0)) || (VAR_6 == ((void*)0)))
        return (-1);

    if (VAR_0 == ((void*)0))
        VAR_0 = FUNC_0(10);
    if (VAR_0 == ((void*)0))
        return (-1);

    FUNC_2(VAR_1);

    VAR_8 = FUNC_4(VAR_5, VAR_6);
    if (VAR_8 == ((void*)0)) {
        VAR_7 = -1;
        goto done;
    }

    FUNC_1(VAR_0, VAR_3, VAR_4, (void *) VAR_8,
                        VAR_2);

done:
    FUNC_3(VAR_1);

    return (VAR_7);
}
