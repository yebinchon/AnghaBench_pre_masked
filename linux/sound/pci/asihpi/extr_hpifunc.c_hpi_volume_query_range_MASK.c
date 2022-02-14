
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
struct TYPE_7__ {short* an_log_value; scalar_t__ param1; } ;
struct TYPE_8__ {TYPE_3__ c; } ;
struct hpi_response {scalar_t__ error; TYPE_4__ u; } ;
struct TYPE_5__ {int attribute; } ;
struct TYPE_6__ {TYPE_1__ c; } ;
struct hpi_message {TYPE_2__ u; int obj_index; int adapter_index; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_3(u32 VAR_4, short *VAR_5,
 short *VAR_6, short *VAR_7)
{
 struct hpi_message VAR_8;
 struct hpi_response VAR_9;

 FUNC_1(&VAR_8, &VAR_9, VAR_2,
  VAR_0);
 if (FUNC_0(VAR_4, &VAR_8.adapter_index, &VAR_8.obj_index))
  return VAR_1;
 VAR_8.u.c.attribute = VAR_3;

 FUNC_2(&VAR_8, &VAR_9);
 if (VAR_9.error) {
  VAR_9.u.c.an_log_value[0] = 0;
  VAR_9.u.c.an_log_value[1] = 0;
  VAR_9.u.c.param1 = 0;
 }
 if (VAR_5)
  *VAR_5 = VAR_9.u.c.an_log_value[0];
 if (VAR_6)
  *VAR_6 = VAR_9.u.c.an_log_value[1];
 if (VAR_7)
  *VAR_7 = (short)VAR_9.u.c.param1;
 return VAR_9.error;
}
