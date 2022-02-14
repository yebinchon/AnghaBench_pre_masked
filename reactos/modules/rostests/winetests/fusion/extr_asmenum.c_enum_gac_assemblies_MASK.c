
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct list {int dummy; } ;
struct TYPE_4__ {char* cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATAA ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct list*,char*,char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(struct list *VAR_2, char VAR_3[VAR_1])
{
    WIN32_FIND_DATAA VAR_4;
    HANDLE VAR_5;
    char *VAR_6 = VAR_3 + FUNC_6( VAR_3 );

    FUNC_4( VAR_6, "\\*", VAR_3 + VAR_1 - VAR_6 );
    VAR_5 = FUNC_1(VAR_3, &VAR_4);
    if (VAR_5 == VAR_0) return;
    VAR_6++;

    do
    {
        if (!FUNC_5(VAR_4.cFileName, ".") || !FUNC_5(VAR_4.cFileName, "..")) continue;
        FUNC_4( VAR_6, VAR_4.cFileName, VAR_3 + VAR_1 - VAR_6 );
        FUNC_3( VAR_2, VAR_4.cFileName, VAR_3 );
    } while (FUNC_2(VAR_5, &VAR_4) != 0);

    FUNC_0(VAR_5);
}
