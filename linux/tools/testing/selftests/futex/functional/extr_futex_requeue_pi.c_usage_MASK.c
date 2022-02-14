
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;

void FUNC_1(char *VAR_3)
{
 FUNC_0("Usage: %s\n", VAR_3);
 FUNC_0("  -b	Broadcast wakeup (all waiters)\n");
 FUNC_0("  -c	Use color\n");
 FUNC_0("  -h	Display this help message\n");
 FUNC_0("  -l	Lock the pi futex across requeue\n");
 FUNC_0("  -o	Use a third party pi futex owner during requeue (cancels -l)\n");
 FUNC_0("  -t N	Timeout in nanoseconds (default: 0)\n");
 FUNC_0("  -v L	Verbosity level: %d=QUIET %d=CRITICAL %d=INFO\n",
        VAR_2, VAR_0, VAR_1);
}
