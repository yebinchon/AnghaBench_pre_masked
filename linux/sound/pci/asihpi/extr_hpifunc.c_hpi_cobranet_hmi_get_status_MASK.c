
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


typedef int u32 ;
typedef int u16 ;
struct TYPE_9__ {int writeable_size; int readable_size; int status; } ;
struct TYPE_10__ {TYPE_3__ status; } ;
struct TYPE_11__ {TYPE_4__ cobranet; } ;
struct TYPE_12__ {TYPE_5__ cu; } ;
struct hpi_response {int error; TYPE_6__ u; } ;
struct TYPE_7__ {int attribute; } ;
struct TYPE_8__ {TYPE_1__ c; } ;
struct hpi_message {TYPE_2__ u; int obj_index; int adapter_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_3(u32 VAR_4, u32 *VAR_5,
 u32 *VAR_6, u32 *VAR_7)
{
 struct hpi_message VAR_8;
 struct hpi_response VAR_9;

 FUNC_1(&VAR_8, &VAR_9, VAR_3,
  VAR_1);
 if (FUNC_0(VAR_4, &VAR_8.adapter_index, &VAR_8.obj_index))
  return VAR_2;

 VAR_8.u.c.attribute = VAR_0;

 FUNC_2(&VAR_8, &VAR_9);
 if (!VAR_9.error) {
  if (VAR_5)
   *VAR_5 = VAR_9.u.cu.cobranet.status.status;
  if (VAR_6)
   *VAR_6 =
    VAR_9.u.cu.cobranet.status.readable_size;
  if (VAR_7)
   *VAR_7 =
    VAR_9.u.cu.cobranet.status.writeable_size;
 }
 return VAR_9.error;
}
