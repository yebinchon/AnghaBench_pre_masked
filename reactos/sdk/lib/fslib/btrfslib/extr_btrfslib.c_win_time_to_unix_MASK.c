
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONGLONG ;
struct TYPE_6__ {int seconds; int nanoseconds; } ;
struct TYPE_5__ {int QuadPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef TYPE_2__ BTRFS_TIME ;



__attribute__((used)) static __inline void FUNC_0(LARGE_INTEGER VAR_0, BTRFS_TIME* VAR_1) {
    ULONGLONG VAR_2 = VAR_0.QuadPart - 116444736000000000;

    VAR_1->seconds = VAR_2 / 10000000;
    VAR_1->nanoseconds = (VAR_2 % 10000000) * 100;
}
