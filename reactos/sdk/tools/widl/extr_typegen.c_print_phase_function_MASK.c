
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; int type; } ;
typedef TYPE_1__ var_t ;
typedef enum remoting_phase { ____Placeholder_remoting_phase } remoting_phase ;
typedef int FILE ;






 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int,char*,...) ;

__attribute__((used)) static void FUNC_3(FILE *VAR_0, int VAR_1, const char *VAR_2,
                                 const char *VAR_3, enum remoting_phase VAR_4,
                                 const var_t *VAR_5, unsigned int VAR_6)
{
    const char *VAR_7;
    switch (VAR_4)
    {
    case 131:
        VAR_7 = "BufferSize";
        break;
    case 129:
        VAR_7 = "Marshall";
        break;
    case 128:
        VAR_7 = "Unmarshall";
        break;
    case 130:
        VAR_7 = "Free";
        break;
    default:
        FUNC_0(0);
        return;
    }

    FUNC_2(VAR_0, VAR_1, "Ndr%s%s(\n", VAR_2, VAR_7);
    VAR_1++;
    FUNC_2(VAR_0, VAR_1, "&__frame->_StubMsg,\n");
    FUNC_2(VAR_0, VAR_1, "%s%s%s%s%s,\n",
               (VAR_4 == 128) ? "(unsigned char **)" : "(unsigned char *)",
               (VAR_4 == 128 || FUNC_1(VAR_5->type)) ? "&" : "",
               VAR_3,
               (VAR_4 == 128 && FUNC_1(VAR_5->type)) ? "_p_" : "",
               VAR_5->name);
    FUNC_2(VAR_0, VAR_1, "(PFORMAT_STRING)&__MIDL_TypeFormatString.Format[%d]%s\n",
               VAR_6, (VAR_4 == 128) ? "," : ");");
    if (VAR_4 == 128)
        FUNC_2(VAR_0, VAR_1, "0);\n");
    VAR_1--;
}
