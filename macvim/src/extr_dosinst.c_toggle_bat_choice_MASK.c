
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t arg; } ;
struct TYPE_3__ {char* batpath; char* oldbat; } ;


 char VAR_0 ;
 int FUNC_0 (int,char*,char*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (char*,char*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void
FUNC_2(int VAR_3)
{
    char *VAR_4 = VAR_2[VAR_1[VAR_3].arg].batpath;
    char *VAR_5 = VAR_2[VAR_1[VAR_3].arg].oldbat;

    if (*VAR_4 == VAR_0)
    {
 FUNC_0(VAR_3, "    Overwrite %s", VAR_5);
 FUNC_1(VAR_4, VAR_5);
    }
    else
    {
 FUNC_0(VAR_3, "    Do NOT overwrite %s", VAR_5);
 *VAR_4 = VAR_0;
    }
}
