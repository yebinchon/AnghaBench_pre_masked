
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlNode ;
typedef int * xmlBufferPtr ;
typedef int xmlBufPtr ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int const*) ;

int
FUNC_3(xmlBufferPtr VAR_0, const xmlNode *VAR_1)
{
    xmlBufPtr VAR_2;
    int VAR_3;

    if ((VAR_1 == ((void*)0)) || (VAR_0 == ((void*)0))) return(-1);
    VAR_2 = FUNC_1(VAR_0);
    VAR_3 = FUNC_2(VAR_2, VAR_1);
    VAR_0 = FUNC_0(VAR_2);
    if ((VAR_3 < 0) || (VAR_0 == ((void*)0)))
        return(-1);
    return(0);
}
