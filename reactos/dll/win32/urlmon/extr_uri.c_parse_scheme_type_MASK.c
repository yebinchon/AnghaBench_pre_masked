
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int uri; void* scheme_type; scalar_t__ is_relative; scalar_t__ scheme_len; scalar_t__ scheme; } ;
typedef TYPE_1__ parse_data ;
struct TYPE_7__ {void* scheme; int scheme_name; } ;
typedef size_t DWORD ;
typedef int BOOL ;


 size_t FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (char*,TYPE_1__*,int ) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static BOOL FUNC_5(parse_data *VAR_4) {

    if(VAR_4->scheme && VAR_4->scheme_len) {
        DWORD VAR_5;

        for(VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); ++VAR_5) {
            if(FUNC_4(VAR_3[VAR_5].scheme_name) == VAR_4->scheme_len) {

                if(!FUNC_2(VAR_3[VAR_5].scheme_name, VAR_4->scheme, VAR_4->scheme_len)) {
                    VAR_4->scheme_type = VAR_3[VAR_5].scheme;
                    return VAR_1;
                }
            }
        }


        VAR_4->scheme_type = VAR_2;
        return VAR_1;
    } else if(VAR_4->is_relative) {

        VAR_4->scheme_type = VAR_2;
        return VAR_1;
    } else {

        FUNC_1("(%p): Unable to determine scheme type for URI %s\n", VAR_4, FUNC_3(VAR_4->uri));
        return VAR_0;
    }
}
