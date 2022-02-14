
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct tm {int dummy; } ;
struct TYPE_4__ {int size; int date; int time; } ;
struct TYPE_5__ {TYPE_1__ dir_ent; } ;
typedef TYPE_2__ DOS_FILE ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct tm* FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int,char*) ;
 int FUNC_5 (char*,int,char*,struct tm*) ;

__attribute__((used)) static char *FUNC_6(DOS_FILE * VAR_0)
{
    static char VAR_1[100];
    struct tm *VAR_2;
    char VAR_3[100];
    time_t VAR_4;

    VAR_4 =
 FUNC_0(FUNC_1(VAR_0->dir_ent.time), FUNC_1(VAR_0->dir_ent.date));
    VAR_2 = FUNC_3(&VAR_4);
    FUNC_5(VAR_3, 99, "%H:%M:%S %b %d %Y", VAR_2);
    FUNC_4(VAR_1, "  Size %u bytes, date %s", FUNC_2(VAR_0->dir_ent.size), VAR_3);
    return VAR_1;
}
