
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

void FUNC_2()
{
 FUNC_1("usage: ./bench\n");
 FUNC_1("Options:\n");
 FUNC_1(" -l, --load=<long int>\t\tinitial load time in us\n");
 FUNC_1(" -s, --sleep=<long int>\t\tinitial sleep time in us\n");
 FUNC_1(" -x, --load-step=<long int>\ttime to be added to load time, in us\n");
 FUNC_1(" -y, --sleep-step=<long int>\ttime to be added to sleep time, in us\n");
 FUNC_1(" -c, --cpu=<cpu #>\t\t\tCPU Nr. to use, starting at 0\n");
 FUNC_1(" -p, --prio=<priority>\t\t\tscheduler priority, HIGH, LOW or DEFAULT\n");
 FUNC_1(" -g, --governor=<governor>\t\tcpufreq governor to test\n");
 FUNC_1(" -n, --cycles=<int>\t\t\tload/sleep cycles\n");
 FUNC_1(" -r, --rounds<int>\t\t\tload/sleep rounds\n");
 FUNC_1(" -f, --file=<configfile>\t\tconfig file to use\n");
 FUNC_1(" -o, --output=<dir>\t\t\toutput path. Filename will be OUTPUTPATH/benchmark_TIMESTAMP.log\n");
 FUNC_1(" -v, --verbose\t\t\t\tverbose output on/off\n");
 FUNC_1(" -h, --help\t\t\t\tPrint this help screen\n");
 FUNC_0(1);
}
