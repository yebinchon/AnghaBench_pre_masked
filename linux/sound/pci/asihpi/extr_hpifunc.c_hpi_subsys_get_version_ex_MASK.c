
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int data; } ;
struct TYPE_4__ {TYPE_1__ s; } ;
struct hpi_response {int error; TYPE_2__ u; } ;
struct hpi_message {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_2(u32 *VAR_2)
{
 struct hpi_message VAR_3;
 struct hpi_response VAR_4;

 FUNC_0(&VAR_3, &VAR_4, VAR_0,
  VAR_1);
 FUNC_1(&VAR_3, &VAR_4);
 *VAR_2 = VAR_4.u.s.data;
 return VAR_4.error;
}
