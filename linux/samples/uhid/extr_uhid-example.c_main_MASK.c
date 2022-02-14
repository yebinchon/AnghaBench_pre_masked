
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int* c_cc; int c_lflag; } ;
struct pollfd {int fd; int events; int revents; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char const*,int) ;
 int FUNC_7 (struct pollfd*,int,int) ;
 int VAR_10 ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (int,struct termios*) ;
 int FUNC_10 (int,int ,struct termios*) ;

int FUNC_11(int VAR_11, char **VAR_12)
{
 int VAR_13;
 const char *VAR_14 = "/dev/uhid";
 struct pollfd VAR_15[2];
 int VAR_16;
 struct termios VAR_17;

 VAR_16 = FUNC_9(VAR_7, &VAR_17);
 if (VAR_16) {
  FUNC_4(VAR_10, "Cannot get tty state\n");
 } else {
  VAR_17.c_lflag &= ~VAR_2;
  VAR_17.c_cc[VAR_9] = 1;
  VAR_16 = FUNC_10(VAR_7, VAR_8, &VAR_17);
  if (VAR_16)
   FUNC_4(VAR_10, "Cannot set tty state\n");
 }

 if (VAR_11 >= 2) {
  if (!FUNC_8(VAR_12[1], "-h") || !FUNC_8(VAR_12[1], "--help")) {
   FUNC_4(VAR_10, "Usage: %s [%s]\n", VAR_12[0], VAR_14);
   return VAR_1;
  } else {
   VAR_14 = VAR_12[1];
  }
 }

 FUNC_4(VAR_10, "Open uhid-cdev %s\n", VAR_14);
 VAR_13 = FUNC_6(VAR_14, VAR_4 | VAR_3);
 if (VAR_13 < 0) {
  FUNC_4(VAR_10, "Cannot open uhid-cdev %s: %m\n", VAR_14);
  return VAR_0;
 }

 FUNC_4(VAR_10, "Create uhid device\n");
 VAR_16 = FUNC_1(VAR_13);
 if (VAR_16) {
  FUNC_0(VAR_13);
  return VAR_0;
 }

 VAR_15[0].fd = VAR_7;
 VAR_15[0].events = VAR_6;
 VAR_15[1].fd = VAR_13;
 VAR_15[1].events = VAR_6;

 FUNC_4(VAR_10, "Press 'q' to quit...\n");
 while (1) {
  VAR_16 = FUNC_7(VAR_15, 2, -1);
  if (VAR_16 < 0) {
   FUNC_4(VAR_10, "Cannot poll for fds: %m\n");
   break;
  }
  if (VAR_15[0].revents & VAR_5) {
   FUNC_4(VAR_10, "Received HUP on stdin\n");
   break;
  }
  if (VAR_15[1].revents & VAR_5) {
   FUNC_4(VAR_10, "Received HUP on uhid-cdev\n");
   break;
  }

  if (VAR_15[0].revents & VAR_6) {
   VAR_16 = FUNC_5(VAR_13);
   if (VAR_16)
    break;
  }
  if (VAR_15[1].revents & VAR_6) {
   VAR_16 = FUNC_3(VAR_13);
   if (VAR_16)
    break;
  }
 }

 FUNC_4(VAR_10, "Destroy uhid device\n");
 FUNC_2(VAR_13);
 return VAR_1;
}
