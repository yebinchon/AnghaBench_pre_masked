
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct hpi_response {int error; } ;
struct TYPE_6__ {int attributes; int format; int channels; } ;
struct TYPE_7__ {TYPE_1__ format; } ;
struct TYPE_8__ {TYPE_2__ data; } ;
struct TYPE_9__ {TYPE_3__ u; } ;
struct TYPE_10__ {TYPE_4__ d; } ;
struct hpi_message {TYPE_5__ u; int obj_index; int adapter_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_3(u32 VAR_3, u16 VAR_4,
 u16 VAR_5, u16 VAR_6, u16 VAR_7)
{
 struct hpi_message VAR_8;
 struct hpi_response VAR_9;
 FUNC_1(&VAR_8, &VAR_9, VAR_2,
  VAR_1);
 if (FUNC_0(VAR_3, &VAR_8.adapter_index, &VAR_8.obj_index))
  return VAR_0;
 VAR_8.u.d.u.data.format.attributes = VAR_4;
 VAR_8.u.d.u.data.format.format = (VAR_5 << 8) | (VAR_6 & 0xff);
 VAR_8.u.d.u.data.format.channels = VAR_7;
 FUNC_2(&VAR_8, &VAR_9);
 return VAR_9.error;
}
