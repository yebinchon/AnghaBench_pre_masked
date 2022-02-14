
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* desc; } ;
struct TYPE_6__ {TYPE_1__ name; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__ _; } ;
typedef TYPE_3__ OSSL_STORE_INFO ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;

char *FUNC_2(const OSSL_STORE_INFO *VAR_4)
{
    if (VAR_4->type == VAR_2) {
        char *VAR_5 = FUNC_0(VAR_4->_.name.desc
                                   ? VAR_4->_.name.desc : "");

        if (VAR_5 == ((void*)0))
            FUNC_1(VAR_1,
                     VAR_0);
        return VAR_5;
    }
    FUNC_1(VAR_1,
                  VAR_3);
    return ((void*)0);
}
