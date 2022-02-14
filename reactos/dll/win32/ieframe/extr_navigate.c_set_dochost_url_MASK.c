
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_6__ {int * url; TYPE_1__* container_vtbl; } ;
struct TYPE_5__ {int (* set_url ) (TYPE_2__*,int *) ;} ;
typedef int HRESULT ;
typedef TYPE_2__ DocHost ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_2__*,int *) ;

HRESULT FUNC_3(DocHost *VAR_2, const WCHAR *VAR_3)
{
    WCHAR *VAR_4;

    if(VAR_3) {
        VAR_4 = FUNC_1(VAR_3);
        if(!VAR_4)
            return VAR_0;
    }else {
        VAR_4 = ((void*)0);
    }

    FUNC_0(VAR_2->url);
    VAR_2->url = VAR_4;

    VAR_2->container_vtbl->set_url(VAR_2, VAR_2->url);
    return VAR_1;
}
