
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_4__ {scalar_t__ adapter_type; scalar_t__ adapter_index; } ;
struct TYPE_3__ {TYPE_2__ s; } ;
struct hpi_response {scalar_t__ error; TYPE_1__ u; } ;
struct hpi_message {scalar_t__ obj_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_2(int VAR_2, u32 *VAR_3,
 u16 *VAR_4)
{
 struct hpi_message VAR_5;
 struct hpi_response VAR_6;
 FUNC_0(&VAR_5, &VAR_6, VAR_0,
  VAR_1);
 VAR_5.obj_index = (u16)VAR_2;
 FUNC_1(&VAR_5, &VAR_6);
 *VAR_3 = (int)VAR_6.u.s.adapter_index;
 *VAR_4 = VAR_6.u.s.adapter_type;

 return VAR_6.error;
}
