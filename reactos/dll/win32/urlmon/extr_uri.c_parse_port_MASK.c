
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int const* port; scalar_t__ scheme_type; int port_value; int port_len; int has_port; } ;
typedef TYPE_1__ parse_data ;
typedef int WCHAR ;
typedef int UINT ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int const**,TYPE_1__*,int ,int ,int,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 (int const,int) ;
 int FUNC_3 (int const) ;

__attribute__((used)) static BOOL FUNC_4(const WCHAR **VAR_4, parse_data *VAR_5, DWORD VAR_6) {
    UINT VAR_7 = 0;
    VAR_5->port = *VAR_4;

    while(!FUNC_2(**VAR_4, VAR_5->scheme_type != VAR_2)) {
        if(!FUNC_3(**VAR_4)) {
            *VAR_4 = VAR_5->port;
            VAR_5->port = ((void*)0);
            return VAR_0;
        }

        VAR_7 = VAR_7*10 + (**VAR_4-'0');

        if(VAR_7 > VAR_3) {
            *VAR_4 = VAR_5->port;
            VAR_5->port = ((void*)0);
            return VAR_0;
        }

        ++(*VAR_4);
    }

    VAR_5->has_port = VAR_1;
    VAR_5->port_value = VAR_7;
    VAR_5->port_len = *VAR_4 - VAR_5->port;

    FUNC_0("(%p %p %x): Found port %s len=%d value=%u\n", VAR_4, VAR_5, VAR_6,
        FUNC_1(VAR_5->port, VAR_5->port_len), VAR_5->port_len, VAR_5->port_value);
    return VAR_1;
}
