
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int format; } ;
struct TYPE_3__ {int ip; int port; } ;
struct Masscan {TYPE_2__ output; TYPE_1__ redis; int echo_all; int * echo; } ;
typedef enum OutputFormat { ____Placeholder_OutputFormat } OutputFormat ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int *,char*,...) ;

__attribute__((used)) static int FUNC_4(struct Masscan *VAR_2, const char *VAR_3, const char *VAR_4)
{
    enum OutputFormat VAR_5 = 0;
    FUNC_2(VAR_3);
    if (VAR_2->echo) {
        FILE *VAR_6 = VAR_2->echo;
        switch (VAR_2->output.format) {
            case 137: if (VAR_2->echo_all) FUNC_3(VAR_6, "output-format = interactive\n"); break;
            case 135:FUNC_3(VAR_6, "output-format = interactive\n"); break;
            case 133: FUNC_3(VAR_6, "output-format = list\n"); break;
            case 129:FUNC_3(VAR_6, "output-format = unicornscan\n"); break;
            case 128: FUNC_3(VAR_6, "output-format = xml\n"); break;
            case 139: FUNC_3(VAR_6, "output-format = binary\n"); break;
            case 136: FUNC_3(VAR_6, "output-format = grepable\n"); break;
            case 134: FUNC_3(VAR_6, "output-format = json\n"); break;
            case 132: FUNC_3(VAR_6, "output-format = ndjson\n"); break;
            case 138: FUNC_3(VAR_6, "output-format = certs\n"); break;
            case 131: FUNC_3(VAR_6, "output-format = none\n"); break;
            case 130:
                FUNC_3(VAR_6, "output-format = redis\n");
                FUNC_3(VAR_6, "redis = %u.%u.%u.%u:%u\n",
                        (unsigned char)(VAR_2->redis.ip>>24),
                        (unsigned char)(VAR_2->redis.ip>>16),
                        (unsigned char)(VAR_2->redis.ip>> 8),
                        (unsigned char)(VAR_2->redis.ip>> 0),
                        VAR_2->redis.port);
                break;

            default:
                FUNC_3(VAR_6, "output-format = unknown(%u)\n", VAR_2->output.format);
                break;
        }
        return 0;
    }
    if (FUNC_0("unknown(0)", VAR_4)) VAR_5 = 135;
    else if (FUNC_0("interactive", VAR_4)) VAR_5 = 135;
    else if (FUNC_0("list", VAR_4)) VAR_5 = 133;
    else if (FUNC_0("unicornscan", VAR_4)) VAR_5 = 129;
    else if (FUNC_0("xml", VAR_4)) VAR_5 = 128;
    else if (FUNC_0("binary", VAR_4)) VAR_5 = 139;
    else if (FUNC_0("greppable", VAR_4)) VAR_5 = 136;
    else if (FUNC_0("grepable", VAR_4)) VAR_5 = 136;
    else if (FUNC_0("json", VAR_4)) VAR_5 = 134;
    else if (FUNC_0("ndjson", VAR_4)) VAR_5 = 132;
    else if (FUNC_0("certs", VAR_4)) VAR_5 = 138;
    else if (FUNC_0("none", VAR_4)) VAR_5 = 131;
    else if (FUNC_0("redis", VAR_4)) VAR_5 = 130;
    else {
        FUNC_1(0, "FAIL: unknown output-format: %s\n", VAR_4);
        FUNC_1(0, "  hint: 'binary', 'xml', 'grepable', ...\n");
        return VAR_0;
    }
    VAR_2->output.format = VAR_5;

    return VAR_1;
}
