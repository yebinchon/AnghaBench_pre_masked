
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int dictid_str ;
struct TYPE_4__ {int encoding; } ;
struct TYPE_3__ {void* maxstring; void* minstring; void** bulkhdr; void** mbulkhdr; TYPE_2__** integers; void* zpopmax; void* zpopmin; void* rpoplpush; void* lpush; void* lpop; void* rpop; void* unlink; void* del; void* punsubscribebulk; void* psubscribebulk; void* unsubscribebulk; void* subscribebulk; void* pmessagebulk; void* messagebulk; void** select; int ** emptyset; int ** emptymap; int ** nullarray; int ** null; void* plus; void* colon; void* space; void* busykeyerr; void* noreplicaserr; void* execaborterr; void* oomerr; void* noautherr; void* roslaveerr; void* bgsaveerr; void* masterdownerr; void* slowscripterr; void* loadingerr; void* noscripterr; void* outofrangeerr; void* sameobjecterr; void* syntaxerr; void* nokeyerr; void* wrongtypeerr; void* emptyscan; void* queued; void* pong; void* emptyarray; void* cone; void* czero; void* emptybulk; void* err; void* ok; void* crlf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ,void*) ;
 void* FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int,int) ;
 TYPE_2__* FUNC_3 (void*) ;
 void* FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 () ;
 void* FUNC_6 (char*) ;
 TYPE_1__ VAR_5 ;

