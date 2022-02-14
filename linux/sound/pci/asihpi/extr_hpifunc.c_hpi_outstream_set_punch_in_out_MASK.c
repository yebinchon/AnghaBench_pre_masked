
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u32 ;
typedef int u16 ;
struct hpi_response {int error; } ;
struct TYPE_5__ {void* punch_out_sample; void* punch_in_sample; } ;
struct TYPE_7__ {TYPE_1__ pio; } ;
struct TYPE_6__ {TYPE_3__ u; } ;
struct TYPE_8__ {TYPE_2__ d; } ;
struct hpi_message {TYPE_4__ u; int obj_index; int adapter_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*,int *,int *) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_3(u32 VAR_3, u32 VAR_4,
 u32 VAR_5)
{
 struct hpi_message VAR_6;
 struct hpi_response VAR_7;

 FUNC_1(&VAR_6, &VAR_7, VAR_1,
  VAR_2);
 if (FUNC_0(VAR_3, &VAR_6.adapter_index, &VAR_6.obj_index))
  return VAR_0;

 VAR_6.u.d.u.pio.punch_in_sample = VAR_4;
 VAR_6.u.d.u.pio.punch_out_sample = VAR_5;

 FUNC_2(&VAR_6, &VAR_7);

 return VAR_7.error;
}
