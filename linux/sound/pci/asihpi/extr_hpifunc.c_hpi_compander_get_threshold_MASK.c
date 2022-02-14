
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
struct TYPE_7__ {short* an_log_value; } ;
struct TYPE_8__ {TYPE_3__ c; } ;
struct hpi_response {int error; TYPE_4__ u; } ;
struct TYPE_5__ {unsigned int param2; int attribute; } ;
struct TYPE_6__ {TYPE_1__ c; } ;
struct hpi_message {TYPE_2__ u; int obj_index; int adapter_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_3(u32 VAR_4, unsigned int VAR_5,
 short *VAR_6)
{
 struct hpi_message VAR_7;
 struct hpi_response VAR_8;

 FUNC_1(&VAR_7, &VAR_8, VAR_3,
  VAR_1);
 if (FUNC_0(VAR_4, &VAR_7.adapter_index, &VAR_7.obj_index))
  return VAR_2;
 VAR_7.u.c.attribute = VAR_0;
 VAR_7.u.c.param2 = VAR_5;

 FUNC_2(&VAR_7, &VAR_8);
 *VAR_6 = VAR_8.u.c.an_log_value[0];

 return VAR_8.error;
}
