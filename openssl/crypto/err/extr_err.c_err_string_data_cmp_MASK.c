
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ error; } ;
typedef TYPE_1__ ERR_STRING_DATA ;



__attribute__((used)) static int FUNC_0(const ERR_STRING_DATA *VAR_0,
                               const ERR_STRING_DATA *VAR_1)
{
    if (VAR_0->error == VAR_1->error)
        return 0;
    return VAR_0->error > VAR_1->error ? 1 : -1;
}
