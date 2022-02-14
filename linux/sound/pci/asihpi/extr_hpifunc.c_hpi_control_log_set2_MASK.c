
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct hpi_response {int error; } ;
struct TYPE_3__ {short* an_log_value; int attribute; } ;
struct TYPE_4__ {TYPE_1__ c; } ;
struct hpi_message {TYPE_2__ u; int obj_index; int adapter_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*) ;

__attribute__((used)) static u16 FUNC_3(u32 VAR_3, u16 VAR_4, short VAR_5,
 short VAR_6)
{
 struct hpi_message VAR_7;
 struct hpi_response VAR_8;

 FUNC_1(&VAR_7, &VAR_8, VAR_2,
  VAR_0);
 if (FUNC_0(VAR_3, &VAR_7.adapter_index, &VAR_7.obj_index))
  return VAR_1;
 VAR_7.u.c.attribute = VAR_4;
 VAR_7.u.c.an_log_value[0] = VAR_5;
 VAR_7.u.c.an_log_value[1] = VAR_6;
 FUNC_2(&VAR_7, &VAR_8);
 return VAR_8.error;
}
