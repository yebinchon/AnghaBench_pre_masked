
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; int id; } ;
typedef TYPE_1__ SeafRepo ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char const*,int ) ;

void
FUNC_4 (SeafRepo *VAR_1, const char *VAR_2)
{
    char *VAR_3 = VAR_1->name;
    VAR_1->name = FUNC_1(VAR_2);
    FUNC_0 (VAR_3);

    if (FUNC_2 (VAR_1->id))
        FUNC_3 (VAR_1, VAR_2, VAR_0);
}
