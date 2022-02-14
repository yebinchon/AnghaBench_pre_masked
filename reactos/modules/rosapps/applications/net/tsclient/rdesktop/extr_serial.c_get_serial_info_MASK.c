
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* rdpdr_device; } ;
struct TYPE_4__ {scalar_t__ handle; scalar_t__ pdevice_data; } ;
typedef int SERIAL_DEVICE ;
typedef TYPE_2__ RDPCLIENT ;
typedef scalar_t__ NTHANDLE ;


 int VAR_0 ;

__attribute__((used)) static SERIAL_DEVICE *
FUNC_0(RDPCLIENT * VAR_1, NTHANDLE VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
 {
  if (VAR_2 == VAR_1->rdpdr_device[VAR_3].handle)
   return (SERIAL_DEVICE *) VAR_1->rdpdr_device[VAR_3].pdevice_data;
 }
 return ((void*)0);
}
