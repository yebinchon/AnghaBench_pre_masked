
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char uint8 ;
typedef int uint32 ;
struct TYPE_13__ {int bloblen; char* blob; int printer; int driver; int default_printer; } ;
struct TYPE_11__ {int channel; } ;
struct TYPE_12__ {int num_devices; TYPE_2__ rdpdr; TYPE_1__* rdpdr_device; } ;
struct TYPE_10__ {int device_type; char* name; scalar_t__ pdevice_data; } ;
typedef int STREAM ;
typedef TYPE_3__ RDPCLIENT ;
typedef TYPE_4__ PRINTER ;



 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void
FUNC_12(RDPCLIENT * VAR_0)
{

 uint8 VAR_1[4] = "rDAD";
 uint32 VAR_2, VAR_3, VAR_4;
 int VAR_5;
 STREAM VAR_6;
 PRINTER *VAR_7;

 VAR_6 = FUNC_1(VAR_0, VAR_0->rdpdr.channel, FUNC_0(VAR_0));
 FUNC_5(VAR_6, VAR_1, 4);
 FUNC_4(VAR_6, VAR_0->num_devices);

 for (VAR_5 = 0; VAR_5 < VAR_0->num_devices; VAR_5++)
 {
  FUNC_4(VAR_6, VAR_0->rdpdr_device[VAR_5].device_type);
  FUNC_4(VAR_6, VAR_5);


  FUNC_6(VAR_6, VAR_0->rdpdr_device[VAR_5].name, 8);

  switch (VAR_0->rdpdr_device[VAR_5].device_type)
  {
   case 128:
    VAR_7 = (PRINTER *) VAR_0->rdpdr_device[VAR_5].pdevice_data;

    VAR_2 = 2 * FUNC_10(VAR_7->driver) + 2;
    VAR_3 = 2 * FUNC_10(VAR_7->printer) + 2;
    VAR_4 = VAR_7->bloblen;

    FUNC_4(VAR_6, 24 + VAR_2 + VAR_3 + VAR_4);
    FUNC_4(VAR_6, VAR_7->default_printer ? 2 : 0);
    FUNC_7(VAR_6, 8);
    FUNC_4(VAR_6, VAR_2);
    FUNC_4(VAR_6, VAR_3);
    FUNC_4(VAR_6, VAR_4);
    FUNC_8(VAR_0, VAR_6, VAR_7->driver, VAR_2 - 2);
    FUNC_8(VAR_0, VAR_6, VAR_7->printer, VAR_3 - 2);
    FUNC_5(VAR_6, VAR_7->blob, VAR_4);

    if (VAR_7->blob)
     FUNC_11(VAR_7->blob);
    break;
   default:
    FUNC_3(VAR_6, 0);
  }
 }
 FUNC_9(VAR_6);
 FUNC_2(VAR_0, VAR_6, VAR_0->rdpdr.channel);
}
