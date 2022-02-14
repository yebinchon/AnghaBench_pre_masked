
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int USBH_StatusTypeDef ;
struct TYPE_7__ {int pipe_out; int pipe_in; } ;
struct TYPE_8__ {TYPE_1__ Control; } ;
typedef TYPE_2__ USBH_HandleTypeDef ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;

USBH_StatusTypeDef FUNC_3 (USBH_HandleTypeDef *VAR_2)
{

  FUNC_2(VAR_2);


  FUNC_1 (VAR_2, VAR_0);


  FUNC_0 (VAR_2, VAR_2->Control.pipe_in);
  FUNC_0 (VAR_2, VAR_2->Control.pipe_out);

  return VAR_1;
}
