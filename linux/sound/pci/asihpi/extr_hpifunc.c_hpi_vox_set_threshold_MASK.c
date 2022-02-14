
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct hpi_response {int error; } ;
struct TYPE_4__ {short* an_log_value; int attribute; } ;
struct TYPE_3__ {TYPE_2__ c; } ;
struct hpi_message {TYPE_1__ u; int obj_index; int adapter_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_3(u32 VAR_4, short VAR_5)
{
 struct hpi_message VAR_6;
 struct hpi_response VAR_7;
 FUNC_1(&VAR_6, &VAR_7, VAR_2,
  VAR_0);
 if (FUNC_0(VAR_4, &VAR_6.adapter_index, &VAR_6.obj_index))
  return VAR_1;
 VAR_6.u.c.attribute = VAR_3;

 VAR_6.u.c.an_log_value[0] = VAR_5;

 FUNC_2(&VAR_6, &VAR_7);

 return VAR_7.error;
}
