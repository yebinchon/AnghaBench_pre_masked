
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_8__ {void (* pUser ) (TYPE_1__*,int ) ;int thread; int os_event; scalar_t__ ClassNumber; int * pActiveClass; int id; } ;
typedef TYPE_1__ USBH_HandleTypeDef ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 (int ,int ,int ,int ,int) ;
 int VAR_7 ;

USBH_StatusTypeDef FUNC_9(USBH_HandleTypeDef *VAR_8, void (*VAR_9)(USBH_HandleTypeDef *VAR_10, uint8_t ), uint8_t VAR_11)
{

  if(VAR_8 == ((void*)0))
  {
    FUNC_1("Invalid Host handle");
    return VAR_0;
  }


  VAR_8->id = VAR_11;


  VAR_8->pActiveClass = ((void*)0);
  VAR_8->ClassNumber = 0;


  FUNC_0(VAR_8);


  if(VAR_9 != ((void*)0))
  {
    VAR_8->pUser = VAR_9;
  }
  FUNC_2(VAR_8);
  return VAR_1;
}
