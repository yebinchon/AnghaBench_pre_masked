
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ scheme_type; scalar_t__ has_implicit_scheme; } ;
typedef TYPE_1__ parse_data ;
typedef char WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (char const**) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline BOOL FUNC_2(const WCHAR **VAR_5, const parse_data *VAR_6) {
    const WCHAR *VAR_7 = *VAR_5;

    if(VAR_6->scheme_type == VAR_4)
        return VAR_1;
    else if(VAR_6->scheme_type == VAR_2 && VAR_6->has_implicit_scheme)
        return VAR_1;
    else if(FUNC_1(VAR_6->scheme_type) && (*VAR_5)[0] == '\\' && (*VAR_5)[1] == '\\') {
        *VAR_5 += 2;
        return VAR_1;
    } else if(VAR_6->scheme_type != VAR_3 && FUNC_0(VAR_5))
        return VAR_1;

    *VAR_5 = VAR_7;
    return VAR_0;
}
