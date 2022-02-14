
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int X509_NAME ;
struct TYPE_11__ {scalar_t__ skid; } ;
typedef TYPE_2__ X509 ;
struct TYPE_13__ {int * issuer; scalar_t__ serial; scalar_t__ keyid; } ;
struct TYPE_10__ {int * dirn; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_1__ d; } ;
typedef int GENERAL_NAMES ;
typedef TYPE_3__ GENERAL_NAME ;
typedef TYPE_4__ AUTHORITY_KEYID ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 TYPE_3__* FUNC_6 (int *,int) ;

int FUNC_7(X509 *VAR_4, AUTHORITY_KEYID *VAR_5)
{

    if (!VAR_5)
        return VAR_3;


    if (VAR_5->keyid && VAR_4->skid &&
        FUNC_1(VAR_5->keyid, VAR_4->skid))
        return VAR_2;

    if (VAR_5->serial &&
        FUNC_0(FUNC_4(VAR_4), VAR_5->serial))
        return VAR_1;

    if (VAR_5->issuer) {





        GENERAL_NAMES *VAR_6;
        GENERAL_NAME *VAR_7;
        X509_NAME *VAR_8 = ((void*)0);
        int VAR_9;
        VAR_6 = VAR_5->issuer;
        for (VAR_9 = 0; VAR_9 < FUNC_5(VAR_6); VAR_9++) {
            VAR_7 = FUNC_6(VAR_6, VAR_9);
            if (VAR_7->type == VAR_0) {
                VAR_8 = VAR_7->d.dirn;
                break;
            }
        }
        if (VAR_8 && FUNC_2(VAR_8, FUNC_3(VAR_4)))
            return VAR_1;
    }
    return VAR_3;
}
