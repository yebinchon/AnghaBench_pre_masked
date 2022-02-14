
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int seconds; int nanoseconds; } ;
typedef TYPE_1__ BTRFS_TIME ;



__attribute__((used)) static __inline uint64_t FUNC_0(BTRFS_TIME* VAR_0) {
    return (VAR_0->seconds * 10000000) + (VAR_0->nanoseconds / 100) + 116444736000000000;
}
