
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; scalar_t__ name; struct TYPE_4__* first; struct TYPE_4__* next; } ;
typedef TYPE_1__ FDSC ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (unsigned char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static void FUNC_3(FDSC * VAR_2)
{
    FDSC *VAR_3;

    while (VAR_2) {
 VAR_3 = VAR_2->next;
 if (VAR_2->first)
     FUNC_3(VAR_2->first);
 else if (VAR_2->type != VAR_1)
     FUNC_2("Warning: did not %s file %s\n", VAR_2->type == VAR_0 ?
     "drop" : "undelete", FUNC_0((unsigned char *)VAR_2->name));
 FUNC_1(VAR_2);
 VAR_2 = VAR_3;
    }
}
