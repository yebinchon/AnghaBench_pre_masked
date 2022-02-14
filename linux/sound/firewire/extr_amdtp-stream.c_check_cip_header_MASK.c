
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_4__ {unsigned int dbc_interval; } ;
struct TYPE_5__ {TYPE_1__ tx; } ;
struct amdtp_stream {int flags; unsigned int sph; unsigned int fmt; unsigned int data_block_quadlets; TYPE_3__* unit; TYPE_2__ ctx_data; } ;
typedef int __be32 ;
struct TYPE_6__ {int device; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int FUNC_0 (int const) ;
 int FUNC_1 (int *,char*,unsigned int,...) ;
 int FUNC_2 (int *,char*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct amdtp_stream *VAR_23, const __be32 *VAR_24,
       unsigned int VAR_25,
       unsigned int *VAR_26,
       unsigned int *VAR_27, unsigned int *VAR_28)
{
 u32 VAR_29[2];
 unsigned int VAR_30;
 unsigned int VAR_31;
 unsigned int VAR_32;
 unsigned int VAR_33;
 bool VAR_34;

 VAR_29[0] = FUNC_0(VAR_24[0]);
 VAR_29[1] = FUNC_0(VAR_24[1]);





 if ((((VAR_29[0] & VAR_7) == VAR_6) ||
      ((VAR_29[1] & VAR_7) != VAR_6)) &&
     (!(VAR_23->flags & VAR_13))) {
  FUNC_2(&VAR_23->unit->device,
    "Invalid CIP header for AMDTP: %08X:%08X\n",
    VAR_29[0], VAR_29[1]);
  return -VAR_19;
 }


 VAR_30 = (VAR_29[0] & VAR_15) >> VAR_16;
 VAR_31 = (VAR_29[1] & VAR_11) >> VAR_12;
 if (VAR_30 != VAR_23->sph || VAR_31 != VAR_23->fmt) {
  FUNC_2(&VAR_23->unit->device,
         "Detect unexpected protocol: %08x %08x\n",
         VAR_29[0], VAR_29[1]);
  return -VAR_19;
 }


 VAR_32 = (VAR_29[1] & VAR_8) >> VAR_9;
 if (VAR_25 < sizeof(__be32) * 2 ||
     (VAR_31 == VAR_10 && VAR_32 == VAR_0)) {
  *VAR_26 = 0;
 } else {
  unsigned int VAR_35 =
    (VAR_29[0] & VAR_3) >> VAR_4;

  if (VAR_35 == 0) {
   FUNC_1(&VAR_23->unit->device,
    "Detect invalid value in dbs field: %08X\n",
    VAR_29[0]);
   return -VAR_21;
  }
  if (VAR_23->flags & VAR_18)
   VAR_35 = VAR_23->data_block_quadlets;

  *VAR_26 = (VAR_25 / sizeof(__be32) - 2) /
       VAR_35;
 }


 VAR_33 = VAR_29[0] & VAR_2;
 if (*VAR_26 == 0 && (VAR_23->flags & VAR_5) &&
     *VAR_27 != VAR_22)
  VAR_33 = *VAR_27;

 if ((VAR_33 == 0x00 && (VAR_23->flags & VAR_14)) ||
     *VAR_27 == VAR_22) {
  VAR_34 = 0;
 } else if (!(VAR_23->flags & VAR_1)) {
  VAR_34 = VAR_33 != *VAR_27;
 } else {
  unsigned int VAR_36;

  if (*VAR_26 > 0 && VAR_23->ctx_data.tx.dbc_interval > 0)
   VAR_36 = VAR_23->ctx_data.tx.dbc_interval;
  else
   VAR_36 = *VAR_26;

  VAR_34 = VAR_33 != ((*VAR_27 + VAR_36) & 0xff);
 }

 if (VAR_34) {
  FUNC_1(&VAR_23->unit->device,
   "Detect discontinuity of CIP: %02X %02X\n",
   *VAR_27, VAR_33);
  return -VAR_20;
 }

 *VAR_27 = VAR_33;

 *VAR_28 = VAR_29[1] & VAR_17;

 return 0;
}
