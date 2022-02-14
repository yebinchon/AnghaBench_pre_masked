
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsresult ;
typedef int nsISupports ;
typedef int nsIInterfaceRequestor ;
typedef int REFIID ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,void**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,void**) ;

nsresult FUNC_4(nsISupports *VAR_1, REFIID VAR_2, void **VAR_3)
{
    nsIInterfaceRequestor *VAR_4;
    nsresult VAR_5;

    VAR_5 = FUNC_3(VAR_1, &VAR_0, (void**)&VAR_4);
    if(FUNC_0(VAR_5))
        return VAR_5;

    VAR_5 = FUNC_1(VAR_4, VAR_2, VAR_3);
    FUNC_2(VAR_4);

    return VAR_5;
}
