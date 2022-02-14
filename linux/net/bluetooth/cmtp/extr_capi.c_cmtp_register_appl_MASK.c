
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cmtp_session {int wait; } ;
struct cmtp_application {scalar_t__ state; int err; int msgnum; } ;
struct TYPE_4__ {int nbchannel; } ;
struct capi_ctr {TYPE_1__ profile; struct cmtp_session* driverdata; } ;
struct TYPE_5__ {int level3cnt; int datablkcnt; int datablklen; } ;
typedef TYPE_2__ capi_register_params ;
typedef int __u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,struct capi_ctr*,int ,int,int,int) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (unsigned char*,int,int) ;
 struct cmtp_application* FUNC_5 (struct cmtp_session*,int ) ;
 int FUNC_6 (struct cmtp_session*,struct cmtp_application*) ;
 int FUNC_7 (struct cmtp_session*) ;
 int FUNC_8 (struct cmtp_session*,int ,int,int ,int ,unsigned char*,int) ;
 int VAR_10 ;
 int FUNC_9 (int *,int *) ;
 unsigned long FUNC_10 (unsigned long) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_13(struct capi_ctr *VAR_12, __u16 VAR_13, capi_register_params *VAR_14)
{
 FUNC_2(VAR_11, VAR_10);
 struct cmtp_session *VAR_15 = VAR_12->driverdata;
 struct cmtp_application *VAR_16;
 unsigned long VAR_17 = VAR_5;
 unsigned char VAR_18[8];
 int VAR_19 = 0, VAR_20, VAR_21 = VAR_14->level3cnt;

 FUNC_0("ctrl %p appl %d level3cnt %d datablkcnt %d datablklen %d",
  VAR_12, VAR_13, VAR_14->level3cnt, VAR_14->datablkcnt, VAR_14->datablklen);

 VAR_16 = FUNC_5(VAR_15, VAR_13);
 if (!VAR_16) {
  FUNC_1("Can't allocate memory for new application");
  return;
 }

 if (VAR_21 < 0)
  VAR_20 = VAR_12->profile.nbchannel * -VAR_21;
 else
  VAR_20 = VAR_21;

 if (VAR_20 == 0)
  VAR_20 = VAR_12->profile.nbchannel;

 FUNC_4(VAR_18, 0, VAR_20);
 FUNC_4(VAR_18, 2, VAR_14->datablkcnt);
 FUNC_4(VAR_18, 4, VAR_14->datablklen);

 VAR_16->state = VAR_1;
 VAR_16->msgnum = FUNC_7(VAR_15);

 FUNC_8(VAR_15, VAR_4, 0x0000, VAR_16->msgnum,
    VAR_3, VAR_18, 6);

 FUNC_3(&VAR_15->wait, &VAR_11);
 while (1) {
  FUNC_11(VAR_8);

  if (!VAR_17) {
   VAR_19 = -VAR_6;
   break;
  }

  if (VAR_16->state == VAR_0) {
   VAR_19 = -VAR_16->err;
   break;
  }

  if (VAR_16->state == VAR_2)
   break;

  if (FUNC_12(VAR_10)) {
   VAR_19 = -VAR_7;
   break;
  }

  VAR_17 = FUNC_10(VAR_17);
 }
 FUNC_11(VAR_9);
 FUNC_9(&VAR_15->wait, &VAR_11);

 if (VAR_19) {
  FUNC_6(VAR_15, VAR_16);
  return;
 }
}
