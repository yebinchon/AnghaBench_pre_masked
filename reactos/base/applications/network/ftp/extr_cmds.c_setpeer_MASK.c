
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (char const*,scalar_t__) ;
 char* VAR_6 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 char* FUNC_6 (char*,char) ;
 int * VAR_7 ;
 int FUNC_7 (char const*) ;
 int FUNC_8 () ;
 int VAR_8 ;
 char** VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_9 (char*,...) ;
 char* VAR_11 ;
 int FUNC_10 (int ,int *) ;
 int VAR_12 ;
 int FUNC_11 (int *,char*) ;
 size_t FUNC_12 (int *) ;
 int FUNC_13 (char*,char*,int) ;
 char* VAR_13 ;
 int VAR_14 ;

void FUNC_14(int VAR_15, const char *VAR_16[])
{
 char *VAR_17;

 if (VAR_4) {
  FUNC_9("Already connected to %s, use close first.\n",
   VAR_6);
  (void) FUNC_2(VAR_12);
  VAR_3 = -1;
  return;
 }
 if (VAR_15 < 2) {
  (void) FUNC_11(VAR_7, " ");
  FUNC_9("(to) ");
  (void) FUNC_2(VAR_12);
  (void) FUNC_3(&VAR_7[FUNC_12(VAR_7)]);
  FUNC_8();
  VAR_15 = VAR_8;
  VAR_16 = VAR_9;
 }
 if (VAR_15 > 3) {
  FUNC_9("usage: %s host-name [port]\n", VAR_16[0]);
  (void) FUNC_2(VAR_12);
  VAR_3 = -1;
  return;
 }
 if (VAR_15 > 2) {
  VAR_10 = FUNC_0(VAR_16[2]);
  if (VAR_10 <= 0) {
   FUNC_9("%s: bad port number-- %s\n", VAR_16[1], VAR_16[2]);
   FUNC_9 ("usage: %s host-name [port]\n", VAR_16[0]);
   (void) FUNC_2(VAR_12);
   VAR_3 = -1;
   return;
  }
  VAR_10 = FUNC_5(VAR_10);
 }
 VAR_17 = FUNC_4(VAR_16[1], VAR_10);
 if (VAR_17) {
  int VAR_18;
  VAR_4 = 1;
  if (VAR_2)
   (void) FUNC_7(VAR_16[1]);

  VAR_18 = VAR_14;
  if (VAR_5 == 0)
   VAR_14 = -1;
  VAR_1 = 0;
  if (FUNC_1("SYST") == VAR_0 && VAR_18) {
   register char *VAR_19, VAR_20;
   VAR_19 = FUNC_6(VAR_11+4, ' ');
   if (VAR_19 == ((void*)0))
    VAR_19 = FUNC_6(VAR_11+4, '\r');
   if (VAR_19) {
    if (VAR_19[-1] == '.')
     VAR_19--;
    VAR_20 = *VAR_19;
    *VAR_19 = '\0';
   }

   FUNC_9("Remote system type is %s.\n",
    VAR_11+4);
   if (VAR_19)
    *VAR_19 = VAR_20;
  }
  if (!FUNC_13(VAR_11, "215 UNIX Type: L8", 17)) {
   FUNC_10(0, ((void*)0));

   if (VAR_18)
       FUNC_9("Using %s mode to transfer files.\n",
    VAR_13);
  } else if (VAR_18 &&
      !FUNC_13(VAR_11, "215 TOPS20", 10)) {
   FUNC_9(
"Remember to set tenex mode when transfering binary files from this machine.\n");
  }
  VAR_14 = VAR_18;
 }
 (void) FUNC_2(VAR_12);
}
