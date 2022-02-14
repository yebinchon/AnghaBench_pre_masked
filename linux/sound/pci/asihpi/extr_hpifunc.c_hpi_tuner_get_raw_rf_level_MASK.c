
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {short s_level; } ;
struct TYPE_7__ {TYPE_1__ tuner; } ;
struct TYPE_8__ {TYPE_2__ cu; } ;
struct hpi_response {int error; TYPE_3__ u; } ;
struct TYPE_9__ {int attribute; } ;
struct TYPE_10__ {TYPE_4__ cu; } ;
struct hpi_message {TYPE_5__ u; int obj_index; int adapter_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_3(u32 VAR_4, short *VAR_5)
{
 struct hpi_message VAR_6;
 struct hpi_response VAR_7;

 FUNC_1(&VAR_6, &VAR_7, VAR_2,
  VAR_0);
 if (FUNC_0(VAR_4, &VAR_6.adapter_index, &VAR_6.obj_index))
  return VAR_1;
 VAR_6.u.cu.attribute = VAR_3;
 FUNC_2(&VAR_6, &VAR_7);
 if (VAR_5)
  *VAR_5 = VAR_7.u.cu.tuner.s_level;
 return VAR_7.error;
}
