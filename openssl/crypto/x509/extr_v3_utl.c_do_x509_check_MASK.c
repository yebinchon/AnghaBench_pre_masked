
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int equal_fn ;
typedef int X509_NAME_ENTRY ;
typedef int X509_NAME ;
typedef int X509 ;
struct TYPE_4__ {int const* iPAddress; int const* dNSName; int const* rfc822Name; } ;
struct TYPE_5__ {int type; TYPE_1__ d; } ;
typedef int GENERAL_NAMES ;
typedef TYPE_2__ GENERAL_NAME ;
typedef int const ASN1_STRING ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int const* FUNC_1 (int const*) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int) ;
 int * FUNC_4 (int *,int ,int *,int *) ;
 int * FUNC_5 (int *) ;
 unsigned int VAR_11 ;
 int FUNC_6 (int const*,int,int ,unsigned int,char const*,size_t,char**) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (int *) ;
 TYPE_2__* FUNC_8 (int *,int) ;
 size_t FUNC_9 (char const*) ;

__attribute__((used)) static int FUNC_10(X509 *VAR_16, const char *VAR_17, size_t VAR_18,
                         unsigned int VAR_19, int VAR_20, char **VAR_21)
{
    GENERAL_NAMES *VAR_22 = ((void*)0);
    X509_NAME *VAR_23 = ((void*)0);
    int VAR_24;
    int VAR_25 = VAR_5;
    int VAR_26;
    int VAR_27 = 0;
    int VAR_28 = 0;
    equal_fn VAR_29;


    VAR_19 &= ~VAR_11;
    if (VAR_20 == VAR_1) {
        VAR_25 = VAR_3;
        VAR_26 = VAR_6;
        VAR_29 = VAR_13;
    } else if (VAR_20 == VAR_0) {
        VAR_25 = VAR_2;

        if (VAR_18 > 1 && VAR_17[0] == '.')
            VAR_19 |= VAR_11;
        VAR_26 = VAR_6;
        if (VAR_19 & VAR_10)
            VAR_29 = VAR_14;
        else
            VAR_29 = VAR_15;
    } else {
        VAR_26 = VAR_7;
        VAR_29 = VAR_12;
    }

    if (VAR_18 == 0)
        VAR_18 = FUNC_9(VAR_17);

    VAR_22 = FUNC_4(VAR_16, VAR_4, ((void*)0), ((void*)0));
    if (VAR_22) {
        for (VAR_24 = 0; VAR_24 < FUNC_7(VAR_22); VAR_24++) {
            GENERAL_NAME *VAR_30;
            ASN1_STRING *VAR_31;
            VAR_30 = FUNC_8(VAR_22, VAR_24);
            if (VAR_30->type != VAR_20)
                continue;
            VAR_27 = 1;
            if (VAR_20 == VAR_1)
                VAR_31 = VAR_30->d.rfc822Name;
            else if (VAR_20 == VAR_0)
                VAR_31 = VAR_30->d.dNSName;
            else
                VAR_31 = VAR_30->d.iPAddress;

            if ((VAR_28 = FUNC_6(VAR_31, VAR_26, VAR_29, VAR_19,
                                      VAR_17, VAR_18, VAR_21)) != 0)
                break;
        }
        FUNC_0(VAR_22);
        if (VAR_28 != 0)
            return VAR_28;
        if (VAR_27 && !(VAR_19 & VAR_8))
            return 0;
    }


    if (VAR_25 == VAR_5 || (VAR_19 & VAR_9))
        return 0;

    VAR_24 = -1;
    VAR_23 = FUNC_5(VAR_16);
    while ((VAR_24 = FUNC_3(VAR_23, VAR_25, VAR_24)) >= 0) {
        const X509_NAME_ENTRY *VAR_32 = FUNC_2(VAR_23, VAR_24);
        const ASN1_STRING *VAR_33 = FUNC_1(VAR_32);


        if ((VAR_28 = FUNC_6(VAR_33, -1, VAR_29, VAR_19,
                                  VAR_17, VAR_18, VAR_21)) != 0)
            return VAR_28;
    }
    return 0;
}
