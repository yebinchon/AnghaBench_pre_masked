
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_4__ {int id; int name; int head; } ;
typedef TYPE_1__ SeafRepo ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static gboolean
FUNC_2 (SeafRepo *VAR_2)
{
    if (!VAR_2->head) {
        FUNC_1 ("Head for repo '%s'(%.8s) is not set.\n",
                      VAR_2->name, VAR_2->id);
        return VAR_0;
    }

    if (FUNC_0 (VAR_2) < 0) {
        return VAR_0;
    }

    return VAR_1;
}
