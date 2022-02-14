
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* pszVal; } ;
struct TYPE_9__ {TYPE_2__ u; int vt; } ;
struct TYPE_10__ {TYPE_3__ value; TYPE_1__* prop; } ;
typedef TYPE_4__ header_t ;
struct TYPE_7__ {int flags; } ;
typedef int DWORD ;


 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (TYPE_4__*,char*) ;
 char* FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static void FUNC_8(header_t *VAR_2, char **VAR_3)
{
    char *VAR_4 = *VAR_3, *VAR_5;
    DWORD VAR_6;

    do {
        VAR_4 = FUNC_6(VAR_4, "\r\n");
        VAR_4 += 2;
    } while(*VAR_4 == ' ' || *VAR_4 == '\t');

    VAR_6 = VAR_4 - *VAR_3;
    VAR_5 = FUNC_1(FUNC_0(), 0, VAR_6 + 1);
    FUNC_4(VAR_5, *VAR_3, VAR_6);
    VAR_5[VAR_6] = '\0';

    FUNC_7(VAR_5, VAR_6);
    FUNC_2("value %s\n", FUNC_3(VAR_5));

    if(VAR_2->prop->flags & VAR_0)
    {
        FUNC_5(VAR_2, VAR_5);
        FUNC_2("value w/o params %s\n", FUNC_3(VAR_5));
    }

    VAR_2->value.vt = VAR_1;
    VAR_2->value.u.pszVal = VAR_5;

    *VAR_3 = VAR_4;
}
