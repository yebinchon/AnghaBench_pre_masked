
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char const* host; int host_len; } ;
typedef TYPE_1__ parse_data ;
typedef char WCHAR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const**,TYPE_1__*,int) ;
 int FUNC_1 (char const**,TYPE_1__*,int) ;
 int FUNC_2 (char const**,TYPE_1__*,int) ;

__attribute__((used)) static BOOL FUNC_3(const WCHAR **VAR_4, parse_data *VAR_5, DWORD VAR_6, DWORD VAR_7) {
    VAR_5->host = *VAR_4;

    if(**VAR_4 != '[' && !(VAR_7 & VAR_0)) {
        VAR_5->host = ((void*)0);
        return VAR_1;
    } else if(**VAR_4 == '[')
        ++(*VAR_4);

    if(!FUNC_0(VAR_4, VAR_5, VAR_6)) {
        if(VAR_7 & VAR_2 || !FUNC_1(VAR_4, VAR_5, VAR_6)) {
            *VAR_4 = VAR_5->host;
            VAR_5->host = ((void*)0);
            return VAR_1;
        }
    }

    if(**VAR_4 != ']' && !(VAR_7 & VAR_0)) {
        *VAR_4 = VAR_5->host;
        VAR_5->host = ((void*)0);
        return VAR_1;
    } else if(!**VAR_4 && VAR_7 & VAR_0) {



        VAR_5->host_len = *VAR_4 - VAR_5->host;
        return VAR_3;
    }

    ++(*VAR_4);
    if(**VAR_4 == ':') {
        ++(*VAR_4);



        if(!FUNC_2(VAR_4, VAR_5, VAR_6)) {
            *VAR_4 = VAR_5->host;
            VAR_5->host = ((void*)0);
            return VAR_1;
        }
    } else
        VAR_5->host_len = *VAR_4 - VAR_5->host;

    return VAR_3;
}
