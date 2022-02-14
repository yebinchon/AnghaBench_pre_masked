
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct hpi_response {int error; } ;
struct TYPE_4__ {short velocity; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
struct TYPE_6__ {TYPE_2__ d; } ;
struct hpi_message {TYPE_3__ u; int obj_index; int adapter_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_3(u32 VAR_3, short VAR_4)
{
 struct hpi_message VAR_5;
 struct hpi_response VAR_6;

 FUNC_1(&VAR_5, &VAR_6, VAR_1,
  VAR_2);
 if (FUNC_0(VAR_3, &VAR_5.adapter_index, &VAR_5.obj_index))
  return VAR_0;
 VAR_5.u.d.u.velocity = VAR_4;

 FUNC_2(&VAR_5, &VAR_6);

 return VAR_6.error;
}
