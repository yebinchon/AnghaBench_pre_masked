
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_6__ {TYPE_1__* ktri; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__ d; } ;
struct TYPE_5__ {int rid; } ;
typedef TYPE_3__ CMS_RecipientInfo ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;

int FUNC_2(CMS_RecipientInfo *VAR_3, X509 *VAR_4)
{
    if (VAR_3->type != VAR_1) {
        FUNC_0(VAR_0,
               VAR_2);
        return -2;
    }
    return FUNC_1(VAR_3->d.ktri->rid, VAR_4);
}
