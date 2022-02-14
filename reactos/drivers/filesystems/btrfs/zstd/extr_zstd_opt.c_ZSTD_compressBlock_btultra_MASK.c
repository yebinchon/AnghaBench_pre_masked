
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tmpRep ;
struct TYPE_11__ {scalar_t__ sequences; scalar_t__ sequencesStart; } ;
typedef TYPE_2__ seqStore_t ;
struct TYPE_13__ {scalar_t__ litLengthSum; } ;
struct TYPE_10__ {scalar_t__ dictLimit; scalar_t__ lowLimit; size_t base; } ;
struct TYPE_12__ {scalar_t__ nextToUpdate; scalar_t__ nextToUpdate3; TYPE_4__ opt; TYPE_1__ window; } ;
typedef TYPE_3__ ZSTD_matchState_t ;
typedef scalar_t__ U32 ;


 int FUNC_0 (int,char*,...) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (TYPE_3__*,TYPE_2__*,scalar_t__*,void const*,size_t,int,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,int) ;

size_t FUNC_6(
        ZSTD_matchState_t* VAR_3, seqStore_t* VAR_4, U32 VAR_5[VAR_1],
        const void* VAR_6, size_t VAR_7)
{
    FUNC_0(5, "ZSTD_compressBlock_btultra (srcSize=%zu)", VAR_7);
    return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, 2 , VAR_2);
}
