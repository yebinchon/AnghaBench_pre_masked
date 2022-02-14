
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,int,char*,...) ;

__attribute__((used)) static void FUNC_1(FILE *VAR_0, int VAR_1, const char *VAR_2)
{
    FUNC_0(VAR_0, VAR_1, "typedef struct _MIDL_%s_FORMAT_STRING\n", VAR_2);
    FUNC_0(VAR_0, VAR_1, "{\n");
    FUNC_0(VAR_0, VAR_1 + 1, "short Pad;\n");
    FUNC_0(VAR_0, VAR_1 + 1, "unsigned char Format[%s_FORMAT_STRING_SIZE];\n", VAR_2);
    FUNC_0(VAR_0, VAR_1, "} MIDL_%s_FORMAT_STRING;\n", VAR_2);
    FUNC_0(VAR_0, VAR_1, "\n");
}
