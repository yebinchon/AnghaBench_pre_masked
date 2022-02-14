
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
struct TYPE_5__ {int format; int data_size; int * pb_data; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct TYPE_8__ {TYPE_3__ d; } ;
struct hpi_message {TYPE_4__ u; int obj_index; int adapter_index; } ;
struct hpi_format {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct hpi_format const*) ;
 scalar_t__ FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_3 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_4(u32 VAR_3, const u8 *VAR_4,
 u32 VAR_5, const struct hpi_format *VAR_6)
{
 struct hpi_message VAR_7;
 struct hpi_response VAR_8;
 FUNC_2(&VAR_7, &VAR_8, VAR_1,
  VAR_2);
 if (FUNC_1(VAR_3, &VAR_7.adapter_index, &VAR_7.obj_index))
  return VAR_0;
 VAR_7.u.d.u.data.pb_data = (u8 *)VAR_4;
 VAR_7.u.d.u.data.data_size = VAR_5;

 FUNC_0(&VAR_7.u.d.u.data.format, VAR_6);

 FUNC_3(&VAR_7, &VAR_8);

 return VAR_8.error;
}
