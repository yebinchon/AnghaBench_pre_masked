
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct hpi_response_header {scalar_t__ error; } ;
struct TYPE_5__ {scalar_t__ size; int obj_index; int adapter_index; } ;
struct TYPE_4__ {int byte_count; int hmi_address; int attribute; } ;
struct hpi_msg_cobranet_hmiwrite {TYPE_2__ h; int bytes; TYPE_1__ p; } ;
typedef int hr ;
typedef int hm ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,int *,int *) ;
 int FUNC_1 (TYPE_2__*,int,struct hpi_response_header*,int,int ,int ) ;
 int FUNC_2 (TYPE_2__*,struct hpi_response_header*) ;
 int FUNC_3 (int ,int *,int) ;

u16 FUNC_4(u32 VAR_5, u32 VAR_6, u32 VAR_7,
 u8 *VAR_8)
{
 struct hpi_msg_cobranet_hmiwrite VAR_9;
 struct hpi_response_header VAR_10;

 FUNC_1(&VAR_9.h, sizeof(VAR_9), &VAR_10, sizeof(VAR_10),
  VAR_4, VAR_1);

 if (FUNC_0(VAR_5, &VAR_9.h.adapter_index,
   &VAR_9.h.obj_index))
  return VAR_2;

 if (VAR_7 > sizeof(VAR_9.bytes))
  return VAR_3;

 VAR_9.p.attribute = VAR_0;
 VAR_9.p.byte_count = VAR_7;
 VAR_9.p.hmi_address = VAR_6;
 FUNC_3(VAR_9.bytes, VAR_8, VAR_7);
 VAR_9.h.size = (u16)(sizeof(VAR_9.h) + sizeof(VAR_9.p) + VAR_7);

 FUNC_2(&VAR_9.h, &VAR_10);
 return VAR_10.error;
}
