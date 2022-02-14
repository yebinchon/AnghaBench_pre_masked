
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* name; int flags; char const** alts; } ;


 scalar_t__ FUNC_0 (char const*,char const*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int
FUNC_1(const char *VAR_2)
{
    static const char *VAR_3[] = {
        "echo", "echo-all", "selftest", "self-test", "regress",
        "benchmark",
        "system-dns", "traceroute", "version",
        "version-light",
        "version-all", "version-trace",
        "osscan-limit", "osscan-guess",
        "badsum", "reason", "open", "open-only",
        "packet-trace", "release-memory",
        "log-errors", "append-output", "webxml",
        "no-stylesheet", "heartbleed", "ticketbleed",
        "send-eth", "send-ip", "iflist",
        "nmap", "trace-packet", "pfring", "sendq",
        "offline", "ping", "ping-sweep", "nobacktrace", "backtrace",
        "infinite", "nointeractive", "interactive", "status", "nostatus",
        "read-range", "read-ranges", "readrange", "read-ranges",
        0};
    size_t VAR_4;

    for (VAR_4=0; VAR_3[VAR_4]; VAR_4++) {
        if (FUNC_0(VAR_3[VAR_4], VAR_2))
            return 1;
    }

    for (VAR_4=0; VAR_1[VAR_4].name; VAR_4++) {
        if (FUNC_0(VAR_1[VAR_4].name, VAR_2)) {
            return (VAR_1[VAR_4].flags & VAR_0) == VAR_0;
        } else {
            size_t VAR_5;
            for (VAR_5=0; VAR_1[VAR_4].alts[VAR_5]; VAR_5++) {
                if (FUNC_0(VAR_1[VAR_4].alts[VAR_5], VAR_2)) {
                    return (VAR_1[VAR_4].flags & VAR_0) == VAR_0;
                }
            }
        }
    }

    return 0;
}