void FUNC_7(void) {
    int VAR_6;

    VAR_5.crlf = FUNC_0(VAR_3,FUNC_6("\r\n"));
    VAR_5.ok = FUNC_0(VAR_3,FUNC_6("+OK\r\n"));
    VAR_5.err = FUNC_0(VAR_3,FUNC_6("-ERR\r\n"));
    VAR_5.emptybulk = FUNC_0(VAR_3,FUNC_6("$0\r\n\r\n"));
    VAR_5.czero = FUNC_0(VAR_3,FUNC_6(":0\r\n"));
    VAR_5.cone = FUNC_0(VAR_3,FUNC_6(":1\r\n"));
    VAR_5.emptyarray = FUNC_0(VAR_3,FUNC_6("*0\r\n"));
    VAR_5.pong = FUNC_0(VAR_3,FUNC_6("+PONG\r\n"));
    VAR_5.queued = FUNC_0(VAR_3,FUNC_6("+QUEUED\r\n"));
    VAR_5.emptyscan = FUNC_0(VAR_3,FUNC_6("*2\r\n$1\r\n0\r\n*0\r\n"));
    VAR_5.wrongtypeerr = FUNC_0(VAR_3,FUNC_6(
        "-WRONGTYPE Operation against a key holding the wrong kind of value\r\n"));
    VAR_5.nokeyerr = FUNC_0(VAR_3,FUNC_6(
        "-ERR no such key\r\n"));
    VAR_5.syntaxerr = FUNC_0(VAR_3,FUNC_6(
        "-ERR syntax error\r\n"));
    VAR_5.sameobjecterr = FUNC_0(VAR_3,FUNC_6(
        "-ERR source and destination objects are the same\r\n"));
    VAR_5.outofrangeerr = FUNC_0(VAR_3,FUNC_6(
        "-ERR index out of range\r\n"));
    VAR_5.noscripterr = FUNC_0(VAR_3,FUNC_6(
        "-NOSCRIPT No matching script. Please use EVAL.\r\n"));
    VAR_5.loadingerr = FUNC_0(VAR_3,FUNC_6(
        "-LOADING Redis is loading the dataset in memory\r\n"));
    VAR_5.slowscripterr = FUNC_0(VAR_3,FUNC_6(
        "-BUSY Redis is busy running a script. You can only call SCRIPT KILL or SHUTDOWN NOSAVE.\r\n"));
    VAR_5.masterdownerr = FUNC_0(VAR_3,FUNC_6(
        "-MASTERDOWN Link with MASTER is down and replica-serve-stale-data is set to 'no'.\r\n"));
    VAR_5.bgsaveerr = FUNC_0(VAR_3,FUNC_6(
        "-MISCONF Redis is configured to save RDB snapshots, but it is currently not able to persist on disk. Commands that may modify the data set are disabled, because this instance is configured to report errors during writes if RDB snapshotting fails (stop-writes-on-bgsave-error option). Please check the Redis logs for details about the RDB error.\r\n"));
    VAR_5.roslaveerr = FUNC_0(VAR_3,FUNC_6(
        "-READONLY You can't write against a read only replica.\r\n"));
    VAR_5.noautherr = FUNC_0(VAR_3,FUNC_6(
        "-NOAUTH Authentication required.\r\n"));
    VAR_5.oomerr = FUNC_0(VAR_3,FUNC_6(
        "-OOM command not allowed when used memory > 'maxmemory'.\r\n"));
    VAR_5.execaborterr = FUNC_0(VAR_3,FUNC_6(
        "-EXECABORT Transaction discarded because of previous errors.\r\n"));
    VAR_5.noreplicaserr = FUNC_0(VAR_3,FUNC_6(
        "-NOREPLICAS Not enough good replicas to write.\r\n"));
    VAR_5.busykeyerr = FUNC_0(VAR_3,FUNC_6(
        "-BUSYKEY Target key name already exists.\r\n"));
    VAR_5.space = FUNC_0(VAR_3,FUNC_6(" "));
    VAR_5.colon = FUNC_0(VAR_3,FUNC_6(":"));
    VAR_5.plus = FUNC_0(VAR_3,FUNC_6("+"));


    VAR_5.null[0] = ((void*)0);
    VAR_5.null[1] = ((void*)0);
    VAR_5.null[2] = FUNC_0(VAR_3,FUNC_6("$-1\r\n"));
    VAR_5.null[3] = FUNC_0(VAR_3,FUNC_6("_\r\n"));

    VAR_5.nullarray[0] = ((void*)0);
    VAR_5.nullarray[1] = ((void*)0);
    VAR_5.nullarray[2] = FUNC_0(VAR_3,FUNC_6("*-1\r\n"));
    VAR_5.nullarray[3] = FUNC_0(VAR_3,FUNC_6("_\r\n"));

    VAR_5.emptymap[0] = ((void*)0);
    VAR_5.emptymap[1] = ((void*)0);
    VAR_5.emptymap[2] = FUNC_0(VAR_3,FUNC_6("*0\r\n"));
    VAR_5.emptymap[3] = FUNC_0(VAR_3,FUNC_6("%0\r\n"));

    VAR_5.emptyset[0] = ((void*)0);
    VAR_5.emptyset[1] = ((void*)0);
    VAR_5.emptyset[2] = FUNC_0(VAR_3,FUNC_6("*0\r\n"));
    VAR_5.emptyset[3] = FUNC_0(VAR_3,FUNC_6("~0\r\n"));

    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        char VAR_7[64];
        int VAR_8;

        VAR_8 = FUNC_2(VAR_7,sizeof(VAR_7),VAR_6);
        VAR_5.select[VAR_6] = FUNC_0(VAR_3,
            FUNC_4(FUNC_5(),
                "*2\r\n$6\r\nSELECT\r\n$%d\r\n%s\r\n",
                VAR_8, VAR_7));
    }
    VAR_5.messagebulk = FUNC_1("$7\r\nmessage\r\n",13);
    VAR_5.pmessagebulk = FUNC_1("$8\r\npmessage\r\n",14);
    VAR_5.subscribebulk = FUNC_1("$9\r\nsubscribe\r\n",15);
    VAR_5.unsubscribebulk = FUNC_1("$11\r\nunsubscribe\r\n",18);
    VAR_5.psubscribebulk = FUNC_1("$10\r\npsubscribe\r\n",17);
    VAR_5.punsubscribebulk = FUNC_1("$12\r\npunsubscribe\r\n",19);
    VAR_5.del = FUNC_1("DEL",3);
    VAR_5.unlink = FUNC_1("UNLINK",6);
    VAR_5.rpop = FUNC_1("RPOP",4);
    VAR_5.lpop = FUNC_1("LPOP",4);
    VAR_5.lpush = FUNC_1("LPUSH",5);
    VAR_5.rpoplpush = FUNC_1("RPOPLPUSH",9);
    VAR_5.zpopmin = FUNC_1("ZPOPMIN",7);
    VAR_5.zpopmax = FUNC_1("ZPOPMAX",7);
    for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
        VAR_5.integers[VAR_6] =
            FUNC_3(FUNC_0(VAR_3,(void*)(long)VAR_6));
        VAR_5.integers[VAR_6]->encoding = VAR_0;
    }
    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
        VAR_5.mbulkhdr[VAR_6] = FUNC_0(VAR_3,
            FUNC_4(FUNC_5(),"*%d\r\n",VAR_6));
        VAR_5.bulkhdr[VAR_6] = FUNC_0(VAR_3,
            FUNC_4(FUNC_5(),"$%d\r\n",VAR_6));
    }




    VAR_5.minstring = FUNC_6("minstring");
    VAR_5.maxstring = FUNC_6("maxstring");
}
