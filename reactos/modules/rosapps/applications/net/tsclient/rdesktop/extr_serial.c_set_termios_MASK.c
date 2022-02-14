
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct termios {int c_cflag; int c_iflag; int * c_cc; } ;
typedef int speed_t ;
struct TYPE_3__ {int baud_rate; int stop_bits; int parity; int word_length; int control; int xonoff; int * chars; scalar_t__ rts; scalar_t__ dtr; struct termios* ptermios; } ;
typedef TYPE_1__ SERIAL_DEVICE ;
typedef int NTHANDLE ;


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
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;

 int VAR_36 ;
 size_t VAR_37 ;
 size_t VAR_38 ;
 size_t VAR_39 ;
 size_t VAR_40 ;
 size_t VAR_41 ;
 int FUNC_0 (struct termios*,int) ;
 int FUNC_1 (struct termios*,int) ;
 int FUNC_2 (int ,int ,struct termios*) ;

__attribute__((used)) static void
FUNC_3(SERIAL_DEVICE * VAR_42, NTHANDLE VAR_43)
{
 speed_t VAR_44;

 struct termios *VAR_45;

 VAR_45 = VAR_42->ptermios;


 switch (VAR_42->baud_rate)
 {
  default:
   VAR_44 = VAR_14;
   break;
 }







 FUNC_0(VAR_42->ptermios, VAR_44);
 FUNC_1(VAR_42->ptermios, VAR_42->dtr ? VAR_44 : 0);


 VAR_45->c_cflag &= ~(VAR_22 | VAR_26 | VAR_27 | VAR_21 | VAR_16);
 switch (VAR_42->stop_bits)
 {
  case 128:
   VAR_45->c_cflag |= VAR_22;
   break;
  default:
   VAR_45->c_cflag &= ~VAR_22;
   break;
 }

 switch (VAR_42->parity)
 {
  case 131:
   VAR_45->c_cflag |= VAR_26;
   break;
  case 129:
   VAR_45->c_cflag |= VAR_26 | VAR_27;
   break;
  case 130:
   VAR_45->c_cflag &= ~(VAR_26 | VAR_27);
   break;
 }

 switch (VAR_42->word_length)
 {
  case 5:
   VAR_45->c_cflag |= VAR_17;
   break;
  case 6:
   VAR_45->c_cflag |= VAR_18;
   break;
  case 7:
   VAR_45->c_cflag |= VAR_19;
   break;
  default:
   VAR_45->c_cflag |= VAR_20;
   break;
 }
 if (VAR_42->control & VAR_33)
 {
  VAR_45->c_cflag |= VAR_16;
 }
 else
 {
  VAR_45->c_cflag &= ~VAR_16;
 }


 if (VAR_42->xonoff & VAR_35)
 {
  VAR_45->c_iflag |= VAR_25 | VAR_23;
 }
 if (VAR_42->xonoff & VAR_34)
 {
  VAR_45->c_iflag |= VAR_24 | VAR_23;
 }

 if ((VAR_42->xonoff & (VAR_34 | VAR_35)) == 0)
 {
  VAR_45->c_iflag &= ~VAR_25;
  VAR_45->c_iflag &= ~VAR_24;
 }

 VAR_45->c_cc[VAR_40] = VAR_42->chars[VAR_32];
 VAR_45->c_cc[VAR_41] = VAR_42->chars[VAR_31];
 VAR_45->c_cc[VAR_37] = VAR_42->chars[VAR_29];
 VAR_45->c_cc[VAR_38] = VAR_42->chars[VAR_28];
 VAR_45->c_cc[VAR_39] = VAR_42->chars[VAR_30];

 FUNC_2(VAR_43, VAR_36, VAR_45);
}
