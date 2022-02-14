
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
typedef TYPE_1__ NETSCAPE_CERT_SEQUENCE ;
typedef int ASN1_VALUE ;
typedef int ASN1_ITEM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(int VAR_2, ASN1_VALUE **VAR_3, const ASN1_ITEM *VAR_4,
                    void *VAR_5)
{
    if (VAR_2 == VAR_0) {
        NETSCAPE_CERT_SEQUENCE *VAR_6;
        VAR_6 = (NETSCAPE_CERT_SEQUENCE *)*VAR_3;
        VAR_6->type = FUNC_0(VAR_1);
    }
    return 1;
}
