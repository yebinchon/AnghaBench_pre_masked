
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct Range {scalar_t__ begin; scalar_t__ end; } ;
struct TYPE_7__ {unsigned int count; struct Range* list; } ;
struct TYPE_6__ {unsigned int count; struct Range* list; } ;
struct Masscan {unsigned int echo_all; unsigned int nic_count; int http_user_agent; char* http_user_agent_length; TYPE_1__* http_headers; TYPE_3__ targets; TYPE_2__ ports; int * echo; } ;
struct TYPE_8__ {int (* set ) (struct Masscan*,int ,int ) ;scalar_t__ name; } ;
struct TYPE_5__ {char* header_name; char* header_value_length; int header_value; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__* VAR_5 ;
 unsigned int FUNC_0 (struct Range) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct Masscan*,int *,unsigned int) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (struct Masscan*,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct Masscan *VAR_6, FILE *VAR_7, unsigned VAR_8)
{
    unsigned VAR_9;
    unsigned VAR_10 = 0;





    VAR_6->echo = VAR_7;
    VAR_6->echo_all = VAR_8;
    for (VAR_9=0; VAR_5[VAR_9].name; VAR_9++) {
        VAR_5[VAR_9].set(VAR_6, 0, 0);
    }
    VAR_6->echo = 0;
    VAR_6->echo_all = 0;






    if (VAR_6->nic_count == 0)
        FUNC_2(VAR_6, VAR_7, 0);
    else {
        for (VAR_9=0; VAR_9<VAR_6->nic_count; VAR_9++)
            FUNC_2(VAR_6, VAR_7, VAR_9);
    }





    FUNC_1(VAR_7, "# TARGET SELECTION (IP, PORTS, EXCLUDES)\n");
    FUNC_1(VAR_7, "ports = ");

    VAR_10 = 0;
    for (VAR_9=0; VAR_9<VAR_6->ports.count; VAR_9++) {
        struct Range VAR_11 = VAR_6->ports.list[VAR_9];
        do {
            struct Range VAR_12 = VAR_11;
            unsigned VAR_13 = 0;
            if (VAR_10)
                FUNC_1(VAR_7, ",");
            VAR_10 = 1;
            if (VAR_12.begin >= VAR_0) {
                VAR_12.begin -= VAR_0;
                VAR_12.end -= VAR_0;
                FUNC_1(VAR_7,"I:");
                VAR_13 = 1;
            } else if (VAR_12.begin >= VAR_3) {
                VAR_12.begin -= VAR_3;
                VAR_12.end -= VAR_3;
                FUNC_1(VAR_7,"S:");
                VAR_11.begin = VAR_0;
            } else if (VAR_12.begin >= VAR_4) {
                VAR_12.begin -= VAR_4;
                VAR_12.end -= VAR_4;
                FUNC_1(VAR_7,"U:");
                VAR_11.begin = VAR_3;
            } else if (VAR_1 <= VAR_12.begin && VAR_12.begin <= VAR_2) {
                VAR_12.begin -= VAR_1;
                VAR_12.end -= VAR_1;
                FUNC_1(VAR_7, "O:");
                VAR_11.begin = VAR_1;
            } else
                VAR_11.begin = VAR_4;
            VAR_12.end = FUNC_3(VAR_12.end, 65535);
            if (VAR_12.begin == VAR_12.end)
                FUNC_1(VAR_7, "%u", VAR_12.begin);
            else
                FUNC_1(VAR_7, "%u-%u", VAR_12.begin, VAR_12.end);
            if (VAR_13)
                break;
        } while (VAR_11.begin <= VAR_11.end);
    }
    FUNC_1(VAR_7, "\n");
    for (VAR_9=0; VAR_9<VAR_6->targets.count; VAR_9++) {
        struct Range VAR_14 = VAR_6->targets.list[VAR_9];
        FUNC_1(VAR_7, "range = ");
        FUNC_1(VAR_7, "%u.%u.%u.%u",
                (VAR_14.begin>>24)&0xFF,
                (VAR_14.begin>>16)&0xFF,
                (VAR_14.begin>> 8)&0xFF,
                (VAR_14.begin>> 0)&0xFF
                );
        if (VAR_14.begin != VAR_14.end) {
            unsigned VAR_15 = FUNC_0(VAR_14);

            if (VAR_15) {
                FUNC_1(VAR_7, "/%u", VAR_15);
            } else
                FUNC_1(VAR_7, "-%u.%u.%u.%u",
                        (VAR_14.end>>24)&0xFF,
                        (VAR_14.end>>16)&0xFF,
                        (VAR_14.end>> 8)&0xFF,
                        (VAR_14.end>> 0)&0xFF
                        );
        }
        FUNC_1(VAR_7, "\n");
    }

    FUNC_1(VAR_7, "\n");
    if (VAR_6->http_user_agent)
        FUNC_1( VAR_7,
                "http-user-agent = %.*s\n",
                VAR_6->http_user_agent_length,
                VAR_6->http_user_agent);

    for (VAR_9=0; VAR_9<sizeof(VAR_6->http_headers)/sizeof(VAR_6->http_headers[0]); VAR_9++) {
        if (VAR_6->http_headers[VAR_9].header_name == 0)
            continue;
        FUNC_1( VAR_7,
                "http-header[%s] = %.*s\n",
                VAR_6->http_headers[VAR_9].header_name,
                VAR_6->http_headers[VAR_9].header_value_length,
                VAR_6->http_headers[VAR_9].header_value);
    }





}
