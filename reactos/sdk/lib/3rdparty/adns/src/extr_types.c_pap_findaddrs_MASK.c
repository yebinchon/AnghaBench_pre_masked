
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int ads; TYPE_7__* qu; int now; int dglen; int dgram; int serv; } ;
typedef TYPE_1__ parseinfo ;
typedef scalar_t__ adns_status ;
struct TYPE_11__ {int naddrs; int addrs; scalar_t__ astatus; } ;
typedef TYPE_2__ adns_rr_hostaddr ;
typedef int adns_rr_addr ;
struct TYPE_12__ {scalar_t__ buf; } ;
struct TYPE_13__ {TYPE_6__ vb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_7__*,int) ;
 scalar_t__ FUNC_1 (TYPE_7__*,int ,int ,int ,int*,int*,int*,unsigned long*,int*,int*,int ,int ,int,int*) ;
 int FUNC_2 (int ,int,int,scalar_t__,int ,int ) ;
 int FUNC_3 (TYPE_7__*,unsigned long,int ) ;
 int FUNC_4 (TYPE_6__*,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_6 (TYPE_1__ const*,int,int,scalar_t__) ;

__attribute__((used)) static adns_status FUNC_7(const parseinfo *VAR_5, adns_rr_hostaddr *VAR_6,
     int *VAR_7, int VAR_8, int VAR_9) {
  int VAR_10, VAR_11;
  int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
  unsigned long VAR_17;
  adns_status VAR_18;

  for (VAR_10=0, VAR_11=-1; VAR_10<VAR_8; VAR_10++) {
    VAR_18= FUNC_1(VAR_5->qu, VAR_5->serv, VAR_5->dgram, VAR_5->dglen, VAR_7,
       &VAR_12, &VAR_13, &VAR_17, &VAR_14, &VAR_15,
       VAR_5->dgram, VAR_5->dglen, VAR_9, &VAR_16);
    if (VAR_18) return VAR_18;
    if (!VAR_16 || VAR_13 != VAR_0 || VAR_12 != VAR_2) {
      if (VAR_11>0) break; else continue;
    }
    if (VAR_11 == -1) {
      VAR_11= 0;
    }
    if (!FUNC_4(&VAR_5->qu->vb, (int) ((VAR_11+1)*sizeof(adns_rr_addr)))) VAR_1;
    FUNC_3(VAR_5->qu,VAR_17,VAR_5->now);
    VAR_18= FUNC_6(VAR_5, VAR_15,VAR_15+VAR_14,
  VAR_5->qu->vb.buf + VAR_11*sizeof(adns_rr_addr));
    if (VAR_18) return VAR_18;
    VAR_11++;
  }
  if (VAR_11 >= 0) {
    VAR_6->addrs= FUNC_0(VAR_5->qu, VAR_11*sizeof(adns_rr_addr));
    if (!VAR_6->addrs) VAR_1;
    FUNC_5(VAR_6->addrs, VAR_5->qu->vb.buf, VAR_11*sizeof(adns_rr_addr));
    VAR_6->naddrs= VAR_11;
    VAR_6->astatus= VAR_3;

    FUNC_2(VAR_6->addrs, VAR_11, sizeof(adns_rr_addr), VAR_5->qu->vb.buf,
  VAR_4, VAR_5->ads);
  }
  return VAR_3;
}
