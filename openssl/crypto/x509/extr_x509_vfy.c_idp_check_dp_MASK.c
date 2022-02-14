
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int X509_NAME ;
struct TYPE_11__ {int * fullname; } ;
struct TYPE_13__ {int type; TYPE_2__ name; int * dpname; } ;
struct TYPE_10__ {int * directoryName; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_1__ d; } ;
typedef int GENERAL_NAMES ;
typedef TYPE_3__ GENERAL_NAME ;
typedef TYPE_4__ DIST_POINT_NAME ;


 int FUNC_0 (TYPE_3__*,TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(DIST_POINT_NAME *VAR_1, DIST_POINT_NAME *VAR_2)
{
    X509_NAME *VAR_3 = ((void*)0);
    GENERAL_NAMES *VAR_4 = ((void*)0);
    GENERAL_NAME *VAR_5, *VAR_6;
    int VAR_7, VAR_8;
    if (!VAR_1 || !VAR_2)
        return 1;
    if (VAR_1->type == 1) {
        if (!VAR_1->dpname)
            return 0;

        if (VAR_2->type == 1) {
            if (!VAR_2->dpname)
                return 0;
            if (!FUNC_1(VAR_1->dpname, VAR_2->dpname))
                return 1;
            else
                return 0;
        }

        VAR_3 = VAR_1->dpname;
        VAR_4 = VAR_2->name.fullname;
    } else if (VAR_2->type == 1) {
        if (!VAR_2->dpname)
            return 0;

        VAR_4 = VAR_1->name.fullname;
        VAR_3 = VAR_2->dpname;
    }


    if (VAR_3) {
        for (VAR_7 = 0; VAR_7 < FUNC_2(VAR_4); VAR_7++) {
            VAR_5 = FUNC_3(VAR_4, VAR_7);
            if (VAR_5->type != VAR_0)
                continue;
            if (!FUNC_1(VAR_3, VAR_5->d.directoryName))
                return 1;
        }
        return 0;
    }



    for (VAR_7 = 0; VAR_7 < FUNC_2(VAR_1->name.fullname); VAR_7++) {
        VAR_5 = FUNC_3(VAR_1->name.fullname, VAR_7);
        for (VAR_8 = 0; VAR_8 < FUNC_2(VAR_2->name.fullname); VAR_8++) {
            VAR_6 = FUNC_3(VAR_2->name.fullname, VAR_8);
            if (!FUNC_0(VAR_5, VAR_6))
                return 1;
        }
    }

    return 0;

}
