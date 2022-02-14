
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_9__ {int bLER; int * data; } ;
struct TYPE_10__ {TYPE_3__ rds; } ;
struct TYPE_11__ {TYPE_4__ tuner; } ;
struct TYPE_12__ {TYPE_5__ cu; } ;
struct hpi_response {int error; TYPE_6__ u; } ;
struct TYPE_7__ {int attribute; } ;
struct TYPE_8__ {TYPE_1__ c; } ;
struct hpi_message {TYPE_2__ u; int obj_index; int adapter_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_3(u32 VAR_4, char *VAR_5)
{
 struct hpi_message VAR_6;
 struct hpi_response VAR_7;

 FUNC_1(&VAR_6, &VAR_7, VAR_2,
  VAR_0);
 if (FUNC_0(VAR_4, &VAR_6.adapter_index, &VAR_6.obj_index))
  return VAR_1;
 VAR_6.u.c.attribute = VAR_3;
 FUNC_2(&VAR_6, &VAR_7);
 if (VAR_5) {
  *(u32 *)&VAR_5[0] = VAR_7.u.cu.tuner.rds.data[0];
  *(u32 *)&VAR_5[4] = VAR_7.u.cu.tuner.rds.data[1];
  *(u32 *)&VAR_5[8] = VAR_7.u.cu.tuner.rds.bLER;
 }
 return VAR_7.error;
}
