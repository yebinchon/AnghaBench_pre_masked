
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int printer_fp; } ;
struct TYPE_7__ {TYPE_1__* rdpdr_device; } ;
struct TYPE_6__ {scalar_t__ handle; TYPE_3__* pdevice_data; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef TYPE_3__ PRINTER ;
typedef int NTSTATUS ;
typedef int NTHANDLE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static NTSTATUS
FUNC_2(RDPCLIENT * VAR_1, NTHANDLE VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 >= 0)
 {
  PRINTER *VAR_4 = VAR_1->rdpdr_device[VAR_3].pdevice_data;
  if (VAR_4)
   FUNC_1(VAR_4->printer_fp);
  VAR_1->rdpdr_device[VAR_3].handle = 0;
 }
 return VAR_0;
}
