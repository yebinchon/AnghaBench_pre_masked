
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int X509_NAME ;
typedef int X509_CRL ;
struct TYPE_8__ {int CRLissuer; } ;
struct TYPE_6__ {int directoryName; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_1__ d; } ;
typedef TYPE_2__ GENERAL_NAME ;
typedef TYPE_3__ DIST_POINT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(DIST_POINT *VAR_2, X509_CRL *VAR_3, int VAR_4)
{
    int VAR_5;
    X509_NAME *VAR_6 = FUNC_0(VAR_3);

    if (!VAR_2->CRLissuer)
        return ! !(VAR_4 & VAR_0);
    for (VAR_5 = 0; VAR_5 < FUNC_2(VAR_2->CRLissuer); VAR_5++) {
        GENERAL_NAME *VAR_7 = FUNC_3(VAR_2->CRLissuer, VAR_5);
        if (VAR_7->type != VAR_1)
            continue;
        if (!FUNC_1(VAR_7->d.directoryName, VAR_6))
            return 1;
    }
    return 0;
}
