
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_6__ {int fi_openflags; void* fi_offset; } ;
struct TYPE_5__ {int vip_path; } ;
struct vnode_fdinfowithpath {TYPE_2__ pfi; TYPE_1__ pvip; } ;
struct timezone {int dummy; } ;
struct stat {int st_size; int st_mode; } ;
typedef int ssize_t ;
typedef int pid_t ;
struct TYPE_7__ {int num; int size; void* mode; void* pos; int tv; scalar_t__* name; } ;
typedef TYPE_3__ fdinfo_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 char* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,int,int *) ;
 scalar_t__ VAR_18 ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int *,struct timezone*) ;
 scalar_t__ FUNC_7 (int,int ,int*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (scalar_t__*,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int) ;
 scalar_t__ FUNC_12 (int,int,int ,struct vnode_fdinfowithpath*,int ) ;
 int FUNC_13 (char*,scalar_t__*,int ) ;
 int FUNC_14 (char*,int ,char*,char*,int,int) ;
 int FUNC_15 (scalar_t__*,struct stat*) ;
 int FUNC_16 (char*,char*,int) ;
 int FUNC_17 (scalar_t__*,int ,int ) ;

signed char FUNC_18(pid_t VAR_19, int VAR_20, fdinfo_t *VAR_21)
{
struct stat VAR_22;

char VAR_23[VAR_6 + 1];
char VAR_24[VAR_5];
FILE *VAR_25;
int VAR_26;

struct timezone VAR_27;

VAR_21->num = VAR_20;
VAR_21->mode = VAR_11;







ssize_t VAR_28;
FUNC_14(VAR_23, VAR_6, "%s/%d/fd/%d", VAR_15, VAR_19, VAR_20);

VAR_28=FUNC_13(VAR_23, VAR_21->name, VAR_6);
if (VAR_28 != -1)
    VAR_21->name[VAR_28] = 0;
else {

    return 0;
}


if (FUNC_15(VAR_21->name, &VAR_22) == -1) {

    if (VAR_18)
        FUNC_8("stat (get_fdinfo)");
    return 0;
}

if (FUNC_0(VAR_22.st_mode)) {
    int VAR_29;

    VAR_29 = FUNC_9(VAR_21->name, VAR_8);

    if (VAR_29 < 0) {
        if (VAR_18)
            FUNC_8("open (get_fdinfo)");
        return 0;
    }
    if (FUNC_7(VAR_29, VAR_0, &VAR_21->size) < 0) {
        if (VAR_18)
            FUNC_8("ioctl (get_fdinfo)");
        FUNC_2(VAR_29);
        return 0;
    }

    FUNC_2(VAR_29);
} else {
    VAR_21->size = VAR_22.st_size;
}
VAR_26 = 0;
VAR_21->pos = 0;

FUNC_14(VAR_23, VAR_6, "%s/%d/fdinfo/%d", VAR_15, VAR_19, VAR_20);
VAR_25 = FUNC_5(VAR_23, "rt");
FUNC_6(&VAR_21->tv, &VAR_27);

if (!VAR_25) {
    if (VAR_18)
        FUNC_8("fopen (get_fdinfo)");
    return 0;
}

while (FUNC_4(VAR_24, VAR_5 - 1, VAR_25) != ((void*)0)) {
    if (!FUNC_16(VAR_24, "pos:", 4))
        VAR_21->pos = FUNC_1(VAR_24 + 5);
    if (!FUNC_16(VAR_24, "flags:", 6))
        VAR_26 = FUNC_1(VAR_24 + 7);
}

if ((VAR_26 & VAR_7) == VAR_8)
    VAR_21->mode = VAR_12;
if ((VAR_26 & VAR_7) == VAR_10)
    VAR_21->mode = VAR_14;
if ((VAR_26 & VAR_7) == VAR_9)
    VAR_21->mode = VAR_13;

FUNC_3(VAR_25);

return 1;
}
