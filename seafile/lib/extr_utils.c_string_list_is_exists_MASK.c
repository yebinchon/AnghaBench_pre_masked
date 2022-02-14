
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_3__ {int data; struct TYPE_3__* next; } ;
typedef TYPE_1__ GList ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ) ;

gboolean
FUNC_1 (GList *VAR_2, const char *VAR_3)
{
    GList *VAR_4;
    for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next) {
        if (FUNC_0(VAR_3, VAR_4->data) == 0)
            return VAR_1;
    }
    return VAR_0;
}
