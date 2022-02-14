
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PTHEME_PROPERTY ;
typedef int PTHEME_PARTSTATE ;
typedef scalar_t__ PTHEME_CLASS ;


 int FUNC_0 (scalar_t__,int,int,scalar_t__*) ;
 int * FUNC_1 (int ,int,int) ;
 int FUNC_2 (char*,scalar_t__,int,int,int) ;

PTHEME_PROPERTY FUNC_3(PTHEME_CLASS VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    PTHEME_CLASS VAR_5 = VAR_0;
    PTHEME_PARTSTATE VAR_6;
    PTHEME_PROPERTY VAR_7;

    FUNC_2("(%p, %d, %d, %d)\n", VAR_0, VAR_1, VAR_2, VAR_4);

    while(VAR_5 && (VAR_6 = FUNC_0(VAR_5, VAR_1, VAR_2, &VAR_5))) {
        if((VAR_7 = FUNC_1(VAR_6, VAR_3, VAR_4))) {
            return VAR_7;
        }
    }

    if(VAR_2 != 0)
        VAR_2 = 0;

    else if(VAR_1 != 0)
        VAR_1 = 0;
    else
        return ((void*)0);

    if((VAR_7 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4)))
        return VAR_7;
    return ((void*)0);
}
