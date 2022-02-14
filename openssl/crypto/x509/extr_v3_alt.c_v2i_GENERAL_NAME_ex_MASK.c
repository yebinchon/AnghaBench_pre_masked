
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509V3_EXT_METHOD ;
typedef int X509V3_CTX ;
struct TYPE_3__ {char* name; char* value; } ;
typedef int GENERAL_NAME ;
typedef TYPE_1__ CONF_VALUE ;


 int FUNC_0 (int,char*,char*) ;
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
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (int *,int const*,int *,int,char*,int) ;
 int FUNC_3 (char*,char*) ;

GENERAL_NAME *FUNC_4(GENERAL_NAME *VAR_10,
                                  const X509V3_EXT_METHOD *VAR_11,
                                  X509V3_CTX *VAR_12, CONF_VALUE *VAR_13, int VAR_14)
{
    int VAR_15;

    char *VAR_16, *VAR_17;

    VAR_16 = VAR_13->name;
    VAR_17 = VAR_13->value;

    if (!VAR_17) {
        FUNC_1(VAR_7, VAR_8);
        return ((void*)0);
    }

    if (!FUNC_3(VAR_16, "email"))
        VAR_15 = VAR_2;
    else if (!FUNC_3(VAR_16, "URI"))
        VAR_15 = VAR_6;
    else if (!FUNC_3(VAR_16, "DNS"))
        VAR_15 = VAR_1;
    else if (!FUNC_3(VAR_16, "RID"))
        VAR_15 = VAR_5;
    else if (!FUNC_3(VAR_16, "IP"))
        VAR_15 = VAR_3;
    else if (!FUNC_3(VAR_16, "dirName"))
        VAR_15 = VAR_0;
    else if (!FUNC_3(VAR_16, "otherName"))
        VAR_15 = VAR_4;
    else {
        FUNC_1(VAR_7, VAR_9);
        FUNC_0(2, "name=", VAR_16);
        return ((void*)0);
    }

    return FUNC_2(VAR_10, VAR_11, VAR_12, VAR_15, VAR_17, VAR_14);

}
