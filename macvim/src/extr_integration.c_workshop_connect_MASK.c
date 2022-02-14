
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sin_port; int sun_path; void* sun_family; int sin_addr; void* sin_family; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct hostent {int h_length; int h_addr; } ;
typedef int server ;
typedef int buf ;
typedef int XtPointer ;
typedef int XtAppContext ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int,int ,int ,int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,struct sockaddr*,int) ;
 int * VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int * FUNC_6 (char*,char*) ;
 char* FUNC_7 (int ) ;
 struct hostent* FUNC_8 (int ) ;
 int VAR_10 ;
 int FUNC_9 (char*,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (void*,int ,int ) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,char,int) ;
 int FUNC_16 (char*,int,char*,...) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (int,char*,int ) ;

void FUNC_20(XtAppContext VAR_13)
{





 struct sockaddr_un VAR_14;

 char VAR_15[32];
 char * VAR_16;




 VAR_16 = FUNC_7(FUNC_0("SPRO_EDITOR_SOCKET"));
 if (VAR_16 == ((void*)0)) {
  return;
 }
 if ((VAR_12 = FUNC_10(VAR_1, VAR_5, 0)) == -1) {
  FUNC_1(FUNC_0("workshop_connect"));
  return;
 }

 VAR_14.sun_family = VAR_1;
 FUNC_11(VAR_14.sun_path, VAR_16);


 if (FUNC_5(VAR_12, (struct sockaddr *)&VAR_14, sizeof(VAR_14))) {
  if (VAR_9 == VAR_3) {
   FUNC_4(VAR_12);






   if ((VAR_12 = FUNC_10(VAR_1, VAR_5, 0)) == -1) {
    FUNC_1(FUNC_0("workshop_connect"));
    return;
   }

   if (FUNC_5(VAR_12, (struct sockaddr *)&VAR_14,
      sizeof(VAR_14))) {
    FUNC_1(FUNC_0("workshop_connect"));
    return;
   }

  } else {
   FUNC_1(FUNC_0("workshop_connect"));
   return;
  }
 }




 VAR_10 = FUNC_2(VAR_13, VAR_12, (XtPointer) VAR_6,
         VAR_11, ((void*)0));
 FUNC_16(VAR_15, sizeof(VAR_15), FUNC_0("connected %s %s %s\n"),
  FUNC_17(),
  VAR_4,
  FUNC_18());
 VAR_8 = FUNC_19(VAR_12, VAR_15, FUNC_12(VAR_15));

 FUNC_16(VAR_15, sizeof(VAR_15), FUNC_0("ack 1\n"));
 VAR_8 = FUNC_19(VAR_12, VAR_15, FUNC_12(VAR_15));
}
