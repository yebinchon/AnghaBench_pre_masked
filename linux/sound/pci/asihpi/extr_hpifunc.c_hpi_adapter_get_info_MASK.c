
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int serial_number; int version; int num_instreams; int num_outstreams; int adapter_type; } ;
struct TYPE_5__ {TYPE_1__ info; } ;
struct TYPE_6__ {TYPE_2__ ax; } ;
struct hpi_response {int error; TYPE_3__ u; } ;
struct hpi_message {int adapter_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_2(u16 VAR_2, u16 *VAR_3,
 u16 *VAR_4, u16 *VAR_5, u32 *VAR_6,
 u16 *VAR_7)
{
 struct hpi_message VAR_8;
 struct hpi_response VAR_9;
 FUNC_0(&VAR_8, &VAR_9, VAR_1,
  VAR_0);
 VAR_8.adapter_index = VAR_2;

 FUNC_1(&VAR_8, &VAR_9);

 *VAR_7 = VAR_9.u.ax.info.adapter_type;
 *VAR_3 = VAR_9.u.ax.info.num_outstreams;
 *VAR_4 = VAR_9.u.ax.info.num_instreams;
 *VAR_5 = VAR_9.u.ax.info.version;
 *VAR_6 = VAR_9.u.ax.info.serial_number;
 return VAR_9.error;
}
