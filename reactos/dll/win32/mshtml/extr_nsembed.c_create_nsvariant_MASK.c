
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsresult ;
typedef int nsIWritableVariant ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int *,int *,void**) ;
 int VAR_2 ;

nsIWritableVariant *FUNC_3(void)
{
    nsIWritableVariant *VAR_3 = ((void*)0);
    nsresult VAR_4;

    if(!VAR_2)
        return ((void*)0);

    VAR_4 = FUNC_2(VAR_2,
            VAR_1, ((void*)0), &VAR_0, (void**)&VAR_3);
    if(FUNC_1(VAR_4))
        FUNC_0("Could not get nsIVariant\n");

    return VAR_3;
}
