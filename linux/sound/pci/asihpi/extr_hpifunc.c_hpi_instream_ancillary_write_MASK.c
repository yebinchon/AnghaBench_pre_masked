
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct hpi_response {int error; } ;
struct TYPE_5__ {int data_size; int * pb_data; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct TYPE_8__ {TYPE_3__ d; } ;
struct hpi_message {TYPE_4__ u; int obj_index; int adapter_index; } ;
struct hpi_anc_frame {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int *,int *) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_3(u32 VAR_4,
 const struct hpi_anc_frame *VAR_5,
 u32 VAR_6,
 u32 VAR_7)
{
 struct hpi_message VAR_8;
 struct hpi_response VAR_9;

 FUNC_1(&VAR_8, &VAR_9, VAR_3,
  VAR_2);
 if (FUNC_0(VAR_4, &VAR_8.adapter_index, &VAR_8.obj_index))
  return VAR_1;
 VAR_8.u.d.u.data.pb_data = (u8 *)VAR_5;
 VAR_8.u.d.u.data.data_size =
  VAR_7 *
  sizeof(struct hpi_anc_frame);
 if (VAR_8.u.d.u.data.data_size <= VAR_6)
  FUNC_2(&VAR_8, &VAR_9);
 else
  VAR_9.error = VAR_0;
 return VAR_9.error;
}
