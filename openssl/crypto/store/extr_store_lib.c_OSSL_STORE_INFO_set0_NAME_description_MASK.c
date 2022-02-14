
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
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;

int FUNC_1(OSSL_STORE_INFO *VAR_3, char *VAR_4)
{
    if (VAR_3->type != VAR_2) {
        FUNC_0(VAR_1,
                      VAR_0);
        return 0;
    }

    VAR_3->_.name.desc = VAR_4;

    return 1;
}
