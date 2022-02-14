
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int state; int auxiliary_data_available; } ;
struct TYPE_4__ {int state; int auxiliary_data_available; } ;
struct TYPE_6__ {TYPE_2__ stream_info; TYPE_1__ legacy_stream_info; } ;
struct hpi_stream_res {TYPE_3__ u; } ;



void FUNC_0(struct hpi_stream_res *VAR_0)
{
 VAR_0->u.legacy_stream_info.auxiliary_data_available =
  VAR_0->u.stream_info.auxiliary_data_available;
 VAR_0->u.legacy_stream_info.state = VAR_0->u.stream_info.state;
}
