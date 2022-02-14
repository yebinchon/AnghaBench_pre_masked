
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct timeval {int dummy; } ;
typedef int byte ;
typedef int adns_status ;
typedef TYPE_1__* adns_state ;
typedef TYPE_2__* adns_query ;
struct TYPE_12__ {int used; scalar_t__ buf; } ;
struct TYPE_11__ {int search_doneabs; scalar_t__ search_pos; int flags; int typei; TYPE_5__ search_vb; scalar_t__ query_dglen; scalar_t__ query_dgram; int search_origlen; } ;
struct TYPE_10__ {scalar_t__ nsearchlist; char** searchlist; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_5__*,int *,int) ;
 int FUNC_2 (TYPE_5__*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,char*,int ,int ,int ,struct timeval) ;

void FUNC_5(adns_state VAR_2, adns_query VAR_3, struct timeval VAR_4) {
  const char *VAR_5;
  adns_status VAR_6;

  if (VAR_3->search_doneabs<0) {
    VAR_5= 0;
    VAR_3->search_doneabs= 1;
  } else {
    if (VAR_3->search_pos >= VAR_2->nsearchlist) {
      if (VAR_3->search_doneabs) {
 VAR_6= VAR_1; goto x_fail;
 return;
      } else {
 VAR_5= 0;
 VAR_3->search_doneabs= 1;
      }
    } else {
      VAR_5= VAR_2->searchlist[VAR_3->search_pos++];
    }
  }

  VAR_3->search_vb.used= VAR_3->search_origlen;
  if (VAR_5) {
    if (!FUNC_1(&VAR_3->search_vb,(byte*)".",1) ||
 !FUNC_2(&VAR_3->search_vb,VAR_5)) {
      VAR_6= VAR_0; goto x_fail;
    }
  }

  FUNC_3(VAR_3->query_dgram);
  VAR_3->query_dgram= 0; VAR_3->query_dglen= 0;

  FUNC_4(VAR_2,VAR_3, (char*)VAR_3->search_vb.buf, VAR_3->search_vb.used, VAR_3->typei, VAR_3->flags, VAR_4);
  return;

x_fail:
  FUNC_0(VAR_3,VAR_6);
}
