
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_4__ {scalar_t__ status; int name; } ;
typedef TYPE_1__ DiffEntry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;

__attribute__((used)) static gboolean
FUNC_2 (DiffEntry *VAR_6, DiffEntry *VAR_7)
{
    int VAR_8;

    if (VAR_6->status == VAR_2 &&
        VAR_7->status == VAR_1)
    {
        VAR_8 = FUNC_0 (VAR_6->name);
        if (FUNC_0 (VAR_7->name) > VAR_8 &&
            FUNC_1 (VAR_6->name, VAR_7->name, VAR_8) == 0)
            return VAR_5;
    }

    if (VAR_6->status == VAR_3 &&
        VAR_7->status == VAR_0)
    {
        VAR_8 = FUNC_0 (VAR_6->name);
        if (FUNC_0 (VAR_7->name) > VAR_8 &&
            FUNC_1 (VAR_6->name, VAR_7->name, VAR_8) == 0)
            return VAR_5;
    }

    return VAR_4;
}
