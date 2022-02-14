
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u32 ;
typedef int u16 ;
struct TYPE_7__ {void* param2; void* param1; } ;
struct TYPE_8__ {TYPE_3__ c; } ;
struct hpi_response {int error; TYPE_4__ u; } ;
struct TYPE_5__ {void* param2; void* param1; int attribute; } ;
struct TYPE_6__ {TYPE_1__ c; } ;
struct hpi_message {TYPE_2__ u; int obj_index; int adapter_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void* const,int *,int *) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*) ;

__attribute__((used)) static
u16 FUNC_3(const u32 VAR_3, const u16 VAR_4, u32 VAR_5,
 u32 VAR_6, u32 *VAR_7, u32 *VAR_8)
{
 struct hpi_message VAR_9;
 struct hpi_response VAR_10;

 FUNC_1(&VAR_9, &VAR_10, VAR_2,
  VAR_0);
 if (FUNC_0(VAR_3, &VAR_9.adapter_index, &VAR_9.obj_index))
  return VAR_1;
 VAR_9.u.c.attribute = VAR_4;
 VAR_9.u.c.param1 = VAR_5;
 VAR_9.u.c.param2 = VAR_6;
 FUNC_2(&VAR_9, &VAR_10);

 *VAR_7 = VAR_10.u.c.param1;
 if (VAR_8)
  *VAR_8 = VAR_10.u.c.param2;

 return VAR_10.error;
}
