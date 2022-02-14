
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u16 ;
struct hpi_response {void* error; } ;
struct TYPE_6__ {void* parameter2; void* parameter1; void* property; } ;
struct TYPE_4__ {TYPE_3__ property_set; } ;
struct TYPE_5__ {TYPE_1__ ax; } ;
struct hpi_message {TYPE_2__ u; void* adapter_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_2(u16 VAR_2, u16 VAR_3, u16 VAR_4,
 u16 VAR_5)
{
 struct hpi_message VAR_6;
 struct hpi_response VAR_7;
 FUNC_0(&VAR_6, &VAR_7, VAR_1,
  VAR_0);
 VAR_6.adapter_index = VAR_2;
 VAR_6.u.ax.property_set.property = VAR_3;
 VAR_6.u.ax.property_set.parameter1 = VAR_4;
 VAR_6.u.ax.property_set.parameter2 = VAR_5;

 FUNC_1(&VAR_6, &VAR_7);

 return VAR_7.error;
}
