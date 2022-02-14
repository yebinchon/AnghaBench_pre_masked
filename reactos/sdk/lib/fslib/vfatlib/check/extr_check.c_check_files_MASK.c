
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef int DOS_FS ;
typedef TYPE_1__ DOS_FILE ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(DOS_FS * VAR_0, DOS_FILE * VAR_1)
{
    while (VAR_1) {
 if (FUNC_0(VAR_0, VAR_1))
     return 1;
 VAR_1 = VAR_1->next;
    }
    return 0;
}
