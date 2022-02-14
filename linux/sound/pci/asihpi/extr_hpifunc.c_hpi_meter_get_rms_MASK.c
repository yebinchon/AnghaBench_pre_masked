
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {int an_log_value; } ;
struct TYPE_8__ {TYPE_3__ c; } ;
struct hpi_response {int error; TYPE_4__ u; } ;
struct TYPE_5__ {int attribute; } ;
struct TYPE_6__ {TYPE_1__ c; } ;
struct hpi_message {TYPE_2__ u; int obj_index; int adapter_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 short VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*) ;
 int FUNC_3 (short*,int ,int) ;

u16 FUNC_4(u32 VAR_6, short VAR_7[VAR_2]
 )
{
 short VAR_8 = 0;

 struct hpi_message VAR_9;
 struct hpi_response VAR_10;

 FUNC_1(&VAR_9, &VAR_10, VAR_5,
  VAR_0);
 if (FUNC_0(VAR_6, &VAR_9.adapter_index, &VAR_9.obj_index))
  return VAR_1;
 VAR_9.u.c.attribute = VAR_4;

 FUNC_2(&VAR_9, &VAR_10);

 if (!VAR_10.error)
  FUNC_3(VAR_7, VAR_10.u.c.an_log_value,
   sizeof(short) * VAR_2);
 else
  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
   VAR_7[VAR_8] = VAR_3;

 return VAR_10.error;
}
