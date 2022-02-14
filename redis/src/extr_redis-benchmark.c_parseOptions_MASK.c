
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int datasize; int pipeline; int randomkeys; scalar_t__ randomkeys_keyspacelen; int quiet; int csv; int loop; int idlemode; int showerrors; scalar_t__ precision; scalar_t__ num_threads; int cluster_mode; int enable_tracking; void* dbnum; int dbnumstr; void* tests; void* auth; void* hostsocket; void* hostport; void* hostip; void* keepalive; void* requests; void* numclients; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (char const*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 void* FUNC_3 (void*,char*) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (char*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (char const*,char*) ;
 void* FUNC_8 (char const*) ;

int FUNC_9(int VAR_3, const char **VAR_4) {
    int VAR_5;
    int VAR_6;
    int VAR_7 = 1;

    for (VAR_5 = 1; VAR_5 < VAR_3; VAR_5++) {
        VAR_6 = (VAR_5 == (VAR_3-1));

        if (!FUNC_7(VAR_4[VAR_5],"-c")) {
            if (VAR_6) goto invalid;
            VAR_2.numclients = FUNC_0(VAR_4[++VAR_5]);
        } else if (!FUNC_7(VAR_4[VAR_5],"-n")) {
            if (VAR_6) goto invalid;
            VAR_2.requests = FUNC_0(VAR_4[++VAR_5]);
        } else if (!FUNC_7(VAR_4[VAR_5],"-k")) {
            if (VAR_6) goto invalid;
            VAR_2.keepalive = FUNC_0(VAR_4[++VAR_5]);
        } else if (!FUNC_7(VAR_4[VAR_5],"-h")) {
            if (VAR_6) goto invalid;
            VAR_2.hostip = FUNC_8(VAR_4[++VAR_5]);
        } else if (!FUNC_7(VAR_4[VAR_5],"-p")) {
            if (VAR_6) goto invalid;
            VAR_2.hostport = FUNC_0(VAR_4[++VAR_5]);
        } else if (!FUNC_7(VAR_4[VAR_5],"-s")) {
            if (VAR_6) goto invalid;
            VAR_2.hostsocket = FUNC_8(VAR_4[++VAR_5]);
        } else if (!FUNC_7(VAR_4[VAR_5],"-a") ) {
            if (VAR_6) goto invalid;
            VAR_2.auth = FUNC_8(VAR_4[++VAR_5]);
        } else if (!FUNC_7(VAR_4[VAR_5],"-d")) {
            if (VAR_6) goto invalid;
            VAR_2.datasize = FUNC_0(VAR_4[++VAR_5]);
            if (VAR_2.datasize < 1) VAR_2.datasize=1;
            if (VAR_2.datasize > 1024*1024*1024) VAR_2.datasize = 1024*1024*1024;
        } else if (!FUNC_7(VAR_4[VAR_5],"-P")) {
            if (VAR_6) goto invalid;
            VAR_2.pipeline = FUNC_0(VAR_4[++VAR_5]);
            if (VAR_2.pipeline <= 0) VAR_2.pipeline=1;
        } else if (!FUNC_7(VAR_4[VAR_5],"-r")) {
            if (VAR_6) goto invalid;
            const char *VAR_8 = VAR_4[++VAR_5], *VAR_9 = VAR_8;
            if (*VAR_9 == '-') {
                VAR_9++;
                if (*VAR_9 < '0' || *VAR_9 > '9') goto invalid;
            }
            VAR_2.randomkeys = 1;
            VAR_2.randomkeys_keyspacelen = FUNC_0(VAR_8);
            if (VAR_2.randomkeys_keyspacelen < 0)
                VAR_2.randomkeys_keyspacelen = 0;
        } else if (!FUNC_7(VAR_4[VAR_5],"-q")) {
            VAR_2.quiet = 1;
        } else if (!FUNC_7(VAR_4[VAR_5],"--csv")) {
            VAR_2.csv = 1;
        } else if (!FUNC_7(VAR_4[VAR_5],"-l")) {
            VAR_2.loop = 1;
        } else if (!FUNC_7(VAR_4[VAR_5],"-I")) {
            VAR_2.idlemode = 1;
        } else if (!FUNC_7(VAR_4[VAR_5],"-e")) {
            VAR_2.showerrors = 1;
        } else if (!FUNC_7(VAR_4[VAR_5],"-t")) {
            if (VAR_6) goto invalid;





            VAR_2.tests = FUNC_5(",");
            VAR_2.tests = FUNC_3(VAR_2.tests,(char*)VAR_4[++VAR_5]);
            VAR_2.tests = FUNC_3(VAR_2.tests,",");
            FUNC_6(VAR_2.tests);
        } else if (!FUNC_7(VAR_4[VAR_5],"--dbnum")) {
            if (VAR_6) goto invalid;
            VAR_2.dbnum = FUNC_0(VAR_4[++VAR_5]);
            VAR_2.dbnumstr = FUNC_4(VAR_2.dbnum);
        } else if (!FUNC_7(VAR_4[VAR_5],"--precision")) {
            if (VAR_6) goto invalid;
            VAR_2.precision = FUNC_0(VAR_4[++VAR_5]);
            if (VAR_2.precision < 0) VAR_2.precision = 0;
            if (VAR_2.precision > VAR_0) VAR_2.precision = VAR_0;
        } else if (!FUNC_7(VAR_4[VAR_5],"--threads")) {
             if (VAR_6) goto invalid;
             VAR_2.num_threads = FUNC_0(VAR_4[++VAR_5]);
             if (VAR_2.num_threads > VAR_1) {
                FUNC_2("WARNING: too many threads, limiting threads to %d.\n",
                       VAR_1);
                VAR_2.num_threads = VAR_1;
             } else if (VAR_2.num_threads < 0) VAR_2.num_threads = 0;
        } else if (!FUNC_7(VAR_4[VAR_5],"--cluster")) {
            VAR_2.cluster_mode = 1;
        } else if (!FUNC_7(VAR_4[VAR_5],"--enable-tracking")) {
            VAR_2.enable_tracking = 1;
        } else if (!FUNC_7(VAR_4[VAR_5],"--help")) {
            VAR_7 = 0;
            goto usage;
        } else {



            if (VAR_4[VAR_5][0] == '-') goto invalid;
            return VAR_5;
        }
    }

    return VAR_5;

invalid:
    FUNC_2("Invalid option \"%s\" or option argument missing\n\n",VAR_4[VAR_5]);

usage:
    FUNC_2(
"Usage: redis-benchmark [-h <host>] [-p <port>] [-c <clients>] [-n <requests>] [-k <boolean>]\n\n"
" -h <hostname>      Server hostname (default 127.0.0.1)\n"
" -p <port>          Server port (default 6379)\n"
" -s <socket>        Server socket (overrides host and port)\n"
" -a <password>      Password for Redis Auth\n"
" -c <clients>       Number of parallel connections (default 50)\n"
" -n <requests>      Total number of requests (default 100000)\n"
" -d <size>          Data size of SET/GET value in bytes (default 3)\n"
" --dbnum <db>       SELECT the specified db number (default 0)\n"
" --threads <num>    Enable multi-thread mode.\n"
" --cluster          Enable cluster mode.\n"
" --enable-tracking  Send CLIENT TRACKING on before starting benchmark.\n"
" -k <boolean>       1=keep alive 0=reconnect (default 1)\n"
" -r <keyspacelen>   Use random keys for SET/GET/INCR, random values for SADD\n"
"  Using this option the benchmark will expand the string __rand_int__\n"
"  inside an argument with a 12 digits number in the specified range\n"
"  from 0 to keyspacelen-1. The substitution changes every time a command\n"
"  is executed. Default tests use this to hit random keys in the\n"
"  specified range.\n"
" -P <numreq>        Pipeline <numreq> requests. Default 1 (no pipeline).\n"
" -e                 If server replies with errors, show them on stdout.\n"
"                    (no more than 1 error per second is displayed)\n"
" -q                 Quiet. Just show query/sec values\n"
" --precision        Number of decimal places to display in latency output (default 0)\n"
" --csv              Output in CSV format\n"
" -l                 Loop. Run the tests forever\n"
" -t <tests>         Only run the comma separated list of tests. The test\n"
"                    names are the same as the ones produced as output.\n"
" -I                 Idle mode. Just open N idle connections and wait.\n\n"
"Examples:\n\n"
" Run the benchmark with the default configuration against 127.0.0.1:6379:\n"
"   $ redis-benchmark\n\n"
" Use 20 parallel clients, for a total of 100k requests, against 192.168.1.1:\n"
"   $ redis-benchmark -h 192.168.1.1 -p 6379 -n 100000 -c 20\n\n"
" Fill 127.0.0.1:6379 with about 1 million keys only using the SET test:\n"
"   $ redis-benchmark -t set -n 1000000 -r 100000000\n\n"
" Benchmark 127.0.0.1:6379 for a few commands producing CSV output:\n"
"   $ redis-benchmark -t ping,set,get -n 100000 --csv\n\n"
" Benchmark a specific command line:\n"
"   $ redis-benchmark -r 10000 -n 10000 eval 'return redis.call(\"ping\")' 0\n\n"
" Fill a list with 10000 random elements:\n"
"   $ redis-benchmark -r 10000 -n 10000 lpush mylist __rand_int__\n\n"
" On user specified command lines __rand_int__ is replaced with a random integer\n"
" with a range of values selected by the -r option.\n"
    );
    FUNC_1(VAR_7);
}
