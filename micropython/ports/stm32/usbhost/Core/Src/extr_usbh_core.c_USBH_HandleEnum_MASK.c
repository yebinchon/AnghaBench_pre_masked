
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int USBH_StatusTypeDef ;
struct TYPE_14__ {int iSerialNumber; int iProduct; int iManufacturer; int idVendor; int idProduct; int bMaxPacketSize; } ;
struct TYPE_13__ {int wTotalLength; } ;
struct TYPE_15__ {scalar_t__ Data; TYPE_3__ DevDesc; TYPE_2__ CfgDesc; int speed; int address; } ;
struct TYPE_12__ {int pipe_size; int pipe_out; int pipe_in; } ;
struct TYPE_16__ {int EnumState; int os_event; TYPE_4__ device; TYPE_1__ Control; } ;
typedef TYPE_5__ USBH_HandleTypeDef ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_5__*,int) ;
 int FUNC_3 (TYPE_5__*,int ,scalar_t__,int) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_5__*,int ,int,int ,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_5__*,int ) ;
 int FUNC_6 (char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_8 (USBH_HandleTypeDef *VAR_7)
{
  USBH_StatusTypeDef VAR_8 = VAR_0;

  switch (VAR_7->EnumState)
  {
  case 129:

    if ( FUNC_2(VAR_7, 8) == VAR_3)
    {
      VAR_7->Control.pipe_size = VAR_7->device.DevDesc.bMaxPacketSize;

      VAR_7->EnumState = 133;


      FUNC_4 (VAR_7,
                           VAR_7->Control.pipe_in,
                           0x80,
                           VAR_7->device.address,
                           VAR_7->device.speed,
                           VAR_2,
                           VAR_7->Control.pipe_size);


      FUNC_4 (VAR_7,
                           VAR_7->Control.pipe_out,
                           0x00,
                           VAR_7->device.address,
                           VAR_7->device.speed,
                           VAR_2,
                           VAR_7->Control.pipe_size);

    }
    break;

  case 133:

    if ( FUNC_2(VAR_7, VAR_6)== VAR_3)
    {
      FUNC_6("PID: %xh", VAR_7->device.DevDesc.idProduct );
      FUNC_6("VID: %xh", VAR_7->device.DevDesc.idVendor );

      VAR_7->EnumState = 128;

    }
    break;

  case 128:

    if ( FUNC_5(VAR_7, VAR_1) == VAR_3)
    {
      FUNC_0(2);
      VAR_7->device.address = VAR_1;


      FUNC_6("Address (#%d) assigned.", VAR_7->device.address);
      VAR_7->EnumState = 135;


      FUNC_4 (VAR_7,
                           VAR_7->Control.pipe_in,
                           0x80,
                           VAR_7->device.address,
                           VAR_7->device.speed,
                           VAR_2,
                           VAR_7->Control.pipe_size);


      FUNC_4 (VAR_7,
                           VAR_7->Control.pipe_out,
                           0x00,
                           VAR_7->device.address,
                           VAR_7->device.speed,
                           VAR_2,
                           VAR_7->Control.pipe_size);
    }
    break;

  case 135:

    if ( FUNC_1(VAR_7,
                          VAR_5) == VAR_3)
    {
      VAR_7->EnumState = 134;
    }
    break;

  case 134:

    if (FUNC_1(VAR_7,
                         VAR_7->device.CfgDesc.wTotalLength) == VAR_3)
    {
      VAR_7->EnumState = 132;
    }
    break;

  case 132:
    if (VAR_7->device.DevDesc.iManufacturer != 0)
    {

      if ( FUNC_3(VAR_7,
                               VAR_7->device.DevDesc.iManufacturer,
                                VAR_7->device.Data ,
                               0xff) == VAR_3)
      {

        FUNC_6("Manufacturer : %s", (char *)VAR_7->device.Data);
        VAR_7->EnumState = 131;




      }
    }
    else
    {
     FUNC_6("Manufacturer : N/A");
     VAR_7->EnumState = 131;



    }
    break;

  case 131:
    if (VAR_7->device.DevDesc.iProduct != 0)
    {
      if ( FUNC_3(VAR_7,
                               VAR_7->device.DevDesc.iProduct,
                               VAR_7->device.Data,
                               0xff) == VAR_3)
      {

        FUNC_6("Product : %s", (char *)VAR_7->device.Data);
        VAR_7->EnumState = 130;
      }
    }
    else
    {
      FUNC_6("Product : N/A");
      VAR_7->EnumState = 130;



    }
    break;

  case 130:
    if (VAR_7->device.DevDesc.iSerialNumber != 0)
    {
      if ( FUNC_3(VAR_7,
                               VAR_7->device.DevDesc.iSerialNumber,
                               VAR_7->device.Data,
                               0xff) == VAR_3)
      {

         FUNC_6("Serial Number : %s", (char *)VAR_7->device.Data);
        VAR_8 = VAR_3;
      }
    }
    else
    {
      FUNC_6("Serial Number : N/A");
      VAR_8 = VAR_3;



    }
    break;

  default:
    break;
  }
  return VAR_8;
}
