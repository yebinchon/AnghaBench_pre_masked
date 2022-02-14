
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {TYPE_1__* chunk_item; } ;
typedef TYPE_2__ chunk ;
struct TYPE_4__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static __inline uint64_t FUNC_0(chunk* VAR_7) {
    if (VAR_7->chunk_item->type & VAR_1)
        return VAR_1;
    else if (VAR_7->chunk_item->type & VAR_2)
        return VAR_2;
    else if (VAR_7->chunk_item->type & VAR_0)
        return VAR_0;
    else if (VAR_7->chunk_item->type & VAR_3)
        return VAR_3;
    else if (VAR_7->chunk_item->type & VAR_4)
        return VAR_4;
    else if (VAR_7->chunk_item->type & VAR_5)
        return VAR_5;
    else
        return VAR_6;
}
