
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* fileinfo; TYPE_1__* rdpdr_device; } ;
struct TYPE_6__ {int device_id; } ;
struct TYPE_5__ {int device_type; int handle; } ;
typedef TYPE_3__ RDPCLIENT ;
typedef int BOOL ;







 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL
FUNC_0(RDPCLIENT * VAR_2, int VAR_3, int VAR_4)
{
 switch (VAR_2->rdpdr_device[VAR_3].device_type)
 {
  case 131:
  case 128:
  case 130:
  case 129:
   if (VAR_2->rdpdr_device[VAR_3].handle != VAR_4)
    return VAR_0;
   break;
  case 132:
   if (VAR_2->fileinfo[VAR_4].device_id != VAR_3)
    return VAR_0;
   break;
 }
 return VAR_1;
}
