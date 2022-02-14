
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {char* ptr; int len; } ;
typedef TYPE_3__ xmlstr_t ;
struct TYPE_6__ {int flags; } ;
struct TYPE_7__ {TYPE_1__ typelib; } ;
struct entity {TYPE_2__ u; } ;
typedef int WORD ;
typedef char WCHAR ;
typedef int UNICODE_STRING ;
typedef int BOOL ;


 int FUNC_0 (char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char const*,int ,int) ;
 int FUNC_2 (TYPE_3__ const*) ;

__attribute__((used)) static BOOL FUNC_3(const xmlstr_t *VAR_10, struct entity *VAR_11)
{
    WORD *VAR_12 = &VAR_11->u.typelib.flags;
    const WCHAR *VAR_13 = VAR_10->ptr, *VAR_14;
    int VAR_15 = 0;

    *VAR_12 = 0;


    while (VAR_15 < VAR_10->len)
    {
        VAR_14 = VAR_13;
        while (*VAR_13 != ',' && (VAR_15++ < VAR_10->len)) VAR_13++;

        if (!FUNC_1(VAR_14, VAR_9, VAR_13-VAR_14))
            *VAR_12 |= VAR_4;
        else if (!FUNC_1(VAR_14, VAR_6, VAR_13-VAR_14))
            *VAR_12 |= VAR_1;
        else if (!FUNC_1(VAR_14, VAR_8, VAR_13-VAR_14))
            *VAR_12 |= VAR_3;
        else if (!FUNC_1(VAR_14, VAR_7, VAR_13-VAR_14))
            *VAR_12 |= VAR_2;
        else
        {
            UNICODE_STRING VAR_16 = FUNC_2(VAR_10);
            FUNC_0("unknown flags value %wZ\n", &VAR_16);
            return VAR_0;
        }


        VAR_13++;
        VAR_15++;
    }

    return VAR_5;
}
