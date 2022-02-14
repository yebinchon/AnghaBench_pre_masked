
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int buffer_size; int data_available; } ;
struct TYPE_6__ {TYPE_1__ stream_info; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct TYPE_8__ {TYPE_3__ d; } ;
struct hpi_response {int error; TYPE_4__ u; } ;
struct hpi_message {int obj_index; int adapter_index; } ;
struct hpi_anc_frame {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int *,int *) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_3(u32 VAR_3, u32 *VAR_4)
{
 struct hpi_message VAR_5;
 struct hpi_response VAR_6;
 FUNC_1(&VAR_5, &VAR_6, VAR_2,
  VAR_1);
 if (FUNC_0(VAR_3, &VAR_5.adapter_index, &VAR_5.obj_index))
  return VAR_0;
 FUNC_2(&VAR_5, &VAR_6);
 if (VAR_4)
  *VAR_4 =
   (VAR_6.u.d.u.stream_info.buffer_size -
   VAR_6.u.d.u.stream_info.data_available) /
   sizeof(struct hpi_anc_frame);
 return VAR_6.error;
}
