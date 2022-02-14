
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* container; int entry; int data; int name; } ;
typedef TYPE_1__ cookie_t ;
struct TYPE_6__ {int cookie_list; int cookie_url; } ;
typedef TYPE_2__ cookie_container_t ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(cookie_container_t *VAR_0, cookie_t *VAR_1)
{
    FUNC_0("Adding %s=%s to %s\n", FUNC_1(VAR_1->name), FUNC_1(VAR_1->data),
          FUNC_1(VAR_0->cookie_url));

    FUNC_2(&VAR_0->cookie_list, &VAR_1->entry);
    VAR_1->container = VAR_0;
}
