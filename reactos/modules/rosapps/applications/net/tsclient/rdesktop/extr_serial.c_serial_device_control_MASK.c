
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct termios {int dummy; } ;
struct TYPE_5__ {int baud_rate; int queue_in_size; int queue_out_size; int control; int xonoff; int onlimit; int offlimit; int read_interval_timeout; int read_total_timeout_multiplier; int read_total_timeout_constant; int write_total_timeout_multiplier; int write_total_timeout_constant; int wait_mask; int dtr; int rts; int event_pending; int chars; int word_length; int parity; int stop_bits; struct termios* ptermios; } ;
typedef int STREAM ;
typedef TYPE_1__ SERIAL_DEVICE ;
typedef int RDPCLIENT ;
typedef int NTSTATUS ;
typedef int NTHANDLE ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
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
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (int *,int ,int,int ) ;
 int FUNC_14 (int *,int ,int*) ;
 int FUNC_15 (int *,int ,int *,int,int ,int*) ;
 int FUNC_16 (TYPE_1__*,int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (char*,int) ;

__attribute__((used)) static NTSTATUS
FUNC_21(RDPCLIENT * VAR_28, NTHANDLE VAR_29, uint32 VAR_30, STREAM VAR_31, STREAM VAR_32)
{
 int VAR_33, VAR_34;
 uint32 VAR_35, VAR_36;
 uint8 VAR_37;
 SERIAL_DEVICE *VAR_38;
 struct termios *VAR_39;

 if ((VAR_30 >> 16) != VAR_0)
  return VAR_12;

 VAR_38 = FUNC_1(VAR_28, VAR_29);
 VAR_39 = VAR_38->ptermios;


 VAR_30 >>= 2;
 VAR_30 &= 0xfff;

 switch (VAR_30)
 {
  case 141:
   FUNC_5(VAR_31, VAR_38->baud_rate);
   FUNC_16(VAR_38, VAR_29);
   FUNC_0(("serial_ioctl -> SERIAL_SET_BAUD_RATE %d\n",
          VAR_38->baud_rate));
   break;
  case 152:
   FUNC_10(VAR_32, VAR_38->baud_rate);
   FUNC_0(("serial_ioctl -> SERIAL_GET_BAUD_RATE %d\n",
          VAR_38->baud_rate));
   break;
  case 134:
   FUNC_5(VAR_31, VAR_38->queue_in_size);
   FUNC_5(VAR_31, VAR_38->queue_out_size);
   FUNC_0(("serial_ioctl -> SERIAL_SET_QUEUE_SIZE in %d out %d\n",
          VAR_38->queue_in_size, VAR_38->queue_out_size));
   break;
  case 135:
   FUNC_6(VAR_31, VAR_38->stop_bits);
   FUNC_6(VAR_31, VAR_38->parity);
   FUNC_6(VAR_31, VAR_38->word_length);
   FUNC_16(VAR_38, VAR_29);
   FUNC_0(("serial_ioctl -> SERIAL_SET_LINE_CONTROL stop %d parity %d word %d\n", VAR_38->stop_bits, VAR_38->parity, VAR_38->word_length));
   break;
  case 148:
   FUNC_0(("serial_ioctl -> SERIAL_GET_LINE_CONTROL\n"));
   FUNC_11(VAR_32, VAR_38->stop_bits);
   FUNC_11(VAR_32, VAR_38->parity);
   FUNC_11(VAR_32, VAR_38->word_length);
   break;
  case 144:
   FUNC_0(("serial_ioctl -> SERIAL_IMMEDIATE_CHAR\n"));
   FUNC_6(VAR_31, VAR_37);
   FUNC_15(VAR_28, VAR_29, &VAR_37, 1, 0, &VAR_35);
   break;
  case 153:
   FUNC_0(("serial_ioctl -> SERIAL_CONFIG_SIZE\n"));
   FUNC_10(VAR_32, 0);
   break;
  case 151:
   FUNC_0(("serial_ioctl -> SERIAL_GET_CHARS\n"));
   FUNC_12(VAR_32, VAR_38->chars, 6);
   break;
  case 138:
   FUNC_0(("serial_ioctl -> SERIAL_SET_CHARS\n"));
   FUNC_7(VAR_31, VAR_38->chars, 6);



   FUNC_16(VAR_38, VAR_29);
   break;
  case 149:
   FUNC_0(("serial_ioctl -> SERIAL_GET_HANDFLOW\n"));
   FUNC_2(VAR_38, VAR_29);
   FUNC_10(VAR_32, VAR_38->control);
   FUNC_10(VAR_32, VAR_38->xonoff);
   FUNC_10(VAR_32, VAR_38->onlimit);
   FUNC_10(VAR_32, VAR_38->offlimit);
   break;
  case 136:
   FUNC_5(VAR_31, VAR_38->control);
   FUNC_5(VAR_31, VAR_38->xonoff);
   FUNC_5(VAR_31, VAR_38->onlimit);
   FUNC_5(VAR_31, VAR_38->offlimit);
   FUNC_0(("serial_ioctl -> SERIAL_SET_HANDFLOW %x %x %x %x\n",
          VAR_38->control, VAR_38->xonoff, VAR_38->onlimit,
          VAR_38->onlimit));
   FUNC_16(VAR_38, VAR_29);
   break;
  case 132:
   FUNC_4(VAR_31, VAR_38->read_interval_timeout);
   FUNC_4(VAR_31, VAR_38->read_total_timeout_multiplier);
   FUNC_4(VAR_31, VAR_38->read_total_timeout_constant);
   FUNC_4(VAR_31, VAR_38->write_total_timeout_multiplier);
   FUNC_4(VAR_31, VAR_38->write_total_timeout_constant);
   FUNC_0(("serial_ioctl -> SERIAL_SET_TIMEOUTS read timeout %d %d %d\n",
          VAR_38->read_interval_timeout,
          VAR_38->read_total_timeout_multiplier,
          VAR_38->read_total_timeout_constant));
   break;
  case 146:
   FUNC_0(("serial_ioctl -> SERIAL_GET_TIMEOUTS read timeout %d %d %d\n",
          VAR_38->read_interval_timeout,
          VAR_38->read_total_timeout_multiplier,
          VAR_38->read_total_timeout_constant));

   FUNC_9(VAR_32, VAR_38->read_interval_timeout);
   FUNC_9(VAR_32, VAR_38->read_total_timeout_multiplier);
   FUNC_9(VAR_32, VAR_38->read_total_timeout_constant);
   FUNC_9(VAR_32, VAR_38->write_total_timeout_multiplier);
   FUNC_9(VAR_32, VAR_38->write_total_timeout_constant);
   break;
  case 145:
   FUNC_0(("serial_ioctl -> SERIAL_GET_WAIT_MASK %X\n",
          VAR_38->wait_mask));
   FUNC_9(VAR_32, VAR_38->wait_mask);
   break;
  case 131:
   FUNC_4(VAR_31, VAR_38->wait_mask);
   FUNC_0(("serial_ioctl -> SERIAL_SET_WAIT_MASK %X\n",
          VAR_38->wait_mask));
   break;
  case 137:
   FUNC_0(("serial_ioctl -> SERIAL_SET_DTR\n"));
   FUNC_8(VAR_29, VAR_19, &VAR_35);
   VAR_35 |= VAR_24;
   FUNC_8(VAR_29, VAR_20, &VAR_35);
   VAR_38->dtr = 1;
   break;
  case 155:
   FUNC_0(("serial_ioctl -> SERIAL_CLR_DTR\n"));
   FUNC_8(VAR_29, VAR_19, &VAR_35);
   VAR_35 &= ~VAR_24;
   FUNC_8(VAR_29, VAR_20, &VAR_35);
   VAR_38->dtr = 0;
   break;
  case 133:
   FUNC_0(("serial_ioctl -> SERIAL_SET_RTS\n"));
   FUNC_8(VAR_29, VAR_19, &VAR_35);
   VAR_35 |= VAR_26;
   FUNC_8(VAR_29, VAR_20, &VAR_35);
   VAR_38->rts = 1;
   break;
  case 154:
   FUNC_0(("serial_ioctl -> SERIAL_CLR_RTS\n"));
   FUNC_8(VAR_29, VAR_19, &VAR_35);
   VAR_35 &= ~VAR_26;
   FUNC_8(VAR_29, VAR_20, &VAR_35);
   VAR_38->rts = 0;
   break;
  case 147:
   VAR_36 = 0;
   FUNC_0(("serial_ioctl -> SERIAL_GET_MODEMSTATUS %X\n", VAR_36));
   FUNC_10(VAR_32, VAR_36);
   break;
  case 150:
   FUNC_10(VAR_32, 0);
   FUNC_10(VAR_32, 0);

   VAR_35 = 0;



   FUNC_10(VAR_32, VAR_35);
   if (VAR_35)
    FUNC_0(("serial_ioctl -> SERIAL_GET_COMMSTATUS in queue %d\n",
           VAR_35));

   VAR_35 = 0;



   FUNC_10(VAR_32, VAR_35);
   if (VAR_35)
    FUNC_0(("serial_ioctl -> SERIAL_GET_COMMSTATUS out queue %d\n", VAR_35));

   FUNC_11(VAR_32, 0);
   FUNC_11(VAR_32, 0);
   break;
  case 143:
   FUNC_4(VAR_31, VAR_34);
   FUNC_0(("serial_ioctl -> SERIAL_PURGE purge_mask %X\n", VAR_34));
   VAR_33 = 0;
   if (VAR_34 & VAR_10)
    VAR_33 |= VAR_17;
   if (VAR_34 & VAR_8)
    VAR_33 |= VAR_15;
   if (VAR_33 != 0)
    FUNC_18(VAR_29, VAR_33);
   if (VAR_34 & VAR_9)
    FUNC_13(VAR_28, VAR_29, 4, VAR_11);
   if (VAR_34 & VAR_7)
    FUNC_13(VAR_28, VAR_29, 3, VAR_11);
   break;
  case 128:
   FUNC_0(("serial_ioctl -> SERIAL_WAIT_ON_MASK %X\n",
          VAR_38->wait_mask));
   VAR_38->event_pending = 1;
   if (FUNC_14(VAR_28, VAR_29, &VAR_35))
   {
    FUNC_0(("WAIT end  event = %x\n", VAR_35));
    FUNC_10(VAR_32, VAR_35);
    break;
   }
   return VAR_13;
   break;
  case 139:
   FUNC_0(("serial_ioctl -> SERIAL_SET_BREAK_ON\n"));
   FUNC_19(VAR_29, 0);
   break;
  case 142:
   FUNC_0(("serial_ioctl -> SERIAL_RESET_DEVICE\n"));
   break;
  case 140:
   FUNC_0(("serial_ioctl -> SERIAL_SET_BREAK_OFF\n"));
   break;
  case 130:
   FUNC_0(("serial_ioctl -> SERIAL_SET_XOFF\n"));
   break;
  case 129:
   FUNC_0(("serial_ioctl -> SERIAL_SET_XON\n"));
   FUNC_17(VAR_29, VAR_16);
   break;
  default:
   FUNC_20("SERIAL IOCTL %d\n", VAR_30);
   return VAR_12;
 }

 return VAR_14;
}
