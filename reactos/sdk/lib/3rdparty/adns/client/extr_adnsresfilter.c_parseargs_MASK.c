
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char const* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(const char *const *VAR_8) {
  const char *VAR_9;
  int VAR_10;

  while ((VAR_9= *++VAR_8)) {
    if (VAR_9[0] != '-') FUNC_5("no non-option arguments are allowed");
    if (VAR_9[1] == '-') {
      if (!FUNC_3(VAR_9,"--timeout")) {
 if (!(VAR_9= *++VAR_8)) FUNC_5("--timeout needs a value");
 FUNC_2(VAR_9);
 VAR_5= 0;
      } else if (!FUNC_3(VAR_9,"--wait")) {
 VAR_5= 1;
      } else if (!FUNC_3(VAR_9,"--brackets")) {
 VAR_3= 1;
      } else if (!FUNC_3(VAR_9,"--address")) {
 VAR_0= 1;
      } else if (!FUNC_3(VAR_9,"--unchecked")) {
 VAR_7= VAR_2;
      } else if (!FUNC_3(VAR_9,"--config")) {
 if (!(VAR_9= *++VAR_8)) FUNC_5("--config needs a value");
 VAR_4= VAR_9;
      } else if (!FUNC_3(VAR_9,"--debug")) {
 VAR_6 |= VAR_1;
      } else if (!FUNC_3(VAR_9,"--help")) {
 FUNC_4(); FUNC_1(0);
      } else if (!FUNC_3(VAR_9,"--version")) {
 FUNC_0("adnsresfilter"); FUNC_1(0);
      } else {
 FUNC_5("unknown long option");
      }
    } else {
      while ((VAR_10= *++VAR_9)) {
 switch (VAR_10) {
 case 't':
   if (*++VAR_9) FUNC_2(VAR_9);
   else if ((VAR_9= *++VAR_8)) FUNC_2(VAR_9);
   else FUNC_5("-t needs a value");
   VAR_5= 0;
   VAR_9= "\0";
   break;
 case 'w':
   VAR_5= 1;
   break;
 case 'b':
   VAR_3= 1;
   break;
 case 'a':
   VAR_0= 1;
   break;
 case 'u':
   VAR_7= VAR_2;
   break;
 case 'h':
   FUNC_4();
   FUNC_1(0);
 default:
   FUNC_5("unknown short option");
 }
      }
    }
  }
}
