
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int list_of_clients ;
struct TYPE_4__ {int member_0; TYPE_2__ const* member_1; } ;
typedef TYPE_1__ iot_timer_clients_list_t ;
struct TYPE_5__ {int member_1; int member_0; } ;
typedef TYPE_2__ iot_timer_client_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;

 int VAR_1 ;


 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *) ;


 int FUNC_4 (TYPE_1__ const*) ;
 int VAR_2 ;


__attribute__((used)) static void FUNC_5(void)
{
  uint32_t VAR_3;

  static const iot_timer_client_t VAR_4[] =
  {
    {128, 131},




  };


  static const iot_timer_clients_list_t VAR_5 =
  {
    (sizeof(VAR_4) / sizeof(iot_timer_client_t)),
    &(VAR_4[0]),
  };


  VAR_3 = FUNC_4(&VAR_5);
  FUNC_0(VAR_3);


  VAR_3 = FUNC_3(VAR_2, FUNC_1(VAR_1, VAR_0), ((void*)0));


  FUNC_0(VAR_3);
}
