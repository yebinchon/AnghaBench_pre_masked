
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int strbuf ;
struct TYPE_6__ {unsigned char* data; int length; int type; } ;
typedef TYPE_1__ ASN1_STRING ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,unsigned char const*,int) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int,char*,long) ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (int,char*,char*) ;




 int FUNC_6 (unsigned char*) ;
 unsigned char* FUNC_7 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_8 (unsigned long,void*) ;
 int FUNC_9 (unsigned long,void*) ;
 int FUNC_10 (unsigned long,void*) ;
 int FUNC_11 (unsigned long,void*) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (unsigned char const*,int,int const,int (*) (unsigned long,void*),...) ;
 int VAR_25 ;

int FUNC_14(ASN1_STRING **VAR_26, const unsigned char *VAR_27, int VAR_28,
                        int VAR_29, unsigned long VAR_30,
                        long VAR_31, long VAR_32)
{
    int VAR_33;
    int VAR_34;
    char VAR_35;
    int VAR_36, VAR_37 = 0;
    ASN1_STRING *VAR_38;
    unsigned char *VAR_39;
    int VAR_40;
    char VAR_41[32];
    int (*VAR_42) (unsigned long, void *) = ((void*)0);
    if (VAR_28 == -1)
        VAR_28 = FUNC_12((const char *)VAR_27);
    if (!VAR_30)
        VAR_30 = VAR_14;


    switch (VAR_29) {

    case 130:
        if (VAR_28 & 1) {
            FUNC_3(VAR_0,
                    VAR_2);
            return -1;
        }
        VAR_40 = VAR_28 >> 1;
        break;

    case 129:
        if (VAR_28 & 3) {
            FUNC_3(VAR_0,
                    VAR_3);
            return -1;
        }
        VAR_40 = VAR_28 >> 2;
        break;

    case 128:
        VAR_40 = 0;

        VAR_34 = FUNC_13(VAR_27, VAR_28, 128, VAR_23, &VAR_40);
        if (VAR_34 < 0) {
            FUNC_3(VAR_0, VAR_4);
            return -1;
        }
        break;

    case 131:
        VAR_40 = VAR_28;
        break;

    default:
        FUNC_3(VAR_0, VAR_7);
        return -1;
    }

    if ((VAR_31 > 0) && (VAR_40 < VAR_31)) {
        FUNC_3(VAR_0, VAR_6);
        FUNC_4(VAR_41, sizeof(VAR_41), "%ld", VAR_31);
        FUNC_5(2, "minsize=", VAR_41);
        return -1;
    }

    if ((VAR_32 > 0) && (VAR_40 > VAR_32)) {
        FUNC_3(VAR_0, VAR_5);
        FUNC_4(VAR_41, sizeof(VAR_41), "%ld", VAR_32);
        FUNC_5(2, "maxsize=", VAR_41);
        return -1;
    }


    if (FUNC_13(VAR_27, VAR_28, VAR_29, VAR_25, &VAR_30) < 0) {
        FUNC_3(VAR_0, VAR_1);
        return -1;
    }


    VAR_36 = 131;
    if (VAR_30 & VAR_10)
        VAR_33 = VAR_18;
    else if (VAR_30 & VAR_11)
        VAR_33 = VAR_19;
    else if (VAR_30 & VAR_9)
        VAR_33 = VAR_17;
    else if (VAR_30 & VAR_12)
        VAR_33 = VAR_20;
    else if (VAR_30 & VAR_8) {
        VAR_33 = VAR_16;
        VAR_36 = 130;
    } else if (VAR_30 & VAR_13) {
        VAR_33 = VAR_21;
        VAR_36 = 129;
    } else {
        VAR_33 = VAR_22;
        VAR_36 = 128;
    }
    if (!VAR_26)
        return VAR_33;
    if (*VAR_26) {
        VAR_35 = 0;
        VAR_38 = *VAR_26;
        FUNC_6(VAR_38->data);
        VAR_38->data = ((void*)0);
        VAR_38->length = 0;
        VAR_38->type = VAR_33;
    } else {
        VAR_35 = 1;
        VAR_38 = FUNC_2(VAR_33);
        if (VAR_38 == ((void*)0)) {
            FUNC_3(VAR_0, VAR_15);
            return -1;
        }
        *VAR_26 = VAR_38;
    }

    if (VAR_29 == VAR_36) {
        if (!FUNC_1(VAR_38, VAR_27, VAR_28)) {
            FUNC_3(VAR_0, VAR_15);
            return -1;
        }
        return VAR_33;
    }


    switch (VAR_36) {
    case 131:
        VAR_37 = VAR_40;
        VAR_42 = FUNC_8;
        break;

    case 130:
        VAR_37 = VAR_40 << 1;
        VAR_42 = FUNC_9;
        break;

    case 129:
        VAR_37 = VAR_40 << 2;
        VAR_42 = FUNC_10;
        break;

    case 128:
        VAR_37 = 0;
        FUNC_13(VAR_27, VAR_28, VAR_29, VAR_24, &VAR_37);
        VAR_42 = FUNC_11;
        break;
    }
    if ((VAR_39 = FUNC_7(VAR_37 + 1)) == ((void*)0)) {
        if (VAR_35)
            FUNC_0(VAR_38);
        FUNC_3(VAR_0, VAR_15);
        return -1;
    }
    VAR_38->length = VAR_37;
    VAR_38->data = VAR_39;
    VAR_39[VAR_37] = 0;
    FUNC_13(VAR_27, VAR_28, VAR_29, VAR_42, &VAR_39);
    return VAR_33;
}
