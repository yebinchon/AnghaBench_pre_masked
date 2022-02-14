
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_19__ {int * lpVtbl; } ;
struct TYPE_18__ {int * lpVtbl; } ;
struct TYPE_17__ {int * lpVtbl; } ;
struct TYPE_16__ {int * lpVtbl; } ;
struct TYPE_15__ {int * lpVtbl; } ;
struct TYPE_14__ {int * lpVtbl; } ;
struct TYPE_13__ {int * lpVtbl; } ;
struct TYPE_20__ {int ref; int last_cache_id; int clsid; int * running_object; void* dirty; int cache_list; int * presentationStorage; void* clsid_static; scalar_t__ sinkInterface; scalar_t__ sinkAdviseFlag; scalar_t__ sinkAspects; TYPE_7__ IUnknown_inner; TYPE_7__* outer_unk; TYPE_6__ IAdviseSink_iface; TYPE_5__ IOleCacheControl_iface; TYPE_4__ IOleCache2_iface; TYPE_3__ IViewObject2_iface; TYPE_2__ IPersistStorage_iface; TYPE_1__ IDataObject_iface; } ;
typedef int * REFCLSID ;
typedef TYPE_7__* LPUNKNOWN ;
typedef TYPE_8__ DataCache ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 () ;
 TYPE_8__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_8__*,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static DataCache* FUNC_4(
  REFCLSID VAR_9,
  LPUNKNOWN VAR_10)
{
  DataCache* VAR_11 = 0;




  VAR_11 = FUNC_1(FUNC_0(), 0, sizeof(DataCache));

  if (VAR_11==0)
    return VAR_11;




  VAR_11->IDataObject_iface.lpVtbl = &VAR_2;
  VAR_11->IUnknown_inner.lpVtbl = &VAR_7;
  VAR_11->IPersistStorage_iface.lpVtbl = &VAR_5;
  VAR_11->IViewObject2_iface.lpVtbl = &VAR_6;
  VAR_11->IOleCache2_iface.lpVtbl = &VAR_3;
  VAR_11->IOleCacheControl_iface.lpVtbl = &VAR_4;
  VAR_11->IAdviseSink_iface.lpVtbl = &VAR_1;
  VAR_11->outer_unk = VAR_10 ? VAR_10 : &VAR_11->IUnknown_inner;
  VAR_11->ref = 1;




  VAR_11->sinkAspects = 0;
  VAR_11->sinkAdviseFlag = 0;
  VAR_11->sinkInterface = 0;
  VAR_11->clsid = VAR_0;
  VAR_11->clsid_static = VAR_8;
  VAR_11->presentationStorage = ((void*)0);
  FUNC_3(&VAR_11->cache_list);
  VAR_11->last_cache_id = 2;
  VAR_11->dirty = VAR_8;
  VAR_11->running_object = ((void*)0);

  FUNC_2( VAR_11, VAR_9 );
  VAR_11->clsid = *VAR_9;

  return VAR_11;
}
