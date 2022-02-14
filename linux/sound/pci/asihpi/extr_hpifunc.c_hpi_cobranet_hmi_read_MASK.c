
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_8__ {int error; } ;
struct hpi_res_cobranet_hmiread {int byte_count; TYPE_3__ h; int bytes; } ;
struct TYPE_7__ {int obj_index; int adapter_index; } ;
struct TYPE_6__ {int byte_count; int hmi_address; int attribute; } ;
struct hpi_msg_cobranet_hmiread {TYPE_2__ h; TYPE_1__ p; } ;
typedef int hr ;
typedef int hm ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,int *,int *) ;
 int FUNC_1 (TYPE_2__*,int,TYPE_3__*,int,int ,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 (int *,int ,int) ;

u16 FUNC_4(u32 VAR_5, u32 VAR_6, u32 VAR_7,
 u32 *VAR_8, u8 *VAR_9)
{
 struct hpi_msg_cobranet_hmiread VAR_10;
 struct hpi_res_cobranet_hmiread VAR_11;

 FUNC_1(&VAR_10.h, sizeof(VAR_10), &VAR_11.h, sizeof(VAR_11),
  VAR_4, VAR_1);

 if (FUNC_0(VAR_5, &VAR_10.h.adapter_index,
   &VAR_10.h.obj_index))
  return VAR_2;

 if (VAR_7 > sizeof(VAR_11.bytes))
  return VAR_3;

 VAR_10.p.attribute = VAR_0;
 VAR_10.p.byte_count = VAR_7;
 VAR_10.p.hmi_address = VAR_6;

 FUNC_2(&VAR_10.h, &VAR_11.h);

 if (!VAR_11.h.error && VAR_9) {
  if (VAR_11.byte_count > sizeof(VAR_11.bytes))

   return VAR_3;

  *VAR_8 = VAR_11.byte_count;

  if (VAR_11.byte_count < VAR_7)
   VAR_7 = *VAR_8;

  FUNC_3(VAR_9, VAR_11.bytes, VAR_7);
 }
 return VAR_11.h.error;
}
