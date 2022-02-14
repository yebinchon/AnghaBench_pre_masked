
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int num_adapters; } ;
struct TYPE_6__ {TYPE_1__ s; } ;
struct hpi_response {int error; TYPE_2__ u; } ;
struct hpi_message {int function; } ;
struct TYPE_7__ {int gw_num_adapters; } ;


 int VAR_0 ;
 int VAR_1 ;







 TYPE_3__ VAR_2 ;
 int FUNC_0 (struct hpi_response*,int ,int,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct hpi_message *VAR_3, struct hpi_response *VAR_4)
{
 FUNC_0(VAR_4, VAR_1, VAR_3->function, 0);

 switch (VAR_3->function) {
 case 128:
 case 134:
 case 131:
  break;
 case 132:
  FUNC_3();
  FUNC_1(&VAR_2);
  break;
 case 130:
  FUNC_2(VAR_3, VAR_4);
  break;
 case 129:
  VAR_4->u.s.num_adapters = VAR_2.gw_num_adapters;
  break;
 case 133:
  break;
 default:
  VAR_4->error = VAR_0;
  break;
 }
}
