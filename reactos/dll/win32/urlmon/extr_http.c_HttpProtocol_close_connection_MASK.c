
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * full_header; int * http_negotiate; } ;
typedef int Protocol ;
typedef TYPE_1__ HttpProtocol ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(Protocol *VAR_0)
{
    HttpProtocol *VAR_1 = FUNC_2(VAR_0);

    if(VAR_1->http_negotiate) {
        FUNC_0(VAR_1->http_negotiate);
        VAR_1->http_negotiate = ((void*)0);
    }

    FUNC_1(VAR_1->full_header);
    VAR_1->full_header = ((void*)0);
}
