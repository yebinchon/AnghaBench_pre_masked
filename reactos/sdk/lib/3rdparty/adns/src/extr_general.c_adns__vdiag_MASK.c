
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vbuf ;
typedef int va_list ;
typedef TYPE_3__* adns_state ;
typedef TYPE_4__* adns_query ;
typedef int adns_initflags ;
struct TYPE_10__ {TYPE_1__* typei; int query_dglen; int query_dgram; int ads; } ;
struct TYPE_9__ {int iflags; int diagfile; TYPE_2__* servers; } ;
struct TYPE_8__ {int addr; } ;
struct TYPE_7__ {char* rrtname; char* fmtname; } ;


 int VAR_0 ;
 char* FUNC_0 (int ,int,int ,int *,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,char const*,...) ;
 int FUNC_4 (char const*,int ) ;
 scalar_t__ FUNC_5 () ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int ,char const*,int ) ;

void FUNC_8(adns_state VAR_3, const char *VAR_4, adns_initflags VAR_5,
   int VAR_6, adns_query VAR_7, const char *VAR_8, va_list VAR_9) {
  const char *VAR_10, *VAR_11;
  vbuf VAR_12;

  if (!VAR_3->diagfile ||
      (!(VAR_3->iflags & VAR_1) && (!VAR_5 || (VAR_3->iflags & VAR_5))))
    return;

  if (VAR_3->iflags & VAR_2) {
    FUNC_3(VAR_3->diagfile,"adns%s [%ld]: ",VAR_4,(long)FUNC_5());
  } else {
    FUNC_3(VAR_3->diagfile,"adns%s: ",VAR_4);
  }

  FUNC_7(VAR_3->diagfile,VAR_8,VAR_9);

  VAR_10= " (";
  VAR_11= "\n";

  if (VAR_7 && VAR_7->query_dgram) {
    FUNC_2(&VAR_12);
    FUNC_3(VAR_3->diagfile,"%sQNAME=%s, QTYPE=%s",
     VAR_10,
     FUNC_0(VAR_7->ads,-1,0, &VAR_12,
         VAR_7->query_dgram,VAR_7->query_dglen,VAR_0),
     VAR_7->typei ? VAR_7->typei->rrtname : "<unknown>");
    if (VAR_7->typei && VAR_7->typei->fmtname)
      FUNC_3(VAR_3->diagfile,"(%s)",VAR_7->typei->fmtname);
    VAR_10=", "; VAR_11=")\n";
    FUNC_1(&VAR_12);
  }

  if (VAR_6>=0) {
    FUNC_3(VAR_3->diagfile,"%sNS=%s",VAR_10,FUNC_6(VAR_3->servers[VAR_6].addr));
    VAR_10=", "; VAR_11=")\n";
  }

  FUNC_4(VAR_11,VAR_3->diagfile);
}
