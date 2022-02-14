
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* lname; int bitnum; } ;
typedef TYPE_1__ BIT_STRING_BITNAME ;
typedef int BIO ;
typedef int ASN1_BIT_STRING ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,int,char*,char const*,int,char*) ;
 int FUNC_2 (int *,char*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_3(BIO *VAR_1, const char *VAR_2,
                         ASN1_BIT_STRING *VAR_3, int VAR_4)
{
    int VAR_5 = 1;
    const BIT_STRING_BITNAME *VAR_6;
    FUNC_1(VAR_1, "%*s%s:\n%*s", VAR_4, "", VAR_2, VAR_4 + 2, "");
    for (VAR_6 = VAR_0; VAR_6->lname; VAR_6++) {
        if (FUNC_0(VAR_3, VAR_6->bitnum)) {
            if (VAR_5)
                VAR_5 = 0;
            else
                FUNC_2(VAR_1, ", ");
            FUNC_2(VAR_1, VAR_6->lname);
        }
    }
    if (VAR_5)
        FUNC_2(VAR_1, "<EMPTY>\n");
    else
        FUNC_2(VAR_1, "\n");
    return 1;
}
