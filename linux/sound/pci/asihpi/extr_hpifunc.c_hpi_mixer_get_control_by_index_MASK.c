
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
struct TYPE_7__ {scalar_t__ src_node_type; scalar_t__ src_node_index; scalar_t__ dst_node_type; scalar_t__ dst_node_index; scalar_t__ control_index; } ;
struct TYPE_8__ {TYPE_3__ m; } ;
struct hpi_response {scalar_t__ error; TYPE_4__ u; } ;
struct TYPE_5__ {scalar_t__ control_index; } ;
struct TYPE_6__ {TYPE_1__ m; } ;
struct hpi_message {int adapter_index; TYPE_2__ u; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_3 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_4(u32 VAR_6, u16 VAR_7,
 u16 *VAR_8, u16 *VAR_9, u16 *VAR_10,
 u16 *VAR_11, u16 *VAR_12, u32 *VAR_13)
{
 struct hpi_message VAR_14;
 struct hpi_response VAR_15;
 FUNC_2(&VAR_14, &VAR_15, VAR_4,
  VAR_2);
 if (FUNC_0(VAR_6, &VAR_14.adapter_index, ((void*)0)))
  return VAR_1;
 VAR_14.u.m.control_index = VAR_7;
 FUNC_3(&VAR_14, &VAR_15);

 if (VAR_8) {
  *VAR_8 =
   VAR_15.u.m.src_node_type + VAR_5;
  *VAR_9 = VAR_15.u.m.src_node_index;
  *VAR_10 = VAR_15.u.m.dst_node_type + VAR_0;
  *VAR_11 = VAR_15.u.m.dst_node_index;
 }
 if (VAR_12)
  *VAR_12 = VAR_15.u.m.control_index;

 if (VAR_13) {
  if (VAR_15.error == 0)
   *VAR_13 =
    FUNC_1(VAR_3,
    VAR_14.adapter_index, VAR_7);
  else
   *VAR_13 = 0;
 }
 return VAR_15.error;
}
