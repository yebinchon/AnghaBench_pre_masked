
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_8__ {TYPE_1__* rdpdr_device; } ;
struct TYPE_7__ {int read_total_timeout_multiplier; int read_total_timeout_constant; int read_interval_timeout; } ;
struct TYPE_6__ {scalar_t__ device_type; scalar_t__ pdevice_data; } ;
typedef TYPE_2__ SERIAL_DEVICE ;
typedef TYPE_3__ RDPCLIENT ;
typedef int NTHANDLE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ) ;

BOOL
FUNC_1(RDPCLIENT * VAR_3, NTHANDLE VAR_4, uint32 VAR_5, uint32 * VAR_6, uint32 * VAR_7)
{
 int VAR_8;
 SERIAL_DEVICE *VAR_9;

 VAR_8 = FUNC_0(VAR_3, VAR_4);
 if (VAR_8 < 0)
  return VAR_2;

 if (VAR_3->rdpdr_device[VAR_8].device_type != VAR_0)
 {
  return VAR_1;
 }

 VAR_9 = (SERIAL_DEVICE *) VAR_3->rdpdr_device[VAR_8].pdevice_data;

 *VAR_6 =
  VAR_9->read_total_timeout_multiplier * VAR_5 +
  VAR_9->read_total_timeout_constant;
 *VAR_7 = VAR_9->read_interval_timeout;
 return VAR_2;
}
