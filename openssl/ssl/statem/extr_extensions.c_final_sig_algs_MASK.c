
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hit; } ;
typedef TYPE_1__ SSL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(SSL *VAR_3, unsigned int VAR_4, int VAR_5)
{
    if (!VAR_5 && FUNC_0(VAR_3) && !VAR_3->hit) {
        FUNC_1(VAR_3, VAR_2, VAR_0,
                 VAR_1);
        return 0;
    }

    return 1;
}
