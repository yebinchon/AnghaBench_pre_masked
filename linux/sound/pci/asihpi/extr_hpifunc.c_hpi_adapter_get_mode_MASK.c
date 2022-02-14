
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int adapter_mode; } ;
struct TYPE_5__ {TYPE_1__ mode; } ;
struct TYPE_6__ {TYPE_2__ ax; } ;
struct hpi_response {int error; TYPE_3__ u; } ;
struct hpi_message {int adapter_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_2(u16 VAR_2, u32 *VAR_3)
{
 struct hpi_message VAR_4;
 struct hpi_response VAR_5;
 FUNC_0(&VAR_4, &VAR_5, VAR_1,
  VAR_0);
 VAR_4.adapter_index = VAR_2;
 FUNC_1(&VAR_4, &VAR_5);
 if (VAR_3)
  *VAR_3 = VAR_5.u.ax.mode.adapter_mode;
 return VAR_5.error;
}
