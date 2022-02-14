
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_48__ TYPE_8__ ;
typedef struct TYPE_47__ TYPE_7__ ;
typedef struct TYPE_46__ TYPE_6__ ;
typedef struct TYPE_45__ TYPE_5__ ;
typedef struct TYPE_44__ TYPE_4__ ;
typedef struct TYPE_43__ TYPE_3__ ;
typedef struct TYPE_42__ TYPE_37__ ;
typedef struct TYPE_41__ TYPE_2__ ;
typedef struct TYPE_40__ TYPE_1__ ;


struct TYPE_44__ {int used; int const* buf; } ;
typedef TYPE_4__ vbuf ;
struct TYPE_45__ {int type; int rrsz; scalar_t__ (* parse ) (TYPE_6__*,int,int,int *) ;} ;
typedef TYPE_5__ typeinfo ;
struct timeval {int dummy; } ;
struct TYPE_46__ {int serv; int dglen; int nsstart; int nscount; int arcount; struct timeval now; int const* dgram; TYPE_8__* qu; int ads; } ;
typedef TYPE_6__ parseinfo ;
typedef int dns_rcode ;
typedef int byte ;
typedef scalar_t__ adns_status ;
typedef TYPE_7__* adns_state ;
typedef TYPE_8__* adns_query ;
struct TYPE_43__ {scalar_t__ head; } ;
struct TYPE_48__ {int id; int query_dglen; scalar_t__ state; int udpsent; int flags; int cname_begin; int cname_dglen; scalar_t__ retries; TYPE_4__ vb; int * query_dgram; TYPE_5__* typei; int * cname_dgram; int ads; TYPE_3__ children; TYPE_2__* answer; struct TYPE_48__* next; } ;
struct TYPE_42__ {TYPE_8__* head; } ;
struct TYPE_47__ {int iflags; int childw; TYPE_37__ udpw; TYPE_37__ tcpw; } ;
struct TYPE_40__ {int * bytes; int untyped; } ;
struct TYPE_41__ {int nrrs; TYPE_1__ rrs; int * cname; } ;
typedef int INT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,TYPE_8__*) ;
 int FUNC_3 (TYPE_37__,TYPE_8__*) ;
 int FUNC_4 (TYPE_8__*,size_t) ;
 int * FUNC_5 (TYPE_8__*,size_t) ;
 int * FUNC_6 (TYPE_8__*,size_t) ;
 int FUNC_7 (TYPE_7__*,int,TYPE_8__*,char*,...) ;
 int FUNC_8 (TYPE_7__*,int,TYPE_8__*,char*,...) ;
 int FUNC_9 (TYPE_7__*,int,TYPE_8__*,TYPE_4__*,int const*,int,int) ;
 scalar_t__ FUNC_10 (TYPE_8__*,int,int const*,int,int*,int*,int*,unsigned long*,int*,int*,int*) ;
 scalar_t__ FUNC_11 (int ,TYPE_4__*,int*,int *,int,int,int,int) ;
 scalar_t__ FUNC_12 (TYPE_7__*,int,TYPE_8__*,TYPE_4__*,int ,int const*,int,int*,int) ;
 int FUNC_13 (TYPE_8__*) ;
 int FUNC_14 (TYPE_8__*,scalar_t__) ;
 int FUNC_15 (TYPE_8__*,struct timeval) ;
 int FUNC_16 (TYPE_8__*) ;
 int VAR_2 ;
 int FUNC_17 (TYPE_7__*,TYPE_8__*,struct timeval) ;
 int FUNC_18 (TYPE_8__*,unsigned long,struct timeval) ;
 int FUNC_19 (TYPE_4__*) ;
 int FUNC_20 (TYPE_4__*) ;
 int FUNC_21 (TYPE_7__*,int,TYPE_8__*,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_22 (int) ;
 scalar_t__ FUNC_23 (int *,int const*,size_t) ;
 int FUNC_24 (int *,int const*,size_t) ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;






 int * FUNC_25 (int *,size_t) ;
 int FUNC_26 (char*) ;
 scalar_t__ FUNC_27 (TYPE_6__*,int,int,int *) ;

void FUNC_28(adns_state VAR_26, const byte *VAR_27, int VAR_28,
       int VAR_29, int VAR_30, struct timeval VAR_31) {
  int VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38;
  int VAR_39, VAR_40, VAR_41, VAR_42, VAR_43, VAR_44, VAR_45;
  int VAR_46, VAR_47, VAR_48, VAR_49, VAR_50;
  int VAR_51, VAR_52, VAR_53, VAR_54;
  int VAR_55, VAR_56, VAR_57;
  int VAR_58, VAR_59, VAR_60;
  unsigned long VAR_61, VAR_62;
  const typeinfo *VAR_63;
  adns_query VAR_64, VAR_65;
  dns_rcode VAR_66;
  adns_status VAR_67;
  vbuf VAR_68;
  byte *VAR_69, *VAR_70;
  parseinfo VAR_71;

  if (VAR_28<VAR_1) {
    FUNC_8(VAR_26,VAR_29,0,"received datagram too short for message header (%d)",VAR_28);
    return;
  }
  VAR_32= 0;
  FUNC_1(VAR_32,VAR_39);
  FUNC_0(VAR_32,VAR_40);
  FUNC_0(VAR_32,VAR_41);
  FUNC_1(VAR_32,VAR_42);
  FUNC_1(VAR_32,VAR_43);
  FUNC_1(VAR_32,VAR_44);
  FUNC_1(VAR_32,VAR_45);
  FUNC_22(VAR_32 == VAR_1);

  VAR_49= VAR_40&0x80;
  VAR_50= (VAR_40&0x78)>>3;
  VAR_48= VAR_40&0x02;
  VAR_47= VAR_40&0x01;
  VAR_46= VAR_41&0x80;
  VAR_66= (VAR_41&0x0f);

  VAR_38= 0;

  if (!VAR_49) {
    FUNC_8(VAR_26,VAR_29,0,"server sent us a query, not a response");
    return;
  }
  if (VAR_50) {
    FUNC_8(VAR_26,VAR_29,0,"server sent us unknown opcode %d (wanted 0=QUERY)",VAR_50);
    return;
  }

  VAR_64= 0;


  if (VAR_42 == 1) {
    for (VAR_64= VAR_30 ? VAR_26->tcpw.head : VAR_26->udpw.head; VAR_64; VAR_64= VAR_65) {
      VAR_65= VAR_64->next;
      if (VAR_64->id != VAR_39) continue;
      if (VAR_28 < VAR_64->query_dglen) continue;
      if (FUNC_23(VAR_64->query_dgram+VAR_1,
   VAR_27+VAR_1,
   (size_t) VAR_64->query_dglen-VAR_1))
 continue;
      if (VAR_30) {
 FUNC_22(VAR_64->state == VAR_24);
      } else {
 FUNC_22(VAR_64->state == VAR_25);
 if (!(VAR_64->udpsent & (1<<VAR_29))) continue;
      }
      break;
    }
    if (VAR_64) {

      if (VAR_30) FUNC_3(VAR_26->tcpw,VAR_64);
      else FUNC_3(VAR_26->udpw,VAR_64);
    }
  }





  switch (VAR_66) {
  case 132:
  case 130:
    break;
  case 133:
    FUNC_21(VAR_26,VAR_29,VAR_64,"server cannot understand our query (Format Error)");
    if (VAR_64) FUNC_14(VAR_64,VAR_17);
    return;
  case 128:
    if (VAR_64) FUNC_14(VAR_64,VAR_20);
    else FUNC_7(VAR_26,VAR_29,VAR_64,"server failure on unidentifiable query");
    return;
  case 131:
    FUNC_21(VAR_26,VAR_29,VAR_64,"server claims not to implement our query");
    if (VAR_64) FUNC_14(VAR_64,VAR_18);
    return;
  case 129:
    FUNC_7(VAR_26,VAR_29,VAR_64,"server refused our query");
    if (VAR_64) FUNC_14(VAR_64,VAR_19);
    return;
  default:
    FUNC_21(VAR_26,VAR_29,VAR_64,"server gave unknown response code %d",VAR_66);
    if (VAR_64) FUNC_14(VAR_64,VAR_21);
    return;
  }

  if (!VAR_64) {
    if (!VAR_42) {
      FUNC_8(VAR_26,VAR_29,0,"server sent reply without quoting our question");
    } else if (VAR_42>1) {
      FUNC_8(VAR_26,VAR_29,0,"server claimed to answer %d questions with one message",
   VAR_42);
    } else if (VAR_26->iflags & VAR_3) {
      FUNC_20(&VAR_68);
      FUNC_7(VAR_26,VAR_29,0,"reply not found, id %02x, query owner %s",
    VAR_39, FUNC_9(VAR_26,VAR_29,0,&VAR_68,VAR_27,VAR_28,VAR_1));
      FUNC_19(&VAR_68);
    }
    return;
  }



  VAR_55= VAR_64->query_dglen;
  VAR_57= -1;




  VAR_34= 0;
  VAR_32= VAR_55;
  for (VAR_35= 0; VAR_35<VAR_43; VAR_35++) {
    VAR_33= VAR_32;
    VAR_67= FUNC_10(VAR_64,VAR_29, VAR_27,VAR_28,&VAR_32,
       &VAR_51,&VAR_52,&VAR_61, &VAR_53,&VAR_54,
       &VAR_58);
    if (VAR_67) { FUNC_14(VAR_64,VAR_67); return; }
    if (VAR_51 == -1) goto x_truncated;

    if (VAR_52 != VAR_0) {
      FUNC_8(VAR_26,VAR_29,VAR_64,"ignoring answer RR with wrong class %d (expected IN=%d)",
   VAR_52,VAR_0);
      continue;
    }
    if (!VAR_58) {
      if (VAR_26->iflags & VAR_3) {
 FUNC_7(VAR_26,VAR_29,VAR_64,"ignoring RR with an unexpected owner %s",
      FUNC_9(VAR_26,VAR_29,VAR_64, &VAR_64->vb, VAR_27,VAR_28,VAR_33));
      }
      continue;
    }
    if (VAR_51 == VAR_8 &&
 (VAR_64->typei->type & VAR_2) != VAR_8) {
      if (VAR_64->flags & VAR_4) {
 FUNC_14(VAR_64,VAR_16);
 return;
      } else if (VAR_64->cname_dgram) {
 FUNC_7(VAR_26,VAR_29,VAR_64,"allegedly canonical name %s is actually alias for %s",
      VAR_64->answer->cname,
      FUNC_9(VAR_26,VAR_29,VAR_64, &VAR_64->vb, VAR_27,VAR_28,VAR_54));
 FUNC_14(VAR_64,VAR_16);
 return;
      } else if (VAR_34) {
 FUNC_7(VAR_26,VAR_29,VAR_64,"ignoring CNAME (to %s) coexisting with RR",
      FUNC_9(VAR_26,VAR_29,VAR_64, &VAR_64->vb, VAR_27,VAR_28,VAR_54));
      } else {
 VAR_64->cname_begin= VAR_54;
 VAR_64->cname_dglen= VAR_28;
 VAR_67= FUNC_12(VAR_26,VAR_29,VAR_64, &VAR_64->vb,
          VAR_64->flags & VAR_5 ? 0 : VAR_22,
          VAR_27,VAR_28, &VAR_54,VAR_54+VAR_53);
 if (!VAR_64->vb.used) goto x_truncated;
 if (VAR_67) { FUNC_14(VAR_64,VAR_67); return; }
 VAR_59= FUNC_26((char*)VAR_64->vb.buf)+1;
 VAR_64->answer->cname= FUNC_6(VAR_64,(size_t) VAR_59);
 if (!VAR_64->answer->cname) { FUNC_14(VAR_64,VAR_13); return; }

 VAR_64->cname_dgram= FUNC_5(VAR_64, (size_t) VAR_28);
 FUNC_24(VAR_64->cname_dgram,VAR_27,(size_t) VAR_28);

 FUNC_24(VAR_64->answer->cname,VAR_64->vb.buf, (size_t) VAR_59);
 VAR_38= 1;
 FUNC_18(VAR_64,VAR_61,VAR_31);





      }
    } else if (VAR_51 == ((INT)VAR_64->typei->type & (INT)VAR_2)) {
      VAR_34++;
    } else {
      FUNC_7(VAR_26,VAR_29,VAR_64,"ignoring answer RR with irrelevant type %d",VAR_51);
    }
  }




  if (VAR_48) goto x_truncated;

  VAR_56= VAR_32;

  if (!VAR_34) {



    VAR_36= 0; VAR_62= 0; VAR_37= 0;
    for (VAR_35= 0; VAR_35<VAR_44; VAR_35++) {
      VAR_33= VAR_32;
      VAR_67= FUNC_10(VAR_64,VAR_29, VAR_27,VAR_28,&VAR_32,
         &VAR_51,&VAR_52,&VAR_61, &VAR_53,&VAR_54, 0);
      if (VAR_67) { FUNC_14(VAR_64,VAR_67); return; }
      if (VAR_51==-1) goto x_truncated;
      if (VAR_52 != VAR_0) {
 FUNC_8(VAR_26,VAR_29,VAR_64,
     "ignoring authority RR with wrong class %d (expected IN=%d)",
     VAR_52,VAR_0);
 continue;
      }
      if (VAR_51 == VAR_10) { VAR_36= 1; VAR_62= VAR_61; break; }
      else if (VAR_51 == VAR_9) { VAR_37= 1; }
    }

    if (VAR_66 == 130) {

      FUNC_18(VAR_64,VAR_62,VAR_31);

      if (VAR_64->flags & VAR_6) {
 FUNC_17(VAR_26,VAR_64,VAR_31);
      } else {
 FUNC_14(VAR_64,VAR_15);
      }
      return;
    }

    if (VAR_36 || !VAR_37) {

      FUNC_18(VAR_64,VAR_62,VAR_31);
      FUNC_14(VAR_64,VAR_12);
      return;
    }






    if (VAR_38) goto x_restartquery;


    if (!VAR_46) {
      FUNC_8(VAR_26,VAR_29,VAR_64,"server is not willing to do recursive lookups for us");
      FUNC_14(VAR_64,VAR_14);
    } else {
      if (!VAR_47)
 FUNC_8(VAR_26,VAR_29,VAR_64,"server thinks we didn't ask for recursive lookup");
      else
 FUNC_7(VAR_26,VAR_29,VAR_64,"server claims to do recursion, but gave us a referral");
      FUNC_14(VAR_64,VAR_11);
    }
    return;
  }



  VAR_64->answer->rrs.untyped= FUNC_4(VAR_64,(size_t) VAR_64->typei->rrsz*VAR_34);
  if (!VAR_64->answer->rrs.untyped) { FUNC_14(VAR_64,VAR_13); return; }

  VAR_63= VAR_64->typei;
  VAR_32= VAR_55;
  VAR_70= VAR_64->answer->rrs.bytes;

  VAR_71.ads= VAR_64->ads;
  VAR_71.qu= VAR_64;
  VAR_71.serv= VAR_29;
  VAR_71.dgram= VAR_27;
  VAR_71.dglen= VAR_28;
  VAR_71.nsstart= VAR_56;
  VAR_71.nscount= VAR_44;
  VAR_71.arcount= VAR_45;
  VAR_71.now= VAR_31;

  for (VAR_35=0, VAR_60=0; VAR_35<VAR_43; VAR_35++) {
    VAR_67= FUNC_10(VAR_64,VAR_29, VAR_27,VAR_28,&VAR_32,
       &VAR_51,&VAR_52,&VAR_61, &VAR_53,&VAR_54,
       &VAR_58);
    FUNC_22(!VAR_67); FUNC_22(VAR_51 != -1);
    if (VAR_52 != VAR_0 ||
 VAR_51 != ((INT)VAR_64->typei->type & (INT)VAR_2) ||
 !VAR_58)
      continue;
    FUNC_18(VAR_64,VAR_61,VAR_31);
    VAR_67= VAR_63->parse(&VAR_71, VAR_54,VAR_54+VAR_53, VAR_70+VAR_60*VAR_63->rrsz);
    if (VAR_67) { FUNC_14(VAR_64,VAR_67); return; }
    if (VAR_54==-1) goto x_truncated;
    VAR_60++;
  }
  FUNC_22(VAR_60==VAR_34);
  VAR_64->answer->nrrs= VAR_60;


  if (VAR_64->children.head) {
    VAR_64->state= VAR_23;
    FUNC_2(VAR_26->childw,VAR_64);
    return;
  }
  FUNC_13(VAR_64);
  return;

 x_truncated:

  if (!VAR_48) {
    FUNC_8(VAR_26,VAR_29,VAR_64,"server sent datagram which points outside itself");
    FUNC_14(VAR_64,VAR_11);
    return;
  }
  VAR_64->flags |= VAR_7;

 x_restartquery:
  if (VAR_64->cname_dgram) {
    VAR_67= FUNC_11(VAR_64->ads,&VAR_64->vb,&VAR_64->id,
         VAR_64->cname_dgram, VAR_64->cname_dglen, VAR_64->cname_begin,
         VAR_64->typei->type, VAR_64->flags);
    if (VAR_67) { FUNC_14(VAR_64,VAR_67); return; }

    VAR_69= FUNC_25(VAR_64->query_dgram, (size_t) VAR_64->vb.used);
    if (!VAR_69) { FUNC_14(VAR_64,VAR_13); return; }

    VAR_64->query_dgram= VAR_69;
    VAR_64->query_dglen= VAR_64->vb.used;
    FUNC_24(VAR_69,VAR_64->vb.buf, (size_t) VAR_64->vb.used);
  }

  if (VAR_64->state == VAR_24) VAR_64->state= VAR_25;
  VAR_64->retries= 0;
  FUNC_16(VAR_64);
  FUNC_15(VAR_64,VAR_31);
}
