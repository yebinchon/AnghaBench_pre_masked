
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct hpi_response {int error; } ;
struct TYPE_3__ {int param2; int param1; int attribute; int an_log_value; } ;
struct TYPE_4__ {TYPE_1__ c; } ;
struct hpi_message {TYPE_2__ u; int obj_index; int adapter_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*) ;
 int FUNC_3 (int ,short*,int) ;

u16 FUNC_4(u32 VAR_5,
 short VAR_6[VAR_2], u32 VAR_7,
 u16 VAR_8)
{
 struct hpi_message VAR_9;
 struct hpi_response VAR_10;

 FUNC_1(&VAR_9, &VAR_10, VAR_3,
  VAR_0);
 if (FUNC_0(VAR_5, &VAR_9.adapter_index, &VAR_9.obj_index))
  return VAR_1;

 FUNC_3(VAR_9.u.c.an_log_value, VAR_6,
  sizeof(short) * VAR_2);

 VAR_9.u.c.attribute = VAR_4;
 VAR_9.u.c.param1 = VAR_7;
 VAR_9.u.c.param2 = VAR_8;

 FUNC_2(&VAR_9, &VAR_10);

 return VAR_10.error;
}
