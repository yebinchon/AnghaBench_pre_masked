
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


typedef void* u16 ;
struct TYPE_8__ {void* parameter2; void* parameter1; } ;
struct TYPE_9__ {TYPE_2__ property_get; } ;
struct TYPE_10__ {TYPE_3__ ax; } ;
struct hpi_response {void* error; TYPE_4__ u; } ;
struct TYPE_11__ {void* property; } ;
struct TYPE_12__ {TYPE_5__ property_set; } ;
struct TYPE_7__ {TYPE_6__ ax; } ;
struct hpi_message {TYPE_1__ u; void* adapter_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_2(u16 VAR_2, u16 VAR_3,
 u16 *VAR_4, u16 *VAR_5)
{
 struct hpi_message VAR_6;
 struct hpi_response VAR_7;
 FUNC_0(&VAR_6, &VAR_7, VAR_1,
  VAR_0);
 VAR_6.adapter_index = VAR_2;
 VAR_6.u.ax.property_set.property = VAR_3;

 FUNC_1(&VAR_6, &VAR_7);
 if (!VAR_7.error) {
  if (VAR_4)
   *VAR_4 = VAR_7.u.ax.property_get.parameter1;
  if (VAR_5)
   *VAR_5 = VAR_7.u.ax.property_get.parameter2;
 }

 return VAR_7.error;
}
