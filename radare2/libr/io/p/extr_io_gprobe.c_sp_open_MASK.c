
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct termios {int c_cflag; int c_iflag; scalar_t__* c_cc; scalar_t__ c_oflag; scalar_t__ c_lflag; int member_0; } ;
struct TYPE_5__ {scalar_t__ WriteTotalTimeoutConstant; scalar_t__ WriteTotalTimeoutMultiplier; scalar_t__ ReadTotalTimeoutConstant; scalar_t__ ReadTotalTimeoutMultiplier; scalar_t__ ReadIntervalTimeout; } ;
struct gport {char* name; scalar_t__ hdl; int fd; void* wait_running; void* writing; TYPE_2__ timeouts; } ;
struct TYPE_4__ {int ByteSize; void* fOutX; void* fInX; void* fOutxDsrFlow; int fDtrControl; void* fOutxCtsFlow; int fRtsControl; int StopBits; int Parity; int BaudRate; void* fAbortOnError; void* fNull; void* fErrorChar; void* fDsrSensitivity; int fBinary; } ;
typedef int LPTSTR ;
typedef int DWORD ;
typedef TYPE_1__ DCB ;
typedef int COMSTAT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int,int ,int ,int ,int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_17 ;
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
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_5 (scalar_t__,TYPE_2__*) ;
 int VAR_30 ;
 int VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 int FUNC_6 (struct termios*,int ) ;
 int FUNC_7 (struct termios*,int ) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*,int,int ) ;
 int FUNC_11 (char*) ;
 int VAR_34 ;
 int FUNC_12 (struct gport*) ;
 int FUNC_13 (struct gport*) ;
 int FUNC_14 (char*,char*,char*) ;
 scalar_t__ FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (int ,struct termios*) ;
 scalar_t__ FUNC_17 (int ,int ,struct termios*) ;
 int VAR_35 ;
 int VAR_36 ;

__attribute__((used)) static int FUNC_18 (struct gport *VAR_37) {
 struct termios VAR_38 = {0};

 if ((VAR_37->fd = FUNC_10 (VAR_37->name, VAR_25 | VAR_24 | VAR_26, 0)) < 0) {
  return -1;
 }

 if (FUNC_16 (VAR_37->fd, &VAR_38) != 0) {
  FUNC_13 (VAR_37);
  return -1;
 }

 FUNC_7 (&VAR_38, VAR_0);
 FUNC_6 (&VAR_38, VAR_0);

 VAR_38.c_cflag = (VAR_38.c_cflag & ~VAR_6) | VAR_5;
 VAR_38.c_iflag &= ~VAR_16;
 VAR_38.c_lflag = 0;
 VAR_38.c_oflag = 0;
 VAR_38.c_cc[VAR_32] = 0;
 VAR_38.c_cc[VAR_33] = 0;
 VAR_38.c_iflag &= ~(VAR_20 | VAR_19 | VAR_18);

 VAR_38.c_cflag |= (VAR_2 | VAR_3);
 VAR_38.c_cflag &= ~(VAR_27 | VAR_28);
 VAR_38.c_cflag &= ~VAR_7;



 VAR_38.c_cflag &= ~020000000000;


 if (FUNC_17 (VAR_37->fd, VAR_30, &VAR_38) != 0) {
  return -1;
 }

 return 0;

}
