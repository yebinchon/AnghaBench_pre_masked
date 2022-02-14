
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int idp_reasons; int idp_flags; } ;
typedef TYPE_2__ X509_CRL ;
struct TYPE_9__ {scalar_t__ onlyuser; scalar_t__ onlyCA; scalar_t__ onlyattr; scalar_t__ indirectCRL; int distpoint; TYPE_1__* onlysomereasons; } ;
struct TYPE_7__ {int length; int* data; } ;
typedef TYPE_3__ ISSUING_DIST_POINT ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(X509_CRL *VAR_8, ISSUING_DIST_POINT *VAR_9)
{
    int VAR_10 = 0;

    VAR_8->idp_flags |= VAR_6;
    if (VAR_9->onlyuser > 0) {
        VAR_10++;
        VAR_8->idp_flags |= VAR_5;
    }
    if (VAR_9->onlyCA > 0) {
        VAR_10++;
        VAR_8->idp_flags |= VAR_4;
    }
    if (VAR_9->onlyattr > 0) {
        VAR_10++;
        VAR_8->idp_flags |= VAR_3;
    }

    if (VAR_10 > 1)
        VAR_8->idp_flags |= VAR_2;

    if (VAR_9->indirectCRL > 0)
        VAR_8->idp_flags |= VAR_1;

    if (VAR_9->onlysomereasons) {
        VAR_8->idp_flags |= VAR_7;
        if (VAR_9->onlysomereasons->length > 0)
            VAR_8->idp_reasons = VAR_9->onlysomereasons->data[0];
        if (VAR_9->onlysomereasons->length > 1)
            VAR_8->idp_reasons |= (VAR_9->onlysomereasons->data[1] << 8);
        VAR_8->idp_reasons &= VAR_0;
    }

    FUNC_0(VAR_9->distpoint, FUNC_1(VAR_8));
}
