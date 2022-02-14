
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(char *VAR_1)
{
 FUNC_0("Usage: %s [options]\n", VAR_1);
 FUNC_0(" -f, --file\t\tOpen watchdog device file\n");
 FUNC_0("\t\t\tDefault is /dev/watchdog\n");
 FUNC_0(" -i, --info\t\tShow watchdog_info\n");
 FUNC_0(" -b, --bootstatus\tGet last boot status (Watchdog/POR)\n");
 FUNC_0(" -d, --disable\t\tTurn off the watchdog timer\n");
 FUNC_0(" -e, --enable\t\tTurn on the watchdog timer\n");
 FUNC_0(" -h, --help\t\tPrint the help message\n");
 FUNC_0(" -p, --pingrate=P\tSet ping rate to P seconds (default %d)\n",
        VAR_0);
 FUNC_0(" -t, --timeout=T\tSet timeout to T seconds\n");
 FUNC_0(" -T, --gettimeout\tGet the timeout\n");
 FUNC_0(" -n, --pretimeout=T\tSet the pretimeout to T seconds\n");
 FUNC_0(" -N, --getpretimeout\tGet the pretimeout\n");
 FUNC_0(" -L, --gettimeleft\tGet the time left until timer expires\n");
 FUNC_0("\n");
 FUNC_0("Parameters are parsed left-to-right in real-time.\n");
 FUNC_0("Example: %s -d -t 10 -p 5 -e\n", VAR_1);
 FUNC_0("Example: %s -t 12 -T -n 7 -N\n", VAR_1);
}
