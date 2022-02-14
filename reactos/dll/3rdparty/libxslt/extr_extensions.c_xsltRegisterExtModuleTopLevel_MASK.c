
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xsltTopLevelFunction ;
typedef int xmlChar ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,int const*,int const*,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;

int
FUNC_5(const xmlChar * VAR_2, const xmlChar * VAR_3,
                              xsltTopLevelFunction VAR_4)
{
    if ((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)) || (VAR_4 == ((void*)0)))
        return (-1);

    if (VAR_1 == ((void*)0))
        VAR_1 = FUNC_1(10);
    if (VAR_1 == ((void*)0))
        return (-1);

    FUNC_3(VAR_0);

    FUNC_2(VAR_1, VAR_2, VAR_3,
                        FUNC_0(VAR_4), ((void*)0));

    FUNC_4(VAR_0);

    return (0);
}
