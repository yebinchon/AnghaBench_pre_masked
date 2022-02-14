
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {char* ptr; int len; } ;
typedef TYPE_3__ xmlstr_t ;
struct TYPE_6__ {int nummethods; } ;
struct TYPE_7__ {TYPE_1__ ifaceps; } ;
struct entity {TYPE_2__ u; } ;
typedef char WCHAR ;
typedef int UNICODE_STRING ;
typedef int ULONG ;
typedef int BOOL ;


 int FUNC_0 (char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__ const*) ;

__attribute__((used)) static BOOL FUNC_2(const xmlstr_t *VAR_2, struct entity *VAR_3)
{
    const WCHAR *VAR_4;
    ULONG VAR_5 = 0;

    for (VAR_4 = VAR_2->ptr; VAR_4 < VAR_2->ptr + VAR_2->len; VAR_4++)
    {
        if (*VAR_4 >= '0' && *VAR_4 <= '9')
            VAR_5 = VAR_5 * 10 + *VAR_4 - '0';
        else
        {
            UNICODE_STRING VAR_6 = FUNC_1(VAR_2);
            FUNC_0("wrong numeric value %wZ\n", &VAR_6);
            return VAR_0;
        }
    }
    VAR_3->u.ifaceps.nummethods = VAR_5;

    return VAR_1;
}
