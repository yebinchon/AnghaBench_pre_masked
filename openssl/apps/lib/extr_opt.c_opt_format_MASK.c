
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 int FUNC_0 (char const*,unsigned long) ;
 int FUNC_1 (char const*,char*) ;

int FUNC_2(const char *VAR_19, unsigned long VAR_20, int *VAR_21)
{
    switch (*VAR_19) {
    default:
        return 0;
    case 'D':
    case 'd':
        if ((VAR_20 & VAR_14) == 0)
            return FUNC_0(VAR_19, VAR_20);
        *VAR_21 = VAR_0;
        break;
    case 'T':
    case 't':
        if ((VAR_20 & VAR_18) == 0)
            return FUNC_0(VAR_19, VAR_20);
        *VAR_21 = VAR_9;
        break;
    case 'N':
    case 'n':
        if ((VAR_20 & VAR_13) == 0)
            return FUNC_0(VAR_19, VAR_20);
        if (FUNC_1(VAR_19, "NSS") != 0 && FUNC_1(VAR_19, "nss") != 0)
            return FUNC_0(VAR_19, VAR_20);
        *VAR_21 = VAR_4;
        break;
    case 'S':
    case 's':
        if ((VAR_20 & VAR_17) == 0)
            return FUNC_0(VAR_19, VAR_20);
        *VAR_21 = VAR_8;
        break;
    case 'M':
    case 'm':
        if ((VAR_20 & VAR_12) == 0)
            return FUNC_0(VAR_19, VAR_20);
        *VAR_21 = VAR_3;
        break;
    case 'E':
    case 'e':
        if ((VAR_20 & VAR_10) == 0)
            return FUNC_0(VAR_19, VAR_20);
        *VAR_21 = VAR_1;
        break;
    case 'H':
    case 'h':
        if ((VAR_20 & VAR_11) == 0)
            return FUNC_0(VAR_19, VAR_20);
        *VAR_21 = VAR_2;
        break;
    case '1':
        if ((VAR_20 & VAR_15) == 0)
            return FUNC_0(VAR_19, VAR_20);
        *VAR_21 = VAR_6;
        break;
    case 'P':
    case 'p':
        if (VAR_19[1] == '\0' || FUNC_1(VAR_19, "PEM") == 0 || FUNC_1(VAR_19, "pem") == 0) {
            if ((VAR_20 & VAR_14) == 0)
                return FUNC_0(VAR_19, VAR_20);
            *VAR_21 = VAR_5;
        } else if (FUNC_1(VAR_19, "PVK") == 0 || FUNC_1(VAR_19, "pvk") == 0) {
            if ((VAR_20 & VAR_16) == 0)
                return FUNC_0(VAR_19, VAR_20);
            *VAR_21 = VAR_7;
        } else if (FUNC_1(VAR_19, "P12") == 0 || FUNC_1(VAR_19, "p12") == 0
                   || FUNC_1(VAR_19, "PKCS12") == 0 || FUNC_1(VAR_19, "pkcs12") == 0) {
            if ((VAR_20 & VAR_15) == 0)
                return FUNC_0(VAR_19, VAR_20);
            *VAR_21 = VAR_6;
        } else {
            return 0;
        }
        break;
    }
    return 1;
}
