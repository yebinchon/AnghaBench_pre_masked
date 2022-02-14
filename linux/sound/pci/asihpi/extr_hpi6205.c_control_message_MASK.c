
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct hpi_response {int error; } ;
struct TYPE_3__ {int attribute; } ;
struct TYPE_4__ {TYPE_1__ c; } ;
struct hpi_message {int function; TYPE_2__ u; } ;
struct hpi_hw_obj {int p_cache; } ;
struct hpi_adapter_obj {int has_control_cache; struct hpi_hw_obj* priv; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct hpi_message*,struct hpi_response*) ;
 int FUNC_1 (int ,struct hpi_message*,struct hpi_response*) ;
 int FUNC_2 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct hpi_adapter_obj *VAR_3,
 struct hpi_message *VAR_4, struct hpi_response *VAR_5)
{

 struct hpi_hw_obj *VAR_6 = VAR_3->priv;
 u16 VAR_7 = 0;

 switch (VAR_4->function) {
 case 129:
  if (VAR_3->has_control_cache) {
   FUNC_3();
   if (FUNC_0(VAR_6->p_cache, VAR_4, VAR_5)) {
    break;
   } else if (VAR_4->u.c.attribute == VAR_2) {
    VAR_7 =
     VAR_0;
   }
  }
  FUNC_2(VAR_3, VAR_4, VAR_5);
  if (VAR_7 && !VAR_5->error)
   VAR_5->error = VAR_7;
  break;
 case 130:
  FUNC_2(VAR_3, VAR_4, VAR_5);
  break;
 case 128:
  FUNC_2(VAR_3, VAR_4, VAR_5);
  if (VAR_3->has_control_cache)
   FUNC_1(VAR_6->p_cache, VAR_4,
    VAR_5);
  break;
 default:
  VAR_5->error = VAR_1;
  break;
 }
}
