
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; char* name; struct TYPE_6__* next; } ;
typedef TYPE_1__ FDSC ;


 unsigned char VAR_0 ;
 int FUNC_0 (char*) ;


 TYPE_1__** FUNC_1 (TYPE_1__**,char*) ;
 char* FUNC_2 (unsigned char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,char*) ;

void FUNC_5(FDSC ** VAR_1, char *VAR_2)
{
    FDSC **VAR_3, *VAR_4;

    if (!(VAR_3 = FUNC_1(VAR_1, VAR_2)))
 FUNC_0("Internal error: file_find failed");
    switch ((*VAR_3)->type) {
    case 129:
 FUNC_4("Dropping %s\n", FUNC_2((unsigned char *)VAR_2));
 *(unsigned char *)VAR_2 = VAR_0;
 break;
    case 128:
 *VAR_2 = *(*VAR_3)->name;
 FUNC_4("Undeleting %s\n", FUNC_2((unsigned char *)VAR_2));
 break;
    default:
 FUNC_0("Internal error: file_modify");
    }
    VAR_4 = (*VAR_3)->next;
    FUNC_3(*VAR_3);
    *VAR_3 = VAR_4;
}
