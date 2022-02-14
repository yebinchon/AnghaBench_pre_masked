
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int object_header_t ;
typedef int connect_timeout ;
struct TYPE_2__ {int agent; int connect_timeout; } ;
typedef TYPE_1__ appinfo_t ;
typedef int ULONG ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int,void*,int) ;



 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static DWORD FUNC_5(object_header_t *VAR_4, DWORD VAR_5, void *VAR_6, DWORD VAR_7)
{
    appinfo_t *VAR_8 = (appinfo_t*)VAR_4;

    switch(VAR_5) {
    case 130:
        FUNC_2("INTERNET_OPTION_CONNECT_TIMEOUT\n");

        if(VAR_7 != sizeof(connect_timeout))
            return VAR_1;
        if(!*(ULONG*)VAR_6)
            return VAR_0;

        VAR_8->connect_timeout = *(ULONG*)VAR_6;
        return VAR_3;
    case 128:
        FUNC_3(VAR_8->agent);
        if (!(VAR_8->agent = FUNC_4(VAR_6))) return VAR_2;
        return VAR_3;
    case 129:
        FUNC_0("INTERNET_OPTION_REFRESH\n");
        return VAR_3;
    }

    return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7);
}
