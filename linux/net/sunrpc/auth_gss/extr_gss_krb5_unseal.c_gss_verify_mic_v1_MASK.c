
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct xdr_netobj {int len; char* data; } ;
struct xdr_buf {int dummy; } ;
struct krb5_ctx {scalar_t__ endtime; scalar_t__ initiate; TYPE_1__* gk5e; int * cksum; int mech_used; } ;
typedef scalar_t__ s32 ;
typedef int cksumdata ;
struct TYPE_2__ {int signalg; int cksumlength; scalar_t__ keyed_cksum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int*,unsigned char**,int) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (struct krb5_ctx*,unsigned char*,unsigned char*,int*,int *) ;
 scalar_t__ FUNC_4 (struct krb5_ctx*,unsigned char*,int,struct xdr_buf*,int ,int *,int ,struct xdr_netobj*) ;
 scalar_t__ FUNC_5 (char*,unsigned char*,int ) ;

__attribute__((used)) static u32
FUNC_6(struct krb5_ctx *VAR_10,
  struct xdr_buf *VAR_11, struct xdr_netobj *VAR_12)
{
 int VAR_13;
 int VAR_14;
 char VAR_15[VAR_0];
 struct xdr_netobj VAR_16 = {.len = sizeof(VAR_15),
         .data = VAR_15};
 s32 VAR_17;
 int VAR_18;
 u32 VAR_19;
 unsigned char *VAR_20 = (unsigned char *)VAR_12->data;
 int VAR_21;
 u8 *VAR_22;

 FUNC_0("RPC:       krb5_read_token\n");

 if (FUNC_1(&VAR_10->mech_used, &VAR_21, &VAR_20,
     VAR_12->len))
  return VAR_5;

 if ((VAR_20[0] != ((VAR_7 >> 8) & 0xff)) ||
     (VAR_20[1] != (VAR_7 & 0xff)))
  return VAR_5;



 VAR_13 = VAR_20[2] + (VAR_20[3] << 8);
 if (VAR_13 != VAR_10->gk5e->signalg)
  return VAR_5;

 VAR_14 = VAR_20[4] + (VAR_20[5] << 8);
 if (VAR_14 != VAR_9)
  return VAR_5;

 if ((VAR_20[6] != 0xff) || (VAR_20[7] != 0xff))
  return VAR_5;

 if (VAR_10->gk5e->keyed_cksum)
  VAR_22 = VAR_10->cksum;
 else
  VAR_22 = ((void*)0);

 if (FUNC_4(VAR_10, VAR_20, 8, VAR_11, 0,
     VAR_22, VAR_8, &VAR_16))
  return VAR_6;

 if (FUNC_5(VAR_16.data, VAR_20 + VAR_1,
     VAR_10->gk5e->cksumlength))
  return VAR_2;



 VAR_17 = FUNC_2();

 if (VAR_17 > VAR_10->endtime)
  return VAR_4;



 if (FUNC_3(VAR_10, VAR_20 + VAR_1, VAR_20 + 8,
        &VAR_18, &VAR_19))
  return VAR_6;

 if ((VAR_10->initiate && VAR_18 != 0xff) ||
     (!VAR_10->initiate && VAR_18 != 0))
  return VAR_2;

 return VAR_3;
}
