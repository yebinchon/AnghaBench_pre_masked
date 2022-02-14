
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int Buffer; int member_0; } ;
typedef TYPE_1__ UNICODE_STRING ;
struct TYPE_7__ {scalar_t__ ImageHandle; int ImageName; } ;
typedef scalar_t__ HANDLE ;
typedef TYPE_2__ APPHELP_CACHE_SERVICE_LOOKUP ;
typedef int APPHELPCACHESERVICECLASS ;


 int FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (char*,TYPE_1__*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*,char*,char*) ;

void FUNC_6(char* VAR_0, int VAR_1,
                        APPHELPCACHESERVICECLASS VAR_2, char* VAR_3)
{
    UNICODE_STRING VAR_4 = {0};
    APPHELP_CACHE_SERVICE_LOOKUP VAR_5;

    HANDLE VAR_6 = FUNC_1(VAR_0, &VAR_4, VAR_1);

    FUNC_5("Calling %s %s mapping\n", VAR_3, (VAR_1 ? "with" : "without"));

    FUNC_4(&VAR_5.ImageName, VAR_4.Buffer);
    VAR_5.ImageHandle = VAR_6 ? VAR_6 : (HANDLE)-1;
    FUNC_0(VAR_2, &VAR_5);



    if (VAR_6)
        FUNC_2(VAR_6);
    FUNC_3(&VAR_4);
}
