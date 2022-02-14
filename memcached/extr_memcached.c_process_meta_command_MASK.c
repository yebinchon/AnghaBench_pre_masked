
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {size_t length; char* value; } ;
typedef TYPE_3__ token_t ;
struct TYPE_20__ {int nkey; scalar_t__ exptime; int time; int it_flags; } ;
typedef TYPE_4__ item ;
struct TYPE_21__ {char* wbuf; size_t wbytes; char* wcurr; TYPE_2__* thread; int write_and_go; scalar_t__ wsize; } ;
typedef TYPE_5__ conn ;
struct TYPE_17__ {int mutex; int meta_cmds; } ;
struct TYPE_18__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 char* FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_5__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (TYPE_4__*) ;
 TYPE_4__* FUNC_7 (char*,size_t,TYPE_5__*,int ,int,int ) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (TYPE_5__*,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 size_t FUNC_12 (char*,scalar_t__,char*,int,unsigned long long,unsigned long long,char*,int ,unsigned long) ;

__attribute__((used)) static void FUNC_13(conn *VAR_7, token_t *VAR_8, const size_t VAR_9) {
    FUNC_4(VAR_7 != ((void*)0));

    if (VAR_8[VAR_3].length > VAR_2) {
        FUNC_9(VAR_7, "CLIENT_ERROR bad command line format");
        return;
    }

    char *VAR_10 = VAR_8[VAR_3].value;
    size_t VAR_11 = VAR_8[VAR_3].length;

    item *VAR_12 = FUNC_7(VAR_10, VAR_11, VAR_7, 0, 0, VAR_0);
    if (VAR_12) {
        size_t VAR_13 = 0;
        size_t VAR_14;

        FUNC_8(VAR_7->wbuf, "ME ", 3);
        VAR_13 += 3;
        FUNC_8(VAR_7->wbuf + VAR_13, FUNC_2(VAR_12), VAR_12->nkey);
        VAR_13 += VAR_12->nkey;
        VAR_7->wbuf[VAR_13] = ' ';
        VAR_13++;

        VAR_14 = FUNC_12(VAR_7->wbuf + VAR_13, VAR_7->wsize - (VAR_12->nkey + 12),
                "exp=%d la=%llu cas=%llu fetch=%s cls=%u size=%lu\r\nEN\r\n",
                (VAR_12->exptime == 0) ? -1 : (VAR_6 - VAR_12->exptime),
                (unsigned long long)(VAR_6 - VAR_12->time),
                (unsigned long long)FUNC_1(VAR_12),
                (VAR_12->it_flags & VAR_1) ? "yes" : "no",
                FUNC_0(VAR_12),
                (unsigned long) FUNC_3(VAR_12));

        FUNC_6(VAR_12);
        VAR_7->wbytes = VAR_13 + VAR_14;
        VAR_7->wcurr = VAR_7->wbuf;
        FUNC_5(VAR_7, VAR_5);
        VAR_7->write_and_go = VAR_4;
    } else {
        FUNC_9(VAR_7, "EN");
    }
    FUNC_10(&VAR_7->thread->stats.mutex);
    VAR_7->thread->stats.meta_cmds++;
    FUNC_11(&VAR_7->thread->stats.mutex);
}
