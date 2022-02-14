
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ url; } ;
typedef int HRESULT ;
typedef TYPE_1__ DocHost ;
typedef int BSTR ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int ) ;

HRESULT FUNC_3(DocHost *VAR_3, BSTR *VAR_4)
{
    FUNC_0("semi-stub\n");

    *VAR_4 = VAR_3->url ? FUNC_1(VAR_3->url) : FUNC_2(((void*)0), 0);
    if(!*VAR_4)
        return VAR_0;

    return VAR_3->url ? VAR_2 : VAR_1;
}
