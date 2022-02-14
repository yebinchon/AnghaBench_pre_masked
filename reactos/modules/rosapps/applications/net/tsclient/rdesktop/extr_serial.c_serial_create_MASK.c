
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32 ;
struct termios {int c_iflag; int c_lflag; int c_cflag; int c_oflag; } ;
struct TYPE_8__ {TYPE_1__* rdpdr_device; } ;
struct TYPE_7__ {int read_total_timeout_constant; scalar_t__ event_pending; scalar_t__ event_rlsd; scalar_t__ event_dsr; scalar_t__ event_cts; scalar_t__ event_txempty; struct termios* ptermios; int rts; int dtr; int word_length; int parity; int stop_bits; int baud_rate; } ;
struct TYPE_6__ {char* name; int handle; int local_path; scalar_t__ pdevice_data; } ;
typedef TYPE_2__ SERIAL_DEVICE ;
typedef TYPE_3__ RDPCLIENT ;
typedef int NTSTATUS ;
typedef int NTHANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;
 int VAR_24 ;
 int FUNC_7 (int,int ,struct termios*) ;

__attribute__((used)) static NTSTATUS
FUNC_8(RDPCLIENT * VAR_25, uint32 VAR_26, uint32 VAR_27, uint32 VAR_28, uint32 VAR_29,
       uint32 VAR_30, char *VAR_31, NTHANDLE * VAR_32)
{
 NTHANDLE VAR_33;
 SERIAL_DEVICE *VAR_34;
 struct termios *VAR_35;

 VAR_34 = (SERIAL_DEVICE *) VAR_25->rdpdr_device[VAR_26].pdevice_data;
 VAR_35 = VAR_34->ptermios;
 VAR_33 = FUNC_4(VAR_25->rdpdr_device[VAR_26].local_path, VAR_18 | VAR_16 | VAR_17);

 if (VAR_33 == -1)
 {
  FUNC_5("open");
  return VAR_21;
 }

 if (!FUNC_3(VAR_34, VAR_33))
 {
  FUNC_6("INFO: SERIAL %s access denied\n", VAR_25->rdpdr_device[VAR_26].name);
  FUNC_2(VAR_24);
  return VAR_21;
 }


 VAR_25->rdpdr_device[VAR_26].handle = VAR_33;


 FUNC_0(("INFO: SERIAL %s to %s\nINFO: speed %u baud, stop bits %u, parity %u, word length %u bits, dtr %u, rts %u\n", VAR_25->rdpdr_device[VAR_26].name, VAR_25->rdpdr_device[VAR_26].local_path, VAR_34->baud_rate, VAR_34->stop_bits, VAR_34->parity, VAR_34->word_length, VAR_34->dtr, VAR_34->rts));

 VAR_34->ptermios->c_iflag &=
  ~(VAR_9 | VAR_0 | VAR_20 | VAR_13 | VAR_11 | VAR_10 | VAR_7 | VAR_14);
 VAR_34->ptermios->c_oflag &= ~VAR_15;
 VAR_34->ptermios->c_lflag &= ~(VAR_3 | VAR_4 | VAR_6 | VAR_12 | VAR_8);
 VAR_34->ptermios->c_cflag &= ~(VAR_2 | VAR_19);
 VAR_34->ptermios->c_cflag |= VAR_1;

 FUNC_7(VAR_33, VAR_23, VAR_34->ptermios);

 VAR_34->event_txempty = 0;
 VAR_34->event_cts = 0;
 VAR_34->event_dsr = 0;
 VAR_34->event_rlsd = 0;
 VAR_34->event_pending = 0;

 *VAR_32 = VAR_33;


 if (FUNC_1(*VAR_32, VAR_5, VAR_17) == -1)
  FUNC_5("fcntl");

 VAR_34->read_total_timeout_constant = 5;

 return VAR_22;
}
