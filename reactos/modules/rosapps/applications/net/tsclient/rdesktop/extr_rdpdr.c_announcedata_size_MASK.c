
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ bloblen; int printer; int driver; int blob; } ;
struct TYPE_6__ {int num_devices; TYPE_1__* rdpdr_device; } ;
struct TYPE_5__ {scalar_t__ device_type; scalar_t__ pdevice_data; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef TYPE_3__ PRINTER ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(RDPCLIENT * VAR_1)
{
 int VAR_2, VAR_3;
 PRINTER *VAR_4;

 VAR_2 = 8;
 VAR_2 += VAR_1->num_devices * 0x14;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_devices; VAR_3++)
 {
  if (VAR_1->rdpdr_device[VAR_3].device_type == VAR_0)
  {
   VAR_4 = (PRINTER *) VAR_1->rdpdr_device[VAR_3].pdevice_data;
   VAR_4->bloblen =
    FUNC_0(VAR_4->printer, &(VAR_4->blob));

   VAR_2 += 0x18;
   VAR_2 += 2 * FUNC_1(VAR_4->driver) + 2;
   VAR_2 += 2 * FUNC_1(VAR_4->printer) + 2;
   VAR_2 += VAR_4->bloblen;
  }
 }

 return VAR_2;
}
