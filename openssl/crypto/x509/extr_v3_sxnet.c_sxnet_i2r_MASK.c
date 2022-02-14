
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509V3_EXT_METHOD ;
struct TYPE_6__ {int ids; int version; } ;
struct TYPE_5__ {int user; int zone; } ;
typedef TYPE_1__ SXNETID ;
typedef TYPE_2__ SXNET ;
typedef int BIO ;


 long FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*,int,char*,...) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(X509V3_EXT_METHOD *VAR_0, SXNET *VAR_1, BIO *VAR_2,
                     int VAR_3)
{
    long VAR_4;
    char *VAR_5;
    SXNETID *VAR_6;
    int VAR_7;
    VAR_4 = FUNC_0(VAR_1->version);
    FUNC_2(VAR_2, "%*sVersion: %ld (0x%lX)", VAR_3, "", VAR_4 + 1, VAR_4);
    for (VAR_7 = 0; VAR_7 < FUNC_5(VAR_1->ids); VAR_7++) {
        VAR_6 = FUNC_6(VAR_1->ids, VAR_7);
        VAR_5 = FUNC_4(((void*)0), VAR_6->zone);
        FUNC_2(VAR_2, "\n%*sZone: %s, User: ", VAR_3, "", VAR_5);
        FUNC_3(VAR_5);
        FUNC_1(VAR_2, VAR_6->user);
    }
    return 1;
}
