
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct server_info {int owner; int scope; } ;
struct list_entry {int dummy; } ;
struct TYPE_3__ {int owner; int scope; } ;
typedef TYPE_1__ nfs41_server ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct list_entry const*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(
    const struct list_entry *VAR_1,
    const void *VAR_2)
{
    const nfs41_server *VAR_3 = FUNC_0(VAR_1);
    const struct server_info *VAR_4 = (const struct server_info*)VAR_2;
    const int VAR_5 = FUNC_1(VAR_3->scope, VAR_4->scope, VAR_0);
    return VAR_5 ? VAR_5 : FUNC_1(VAR_3->owner, VAR_4->owner, VAR_0);
}
