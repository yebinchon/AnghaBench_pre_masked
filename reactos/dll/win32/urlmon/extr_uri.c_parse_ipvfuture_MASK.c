
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int host_type; } ;
typedef TYPE_1__ parse_data ;
typedef char WCHAR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,char const**,TYPE_1__*,int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*,int) ;
 scalar_t__ FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (char const) ;
 scalar_t__ FUNC_4 (char const) ;

__attribute__((used)) static BOOL FUNC_5(const WCHAR **VAR_3, parse_data *VAR_4, DWORD VAR_5) {
    const WCHAR *VAR_6 = *VAR_3;


    if(**VAR_3 != 'v' && **VAR_3 != 'V')
        return VAR_0;


    ++(*VAR_3);
    if(!FUNC_2(**VAR_3)) {
        *VAR_3 = VAR_6;
        return VAR_0;
    }

    ++(*VAR_3);
    while(FUNC_2(**VAR_3))
        ++(*VAR_3);


    if(**VAR_3 != '.') {
        *VAR_3 = VAR_6;
        return VAR_0;
    }

    ++(*VAR_3);
    if(!FUNC_4(**VAR_3) && !FUNC_3(**VAR_3) && **VAR_3 != ':') {
        *VAR_3 = VAR_6;
        return VAR_0;
    }

    ++(*VAR_3);
    while(FUNC_4(**VAR_3) || FUNC_3(**VAR_3) || **VAR_3 == ':')
        ++(*VAR_3);

    VAR_4->host_type = VAR_2;

    FUNC_0("(%p %p %x): Parsed IPvFuture address %s len=%d\n", VAR_3, VAR_4, VAR_5,
          FUNC_1(VAR_6, *VAR_3-VAR_6), (int)(*VAR_3-VAR_6));

    return VAR_1;
}
