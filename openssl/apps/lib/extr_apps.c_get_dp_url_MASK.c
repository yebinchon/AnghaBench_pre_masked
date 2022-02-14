
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* distpoint; } ;
struct TYPE_5__ {int * fullname; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ name; } ;
typedef int GENERAL_NAMES ;
typedef int GENERAL_NAME ;
typedef TYPE_3__ DIST_POINT ;
typedef int ASN1_STRING ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;

__attribute__((used)) static const char *FUNC_6(DIST_POINT *VAR_1)
{
    GENERAL_NAMES *VAR_2;
    GENERAL_NAME *VAR_3;
    int VAR_4, VAR_5;
    ASN1_STRING *VAR_6;
    if (!VAR_1->distpoint || VAR_1->distpoint->type != 0)
        return ((void*)0);
    VAR_2 = VAR_1->distpoint->name.fullname;
    for (VAR_4 = 0; VAR_4 < FUNC_3(VAR_2); VAR_4++) {
        VAR_3 = FUNC_4(VAR_2, VAR_4);
        VAR_6 = FUNC_2(VAR_3, &VAR_5);
        if (VAR_5 == VAR_0 && FUNC_1(VAR_6) > 6) {
            const char *VAR_7 = (const char *)FUNC_0(VAR_6);
            if (FUNC_5(VAR_7, "http://", 7) == 0)
                return VAR_7;
        }
    }
    return ((void*)0);
}
