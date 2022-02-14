
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int accept_sock; int accept_family; } ;
typedef TYPE_1__ BIO_ACCEPT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static BIO_ACCEPT *FUNC_2(void)
{
    BIO_ACCEPT *VAR_4;

    if ((VAR_4 = FUNC_1(sizeof(*VAR_4))) == ((void*)0)) {
        FUNC_0(VAR_1, VAR_2);
        return ((void*)0);
    }
    VAR_4->accept_family = VAR_0;
    VAR_4->accept_sock = (int)VAR_3;
    return VAR_4;
}
