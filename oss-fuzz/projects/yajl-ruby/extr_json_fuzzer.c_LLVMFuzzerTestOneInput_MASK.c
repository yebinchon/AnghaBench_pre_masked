
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int allowComments; int checkUTF8; } ;
typedef TYPE_1__ yajl_parser_config ;
typedef int yajl_handle ;
typedef int uint8_t ;
struct TYPE_5__ {int objectLevel; int arrayLevel; } ;
typedef TYPE_2__ context ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int *,void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int const*,size_t) ;

int FUNC_3(const uint8_t* VAR_1, size_t VAR_2) {
    context VAR_3 = {
        .arrayLevel = 0,
        .objectLevel = 0,
    };
    yajl_parser_config VAR_4 = {
        .allowComments = 1,
        .checkUTF8 = 1,
    };
    yajl_handle VAR_5 = FUNC_0(&VAR_0, &VAR_4, ((void*)0), (void*)&VAR_3);

    (void)FUNC_2(VAR_5, VAR_1, VAR_2);
    FUNC_1(VAR_5);

    return 0;
}
