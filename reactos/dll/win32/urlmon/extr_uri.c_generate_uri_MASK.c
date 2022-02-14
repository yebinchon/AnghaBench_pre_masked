
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int parse_data ;
typedef int UriBuilder ;
struct TYPE_4__ {int create_flags; int * raw_uri; } ;
typedef TYPE_1__ Uri ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int const*,TYPE_1__*,int ) ;
 int FUNC_3 (int const*,int *,int ) ;

__attribute__((used)) static HRESULT FUNC_4(const UriBuilder *VAR_4, const parse_data *VAR_5, Uri *VAR_6, DWORD VAR_7) {
    HRESULT VAR_8;
    DWORD VAR_9 = FUNC_3(VAR_5, ((void*)0), 0);
    VAR_6->raw_uri = FUNC_1(((void*)0), VAR_9);
    if(!VAR_6->raw_uri)
        return VAR_1;

    FUNC_3(VAR_5, VAR_6->raw_uri, 0);

    VAR_8 = FUNC_2(VAR_5, VAR_6, VAR_7);
    if(FUNC_0(VAR_8)) {
        if(VAR_8 == VAR_0)
            return VAR_2;
        return VAR_8;
    }

    VAR_6->create_flags = VAR_7;
    return VAR_3;
}
