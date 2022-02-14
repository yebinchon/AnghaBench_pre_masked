
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
struct TYPE_7__ {int param2; short* an_log_value; int param1; } ;
struct TYPE_8__ {TYPE_3__ c; } ;
struct hpi_response {scalar_t__ error; TYPE_4__ u; } ;
struct TYPE_5__ {scalar_t__ param2; int attribute; } ;
struct TYPE_6__ {TYPE_1__ c; } ;
struct hpi_message {TYPE_2__ u; int obj_index; int adapter_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_3(u32 VAR_4, u16 VAR_5, u16 *VAR_6,
 u32 *VAR_7, short *VAR_8, short *VAR_9)
{
 struct hpi_message VAR_10;
 struct hpi_response VAR_11;

 FUNC_1(&VAR_10, &VAR_11, VAR_3,
  VAR_0);
 if (FUNC_0(VAR_4, &VAR_10.adapter_index, &VAR_10.obj_index))
  return VAR_2;
 VAR_10.u.c.attribute = VAR_1;
 VAR_10.u.c.param2 = VAR_5;

 FUNC_2(&VAR_10, &VAR_11);

 if (VAR_7)
  *VAR_7 = VAR_11.u.c.param1;
 if (VAR_6)
  *VAR_6 = (u16)(VAR_11.u.c.param2 >> 16);
 if (VAR_8)
  *VAR_8 = VAR_11.u.c.an_log_value[1];
 if (VAR_9)
  *VAR_9 = VAR_11.u.c.an_log_value[0];

 return VAR_11.error;
}
