
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int rawSeq ;
struct TYPE_8__ {size_t size; size_t capacity; scalar_t__ pos; int * seq; } ;
struct TYPE_6__ {scalar_t__ enableLdm; } ;
struct TYPE_7__ {TYPE_1__ ldmParams; } ;
struct TYPE_9__ {scalar_t__ stage; TYPE_3__ externSeqStore; TYPE_2__ appliedParams; } ;
typedef TYPE_4__ ZSTD_CCtx ;


 size_t FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

size_t FUNC_1(ZSTD_CCtx* VAR_3, rawSeq* VAR_4, size_t VAR_5)
{
    if (VAR_3->stage != VAR_0)
        return FUNC_0(VAR_2);
    if (VAR_3->appliedParams.ldmParams.enableLdm)
        return FUNC_0(VAR_1);
    VAR_3->externSeqStore.seq = VAR_4;
    VAR_3->externSeqStore.size = VAR_5;
    VAR_3->externSeqStore.capacity = VAR_5;
    VAR_3->externSeqStore.pos = 0;
    return 0;
}
