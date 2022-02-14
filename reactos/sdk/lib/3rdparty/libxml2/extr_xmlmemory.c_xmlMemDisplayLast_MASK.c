
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mh_type; char* mh_file; int mh_line; scalar_t__ mh_tag; struct TYPE_4__* mh_next; scalar_t__ mh_size; int mh_number; } ;
typedef TYPE_1__ MEMHDR ;
typedef int FILE ;




 scalar_t__ VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,...) ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void
FUNC_6(FILE *VAR_5, long VAR_6)
{





    FILE *VAR_7 = VAR_5;

    if (VAR_6 <= 0)
        return;

    if (VAR_5 == ((void*)0)) {
 VAR_5 = FUNC_1(".memorylist", "w");
 if (VAR_5 == ((void*)0))
     return;
    }
    FUNC_2(VAR_5,"Memory list not compiled (MEM_LIST not defined !)\n");

    if (VAR_7 == ((void*)0))
 FUNC_0(VAR_5);
}
