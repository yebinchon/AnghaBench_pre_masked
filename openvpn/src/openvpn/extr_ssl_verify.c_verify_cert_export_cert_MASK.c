
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;
typedef int openvpn_x509_cert_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int,char*,...) ;
 char* FUNC_3 (char const*,char*,struct gc_arena*) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (int *,int *) ;

__attribute__((used)) static const char *
FUNC_6(openvpn_x509_cert_t *VAR_3, const char *VAR_4, struct gc_arena *VAR_5)
{
    FILE *VAR_6;
    const char *VAR_7 = "";


    if (!VAR_4
        || !(VAR_7 = FUNC_3(VAR_4, "pcf", VAR_5)))
    {
        FUNC_2(VAR_1, "Failed to create peer cert file");
        return ((void*)0);
    }


    VAR_6 = FUNC_1(VAR_7, "w+");
    if (!VAR_6)
    {
        FUNC_2(VAR_1|VAR_0, "Failed to open temporary file: %s",
            VAR_7);
        return ((void*)0);
    }

    if (VAR_2 != FUNC_5(VAR_6, VAR_3))
    {
        FUNC_2(VAR_1, "Error writing PEM file containing certificate");
        (void) FUNC_4(VAR_7);
        VAR_7 = ((void*)0);
    }

    FUNC_0(VAR_6);
    return VAR_7;
}
