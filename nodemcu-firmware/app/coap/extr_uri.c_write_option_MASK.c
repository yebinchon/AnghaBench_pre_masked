
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pkt_scr {int n; TYPE_4__* pkt; TYPE_3__* scratch; } ;
struct TYPE_8__ {size_t numopts; TYPE_2__* opts; } ;
struct TYPE_7__ {size_t len; int p; } ;
struct TYPE_5__ {int p; int len; } ;
struct TYPE_6__ {TYPE_1__ buf; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct pkt_scr*) ;
 int FUNC_2 (unsigned char*,size_t) ;
 int FUNC_3 (unsigned char*,size_t,int) ;
 scalar_t__ FUNC_4 (unsigned char*,char*,int ) ;
 int FUNC_5 (size_t,int) ;

void FUNC_6(unsigned char *VAR_0, size_t VAR_1, void *VAR_2) {
  struct pkt_scr *VAR_3 = (struct pkt_scr *)VAR_2;
  int VAR_4;
  FUNC_1(VAR_3);


  if (FUNC_4(VAR_0, "..", FUNC_5(VAR_1,2)) == 0)
    return;

  VAR_4 = FUNC_2(VAR_0, VAR_1);
  if (VAR_4 < 0){
    FUNC_0("not a valid segment\n");
    return;
  }

  if (VAR_3->scratch->len < (size_t)VAR_4) {
    FUNC_0("buffer too small for option\n");
    return;
  }

  FUNC_3(VAR_0, VAR_1, VAR_3->scratch->p);

  if (VAR_4 > 0) {
    VAR_3->pkt->opts[VAR_3->pkt->numopts].buf.p = VAR_3->scratch->p;
    VAR_3->pkt->opts[VAR_3->pkt->numopts].buf.len = VAR_4;
    VAR_3->scratch->p += VAR_4;
    VAR_3->scratch->len -= VAR_4;
    VAR_3->pkt->numopts++;
    VAR_3->n++;
  }
}
