
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


typedef scalar_t__ u32 ;
typedef void* u16 ;
struct TYPE_10__ {scalar_t__ serial_number; void* version; void* num_instreams; void* num_outstreams; void* adapter_type; } ;
struct TYPE_11__ {TYPE_4__ info; } ;
struct TYPE_12__ {TYPE_5__ ax; } ;
struct hpi_response {void* error; TYPE_6__ u; } ;
struct TYPE_7__ {void* index; } ;
struct TYPE_8__ {TYPE_1__ module_info; } ;
struct TYPE_9__ {TYPE_2__ ax; } ;
struct hpi_message {TYPE_3__ u; void* adapter_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_2(u16 VAR_2, u16 VAR_3,
 u16 *VAR_4, u16 *VAR_5, u16 *VAR_6,
 u32 *VAR_7, u16 *VAR_8, u32 *VAR_9)
{
 struct hpi_message VAR_10;
 struct hpi_response VAR_11;

 FUNC_0(&VAR_10, &VAR_11, VAR_1,
  VAR_0);
 VAR_10.adapter_index = VAR_2;
 VAR_10.u.ax.module_info.index = VAR_3;

 FUNC_1(&VAR_10, &VAR_11);

 *VAR_8 = VAR_11.u.ax.info.adapter_type;
 *VAR_4 = VAR_11.u.ax.info.num_outstreams;
 *VAR_5 = VAR_11.u.ax.info.num_instreams;
 *VAR_6 = VAR_11.u.ax.info.version;
 *VAR_7 = VAR_11.u.ax.info.serial_number;
 *VAR_9 = 0;

 return VAR_11.error;
}
