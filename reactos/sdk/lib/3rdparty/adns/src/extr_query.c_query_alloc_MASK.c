
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int rrsz; int type; } ;
typedef TYPE_3__ typeinfo ;
struct timeval {scalar_t__ tv_sec; } ;
typedef int adns_state ;
typedef int adns_queryflags ;
typedef TYPE_4__* adns_query ;
struct TYPE_11__ {int id; TYPE_2__* answer; int ctx; scalar_t__ expires; int timeout; scalar_t__ udpsent; scalar_t__ udpnextserver; scalar_t__ retries; int flags; scalar_t__ search_doneabs; scalar_t__ search_pos; scalar_t__ search_origlen; int search_vb; scalar_t__ cname_begin; scalar_t__ cname_dglen; scalar_t__ cname_dgram; int vb; scalar_t__ query_dglen; scalar_t__ query_dgram; TYPE_3__ const* typei; scalar_t__ final_allocspace; scalar_t__ preserved_allocd; scalar_t__ interim_allocd; int allocations; int siblings; int children; scalar_t__ parent; scalar_t__ next; scalar_t__ back; int state; int ads; } ;
struct TYPE_8__ {scalar_t__ untyped; } ;
struct TYPE_9__ {int expires; int rrsz; TYPE_1__ rrs; scalar_t__ nrrs; int type; scalar_t__ owner; scalar_t__ cname; int status; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_4__*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int *,int ,int) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static adns_query FUNC_7(adns_state VAR_3, const typeinfo *VAR_4,
         adns_queryflags VAR_5, struct timeval VAR_6) {

  adns_query VAR_7;

  VAR_7= FUNC_4(sizeof(*VAR_7)); if (!VAR_7) return 0;
  VAR_7->answer= FUNC_4(sizeof(*VAR_7->answer)); if (!VAR_7->answer) { FUNC_3(VAR_7); return 0; }

  VAR_7->ads= VAR_3;
  VAR_7->state= VAR_2;
  VAR_7->back= VAR_7->next= VAR_7->parent= 0;
  FUNC_1(VAR_7->children);
  FUNC_0(VAR_7->siblings);
  FUNC_1(VAR_7->allocations);
  VAR_7->interim_allocd= 0;
  VAR_7->preserved_allocd= 0;
  VAR_7->final_allocspace= 0;

  VAR_7->typei= VAR_4;
  VAR_7->query_dgram= 0;
  VAR_7->query_dglen= 0;
  FUNC_2(&VAR_7->vb);

  VAR_7->cname_dgram= 0;
  VAR_7->cname_dglen= VAR_7->cname_begin= 0;

  FUNC_2(&VAR_7->search_vb);
  VAR_7->search_origlen= VAR_7->search_pos= VAR_7->search_doneabs= 0;

  VAR_7->id= -2;
  VAR_7->flags= VAR_5;
  VAR_7->retries= 0;
  VAR_7->udpnextserver= 0;
  VAR_7->udpsent= 0;
  FUNC_6(&VAR_7->timeout);
  VAR_7->expires= VAR_6.tv_sec + VAR_0;

  FUNC_5(&VAR_7->ctx,0,sizeof(VAR_7->ctx));

  VAR_7->answer->status= VAR_1;
  VAR_7->answer->cname= VAR_7->answer->owner= 0;
  VAR_7->answer->type= VAR_4->type;
  VAR_7->answer->expires= -1;
  VAR_7->answer->nrrs= 0;
  VAR_7->answer->rrs.untyped= 0;
  VAR_7->answer->rrsz= VAR_4->rrsz;

  return VAR_7;
}
