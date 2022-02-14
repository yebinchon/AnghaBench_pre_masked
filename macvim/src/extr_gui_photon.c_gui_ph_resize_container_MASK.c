
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int vimContainer; int vimWindow; } ;
struct TYPE_5__ {int pos; } ;
typedef TYPE_1__ PhArea_t ;


 int FUNC_0 (int ,int ,TYPE_1__*,int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void
FUNC_3(void)
{
    PhArea_t VAR_2;

    FUNC_1(VAR_1.vimWindow, &VAR_2);
    FUNC_2 (VAR_1.vimContainer, &VAR_2.pos);

    FUNC_0(VAR_1.vimContainer, VAR_0, &VAR_2, 0);
}
