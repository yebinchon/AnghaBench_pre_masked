
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct protoent {int p_proto; } ;
struct in_addr {int s_addr; } ;
typedef TYPE_1__* adns_state ;
struct TYPE_6__ {int iflags; scalar_t__ udpsocket; scalar_t__ diagfile; int nservers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,struct in_addr) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_7 ;
 int FUNC_4 (scalar_t__,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 struct protoent* FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(adns_state VAR_8) {
  struct protoent *VAR_9;
  int VAR_10;


  struct in_addr VAR_11;
  if (!VAR_8->nservers) {
    if (VAR_8->diagfile && VAR_8->iflags & VAR_6)
      FUNC_4(VAR_8->diagfile,"adns: no nameservers, using localhost\n");
    VAR_11.s_addr= FUNC_7(VAR_4);
    FUNC_1(VAR_8,VAR_11);
  }

  VAR_9= FUNC_6("udp"); if (!VAR_9) { VAR_10= VAR_3; goto x_free; }
  VAR_1;
  VAR_8->udpsocket= FUNC_8(VAR_2,VAR_5,VAR_9->p_proto);
  VAR_0;
  if (VAR_8->udpsocket<0) { VAR_10= VAR_7; goto x_free; }

  VAR_10= FUNC_2(VAR_8,VAR_8->udpsocket);
  if (VAR_10) { VAR_10= VAR_7; goto x_closeudp; }
  return 0;

 x_closeudp:
  FUNC_3(VAR_8->udpsocket);
 x_free:
  FUNC_5(VAR_8);



  return VAR_10;
}
