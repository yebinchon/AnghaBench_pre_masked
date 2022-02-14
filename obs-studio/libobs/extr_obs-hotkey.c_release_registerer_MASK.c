
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int registerer_type; int * registerer; } ;
typedef TYPE_1__ obs_hotkey_t ;







 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(obs_hotkey_t *VAR_0)
{
 switch (VAR_0->registerer_type) {
 case 131:
  break;

 case 132:
  FUNC_0(VAR_0->registerer);
  break;

 case 130:
  FUNC_1(VAR_0->registerer);
  break;

 case 129:
  FUNC_2(VAR_0->registerer);
  break;

 case 128:
  FUNC_3(VAR_0->registerer);
  break;
 }

 VAR_0->registerer = ((void*)0);
}
