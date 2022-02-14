
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct ktermios {int c_cflag; scalar_t__* c_cc; } ;
struct tty_struct {scalar_t__ driver_data; struct ktermios termios; } ;
struct rfcomm_dev {TYPE_1__* dlc; } ;
struct TYPE_2__ {int dlci; int session; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 int FUNC_1 (int ,int,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,scalar_t__,scalar_t__,int) ;
 int FUNC_2 (struct ktermios*) ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_34, struct ktermios *VAR_35)
{
 struct ktermios *VAR_36 = &VAR_34->termios;
 int VAR_37 = FUNC_2(VAR_35);
 int VAR_38 = FUNC_2(VAR_36);

 u8 VAR_39, VAR_40, VAR_41, VAR_42, VAR_43, VAR_44;
 u16 VAR_45 = 0;

 struct rfcomm_dev *VAR_46 = (struct rfcomm_dev *) VAR_34->driver_data;

 FUNC_0("tty %p termios %p", VAR_34, VAR_35);

 if (!VAR_46 || !VAR_46->dlc || !VAR_46->dlc->session)
  return;


 if ((VAR_35->c_cflag & VAR_0) && !(VAR_36->c_cflag & VAR_0))
  FUNC_0("Turning off CRTSCTS unsupported");


 if (((VAR_35->c_cflag & VAR_3) != (VAR_36->c_cflag & VAR_3)) ||
   ((VAR_35->c_cflag & VAR_4) != (VAR_36->c_cflag & VAR_4))) {
  VAR_45 |= VAR_24;
  FUNC_0("Parity change detected.");
 }


 if (VAR_36->c_cflag & VAR_3) {
  if (VAR_36->c_cflag & VAR_4) {
   FUNC_0("Parity is ODD");
   VAR_42 = VAR_21;
  } else {
   FUNC_0("Parity is EVEN");
   VAR_42 = VAR_19;
  }
 } else {
  FUNC_0("Parity is OFF");
  VAR_42 = VAR_20;
 }


 if (VAR_35->c_cc[VAR_33] != VAR_36->c_cc[VAR_33]) {
  FUNC_0("XOFF custom");
  VAR_43 = VAR_36->c_cc[VAR_33];
  VAR_45 |= VAR_27;
 } else {
  FUNC_0("XOFF default");
  VAR_43 = VAR_31;
 }

 if (VAR_35->c_cc[VAR_32] != VAR_36->c_cc[VAR_32]) {
  FUNC_0("XON custom");
  VAR_44 = VAR_36->c_cc[VAR_32];
  VAR_45 |= VAR_26;
 } else {
  FUNC_0("XON default");
  VAR_44 = VAR_30;
 }


 if ((VAR_35->c_cflag & VAR_2) != (VAR_36->c_cflag & VAR_2))
  VAR_45 |= VAR_25;




 if (VAR_36->c_cflag & VAR_2)
  VAR_41 = VAR_29;
 else
  VAR_41 = VAR_28;


 if ((VAR_35->c_cflag & VAR_1) != (VAR_36->c_cflag & VAR_1))
  VAR_45 |= VAR_23;

 switch (VAR_36->c_cflag & VAR_1) {
 case 131:
  VAR_40 = VAR_14;
  break;
 case 130:
  VAR_40 = VAR_15;
  break;
 case 129:
  VAR_40 = VAR_16;
  break;
 case 128:
  VAR_40 = VAR_17;
  break;
 default:
  VAR_40 = VAR_17;
  break;
 }


 if (VAR_37 != VAR_38)
  VAR_45 |= VAR_22;

 switch (VAR_38) {
 case 2400:
  VAR_39 = VAR_8;
  break;
 case 4800:
  VAR_39 = VAR_10;
  break;
 case 7200:
  VAR_39 = VAR_12;
  break;
 case 9600:
  VAR_39 = VAR_13;
  break;
 case 19200:
  VAR_39 = VAR_6;
  break;
 case 38400:
  VAR_39 = VAR_9;
  break;
 case 57600:
  VAR_39 = VAR_11;
  break;
 case 115200:
  VAR_39 = VAR_5;
  break;
 case 230400:
  VAR_39 = VAR_7;
  break;
 default:

  VAR_39 = VAR_13;
  break;

 }

 if (VAR_45)
  FUNC_1(VAR_46->dlc->session, 1, VAR_46->dlc->dlci, VAR_39,
    VAR_40, VAR_41, VAR_42,
    VAR_18, VAR_43, VAR_44, VAR_45);
}
