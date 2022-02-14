
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_13__ {scalar_t__ exptime; scalar_t__ time; int it_flags; int nkey; } ;
typedef TYPE_2__ item ;
struct TYPE_12__ {int buf; int cbuf; } ;
struct TYPE_14__ {TYPE_1__ c; } ;
typedef TYPE_3__ crawler_module_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,int,char*,char*,int,unsigned long long,unsigned long long,char*,int ,unsigned long) ;
 int FUNC_8 (int ,char*,int ,int) ;

__attribute__((used)) static void FUNC_9(crawler_module_t *VAR_5, item *VAR_6, uint32_t VAR_7, int VAR_8) {

    char VAR_9[VAR_1];
    int VAR_10 = FUNC_5(VAR_6);

    if ((VAR_6->exptime != 0 && VAR_6->exptime < VAR_3)
        || VAR_10) {
        FUNC_6(VAR_6);
        return;
    }

    FUNC_8(FUNC_2(VAR_6), VAR_9, VAR_6->nkey, VAR_1);
    int VAR_11 = FUNC_7(VAR_5->c.cbuf, 4096,
            "key=%s exp=%ld la=%llu cas=%llu fetch=%s cls=%u size=%lu\n",
            VAR_9,
            (VAR_6->exptime == 0) ? -1 : (long)(VAR_6->exptime + VAR_4),
            (unsigned long long)(VAR_6->time + VAR_4),
            (unsigned long long)FUNC_1(VAR_6),
            (VAR_6->it_flags & VAR_0) ? "yes" : "no",
            FUNC_0(VAR_6),
            (unsigned long) FUNC_3(VAR_6));
    FUNC_6(VAR_6);

    if (VAR_11 >= VAR_2 - 1 || VAR_11 <= 0) {

        return;
    }
    FUNC_4(VAR_5->c.buf, VAR_11);
}
