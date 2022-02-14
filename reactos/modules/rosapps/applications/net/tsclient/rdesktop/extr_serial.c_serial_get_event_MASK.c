
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_8__ {TYPE_1__* rdpdr_device; } ;
struct TYPE_7__ {int event_rlsd; int wait_mask; int event_txempty; int event_dsr; int event_cts; scalar_t__ event_pending; } ;
struct TYPE_6__ {scalar_t__ pdevice_data; } ;
typedef TYPE_2__ SERIAL_DEVICE ;
typedef TYPE_3__ RDPCLIENT ;
typedef int NTHANDLE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int ,int ,int*) ;

BOOL
FUNC_3(RDPCLIENT * VAR_13, NTHANDLE VAR_14, uint32 * VAR_15)
{
 int VAR_16;
 SERIAL_DEVICE *VAR_17;
 int VAR_18;
 BOOL VAR_19 = VAR_0;

 *VAR_15 = 0;
 VAR_16 = FUNC_1(VAR_13, VAR_14);
 if (VAR_16 < 0)
  return VAR_0;
 FUNC_2(VAR_14, VAR_8, &VAR_18);
 if ((VAR_18 & VAR_10) != VAR_17->event_dsr)
 {
  VAR_17->event_dsr = VAR_18 & VAR_10;
  if (VAR_17->wait_mask & VAR_2)
  {
   FUNC_0(("event -> SERIAL_EV_DSR %s\n",
          (VAR_18 & VAR_10) ? "ON" : "OFF"));
   *VAR_15 |= VAR_2;
   VAR_19 = VAR_12;
  }
 }

 if ((VAR_18 & VAR_9) != VAR_17->event_cts)
 {
  VAR_17->event_cts = VAR_18 & VAR_9;
  if (VAR_17->wait_mask & VAR_1)
  {
   FUNC_0((" EVENT-> SERIAL_EV_CTS %s\n",
          (VAR_18 & VAR_9) ? "ON" : "OFF"));
   *VAR_15 |= VAR_1;
   VAR_19 = VAR_12;
  }
 }

 if (VAR_19)
  VAR_17->event_pending = 0;

 return VAR_19;
}
