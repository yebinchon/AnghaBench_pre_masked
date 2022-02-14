
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int st_mode; } ;
struct TYPE_5__ {TYPE_1__ inode_item; } ;
typedef TYPE_2__ fcb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

uint32_t FUNC_0(fcb* VAR_4, bool VAR_5) {
    uint32_t VAR_6;

    if (!VAR_4)
        return 0755;

    VAR_6 = VAR_4->inode_item.st_mode & ~VAR_0;
    VAR_6 &= ~VAR_3;
    VAR_6 &= ~VAR_2;

    if (!VAR_5)
        VAR_6 &= ~VAR_1;

    return VAR_6;
}
