
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Masscan {int is_capture_cert; int is_capture_html; int is_capture_heartbleed; int is_capture_ticketbleed; scalar_t__ echo; scalar_t__ echo_all; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char const*) ;
 int FUNC_1 (scalar_t__,char*,char const*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_2(struct Masscan *VAR_3, const char *VAR_4, const char *VAR_5)
{
    if (VAR_3->echo) {
        if (!VAR_3->is_capture_cert || VAR_3->echo_all)
            FUNC_1(VAR_3->echo, "%scapture = cert\n", VAR_3->is_capture_cert?"":"no");
        if (VAR_3->is_capture_html || VAR_3->echo_all)
            FUNC_1(VAR_3->echo, "%scapture = html\n", VAR_3->is_capture_html?"":"no");
        if (VAR_3->is_capture_heartbleed || VAR_3->echo_all)
            FUNC_1(VAR_3->echo, "%scapture = heartbleed\n", VAR_3->is_capture_heartbleed?"":"no");
        if (VAR_3->is_capture_ticketbleed || VAR_3->echo_all)
            FUNC_1(VAR_3->echo, "%scapture = ticketbleed\n", VAR_3->is_capture_ticketbleed?"":"no");
        return 0;
    }
    if (FUNC_0("capture", VAR_4)) {
        if (FUNC_0("cert", VAR_5))
            VAR_3->is_capture_cert = 1;
        else if (FUNC_0("html", VAR_5))
            VAR_3->is_capture_html = 1;
        else if (FUNC_0("heartbleed", VAR_5))
            VAR_3->is_capture_heartbleed = 1;
        else if (FUNC_0("ticketbleed", VAR_5))
            VAR_3->is_capture_ticketbleed = 1;
        else {
            FUNC_1(VAR_2, "FAIL: %s: unknown capture type\n", VAR_5);
            return VAR_0;
        }
    } else if (FUNC_0("nocapture", VAR_4)) {
        if (FUNC_0("cert", VAR_5))
            VAR_3->is_capture_cert = 0;
        else if (FUNC_0("html", VAR_5))
            VAR_3->is_capture_html = 0;
        else if (FUNC_0("heartbleed", VAR_5))
            VAR_3->is_capture_heartbleed = 0;
        else if (FUNC_0("ticketbleed", VAR_5))
            VAR_3->is_capture_ticketbleed = 0;
        else {
            FUNC_1(VAR_2, "FAIL: %s: unknown nocapture type\n", VAR_5);
            return VAR_0;
        }
    }
    return VAR_1;
}
