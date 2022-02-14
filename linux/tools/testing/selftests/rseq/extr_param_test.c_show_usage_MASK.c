
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(int VAR_0, char **VAR_1)
{
 FUNC_0("Usage : %s <OPTIONS>\n",
  VAR_1[0]);
 FUNC_0("OPTIONS:\n");
 FUNC_0("	[-1 loops] Number of loops for delay injection 1\n");
 FUNC_0("	[-2 loops] Number of loops for delay injection 2\n");
 FUNC_0("	[-3 loops] Number of loops for delay injection 3\n");
 FUNC_0("	[-4 loops] Number of loops for delay injection 4\n");
 FUNC_0("	[-5 loops] Number of loops for delay injection 5\n");
 FUNC_0("	[-6 loops] Number of loops for delay injection 6\n");
 FUNC_0("	[-7 loops] Number of loops for delay injection 7 (-1 to enable -m)\n");
 FUNC_0("	[-8 loops] Number of loops for delay injection 8 (-1 to enable -m)\n");
 FUNC_0("	[-9 loops] Number of loops for delay injection 9 (-1 to enable -m)\n");
 FUNC_0("	[-m N] Yield/sleep/kill every modulo N (default 0: disabled) (>= 0)\n");
 FUNC_0("	[-y] Yield\n");
 FUNC_0("	[-k] Kill thread with signal\n");
 FUNC_0("	[-s S] S: =0: disabled (default), >0: sleep time (ms)\n");
 FUNC_0("	[-t N] Number of threads (default 200)\n");
 FUNC_0("	[-r N] Number of repetitions per thread (default 5000)\n");
 FUNC_0("	[-d] Disable rseq system call (no initialization)\n");
 FUNC_0("	[-D M] Disable rseq for each M threads\n");
 FUNC_0("	[-T test] Choose test: (s)pinlock, (l)ist, (b)uffer, (m)emcpy, (i)ncrement\n");
 FUNC_0("	[-M] Push into buffer and memcpy buffer with memory barriers.\n");
 FUNC_0("	[-v] Verbose output.\n");
 FUNC_0("	[-h] Show this help.\n");
 FUNC_0("\n");
}
