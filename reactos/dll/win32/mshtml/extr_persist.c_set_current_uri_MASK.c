
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * url; int * uri_nofrag; int * uri; } ;
typedef int IUri ;
typedef TYPE_1__ HTMLOuterWindow ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;

void FUNC_6(HTMLOuterWindow *VAR_0, IUri *VAR_1)
{
    if(VAR_0->uri) {
        FUNC_3(VAR_0->uri);
        VAR_0->uri = ((void*)0);
    }

    if(VAR_0->uri_nofrag) {
        FUNC_3(VAR_0->uri_nofrag);
        VAR_0->uri_nofrag = ((void*)0);
    }

    FUNC_4(VAR_0->url);
    VAR_0->url = ((void*)0);

    if(!VAR_1)
        return;

    FUNC_1(VAR_1);
    VAR_0->uri = VAR_1;

    VAR_0->uri_nofrag = FUNC_5(VAR_1);
    if(!VAR_0->uri_nofrag) {
        FUNC_0("get_uri_nofrag failed\n");
        FUNC_1(VAR_1);
        VAR_0->uri_nofrag = VAR_1;
    }

    FUNC_2(VAR_1, &VAR_0->url);
}
