
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_21__ {int data; } ;
struct TYPE_20__ {int data; } ;
struct TYPE_19__ {int data; } ;
struct TYPE_18__ {int data; } ;
struct TYPE_17__ {int data; } ;
struct TYPE_31__ {int data; } ;
struct TYPE_30__ {int data; } ;
struct TYPE_29__ {int data; } ;
struct TYPE_28__ {int data; } ;
struct TYPE_27__ {int data; } ;
struct TYPE_26__ {int data; } ;
struct TYPE_25__ {int data; } ;
struct TYPE_24__ {int data; } ;
struct TYPE_23__ {int data; } ;
struct TYPE_22__ {TYPE_14__ aux_seg; TYPE_13__ cdguids_seg; TYPE_12__ custdata_seg; TYPE_11__ arraydesc_seg; TYPE_10__ typdesc_seg; TYPE_9__ string_seg; TYPE_8__ name_seg; TYPE_7__ namehash_seg; TYPE_6__ impfile_seg; TYPE_5__ impinfo_seg; TYPE_4__ ref_seg; TYPE_3__ guid_seg; TYPE_2__ guidhash_seg; TYPE_1__ typeinfo_seg; } ;
typedef TYPE_15__ WMSFT_TLBFile ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(WMSFT_TLBFile *VAR_0)
{
    FUNC_1(FUNC_0(), 0, VAR_0->typeinfo_seg.data);
    FUNC_1(FUNC_0(), 0, VAR_0->guidhash_seg.data);
    FUNC_1(FUNC_0(), 0, VAR_0->guid_seg.data);
    FUNC_1(FUNC_0(), 0, VAR_0->ref_seg.data);
    FUNC_1(FUNC_0(), 0, VAR_0->impinfo_seg.data);
    FUNC_1(FUNC_0(), 0, VAR_0->impfile_seg.data);
    FUNC_1(FUNC_0(), 0, VAR_0->namehash_seg.data);
    FUNC_1(FUNC_0(), 0, VAR_0->name_seg.data);
    FUNC_1(FUNC_0(), 0, VAR_0->string_seg.data);
    FUNC_1(FUNC_0(), 0, VAR_0->typdesc_seg.data);
    FUNC_1(FUNC_0(), 0, VAR_0->arraydesc_seg.data);
    FUNC_1(FUNC_0(), 0, VAR_0->custdata_seg.data);
    FUNC_1(FUNC_0(), 0, VAR_0->cdguids_seg.data);
    FUNC_1(FUNC_0(), 0, VAR_0->aux_seg.data);
}
