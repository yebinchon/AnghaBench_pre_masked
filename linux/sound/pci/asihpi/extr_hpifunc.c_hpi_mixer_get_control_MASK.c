
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef void* u16 ;
struct TYPE_7__ {int control_index; } ;
struct TYPE_8__ {TYPE_3__ m; } ;
struct hpi_response {scalar_t__ error; TYPE_4__ u; } ;
struct TYPE_5__ {void* control_type; void* node_index2; void* node_type2; void* node_index1; void* node_type1; } ;
struct TYPE_6__ {TYPE_1__ m; } ;
struct hpi_message {int adapter_index; TYPE_2__ u; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_3 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_4(u32 VAR_4, u16 VAR_5,
 u16 VAR_6, u16 VAR_7, u16 VAR_8,
 u16 VAR_9, u32 *VAR_10)
{
 struct hpi_message VAR_11;
 struct hpi_response VAR_12;
 FUNC_2(&VAR_11, &VAR_12, VAR_3,
  VAR_1);
 if (FUNC_0(VAR_4, &VAR_11.adapter_index, ((void*)0)))
  return VAR_0;
 VAR_11.u.m.node_type1 = VAR_5;
 VAR_11.u.m.node_index1 = VAR_6;
 VAR_11.u.m.node_type2 = VAR_7;
 VAR_11.u.m.node_index2 = VAR_8;
 VAR_11.u.m.control_type = VAR_9;

 FUNC_3(&VAR_11, &VAR_12);

 if (VAR_12.error == 0)
  *VAR_10 =
   FUNC_1(VAR_2,
   VAR_11.adapter_index, VAR_12.u.m.control_index);
 else
  *VAR_10 = 0;
 return VAR_12.error;
}
