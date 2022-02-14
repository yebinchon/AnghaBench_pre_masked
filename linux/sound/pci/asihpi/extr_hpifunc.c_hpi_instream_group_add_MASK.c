
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct hpi_response {scalar_t__ error; } ;
struct TYPE_5__ {char object_type; int stream_index; } ;
struct TYPE_6__ {TYPE_1__ stream; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct TYPE_8__ {TYPE_3__ d; } ;
struct hpi_message {scalar_t__ adapter_index; TYPE_4__ u; int obj_index; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;


 scalar_t__ FUNC_0 (int ,scalar_t__*,int *) ;
 char FUNC_1 (int ) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*,int,int ) ;
 int FUNC_3 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_4(u32 VAR_4, u32 VAR_5)
{
 struct hpi_message VAR_6;
 struct hpi_response VAR_7;
 u16 VAR_8;
 char VAR_9;

 FUNC_2(&VAR_6, &VAR_7, 129,
  VAR_3);
 VAR_7.error = 0;

 if (FUNC_0(VAR_4, &VAR_6.adapter_index, &VAR_6.obj_index))
  return VAR_0;

 if (FUNC_0(VAR_5, &VAR_8,
   &VAR_6.u.d.u.stream.stream_index))
  return VAR_0;

 VAR_9 = FUNC_1(VAR_5);

 switch (VAR_9) {
 case 128:
 case 129:
  VAR_6.u.d.u.stream.object_type = VAR_9;
  break;
 default:
  return VAR_1;
 }

 if (VAR_8 != VAR_6.adapter_index)
  return VAR_2;

 FUNC_3(&VAR_6, &VAR_7);
 return VAR_7.error;
}
