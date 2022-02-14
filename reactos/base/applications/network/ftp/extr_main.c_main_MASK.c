
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct servent {int s_port; } ;
typedef int WSADATA ;
typedef int WORD ;
struct TYPE_4__ {char* pw_dir; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int) ;
 int VAR_15 ;
 char* VAR_16 ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_17 ;
 char* FUNC_5 () ;
 TYPE_1__* FUNC_6 (char const*) ;
 TYPE_1__* FUNC_7 (int ) ;
 struct servent* FUNC_8 (char*,char*) ;
 int FUNC_9 () ;
 char* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 char* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 TYPE_1__* VAR_26 ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int,char const**) ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int VAR_29 ;
 char* VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 char* VAR_34 ;
 int VAR_35 ;

int FUNC_13(int VAR_36, const char *VAR_37[])
{
 const char *VAR_38;
 int VAR_39;




        int VAR_40;
        WORD VAR_41;

        WSADATA VAR_42;
        struct servent *VAR_43;




        VAR_7 = VAR_3;

        VAR_41 = FUNC_0(1,1);

        VAR_40 = FUNC_1(VAR_41, &VAR_42);
        if (VAR_40 != 0)
        {
           FUNC_4(VAR_27, "Could not initialize Windows socket interface.");
           FUNC_3(1);
        }

 VAR_43 = FUNC_8("ftp", "tcp");
 if (VAR_43 == 0) {
  FUNC_4(VAR_27, "ftp: ftp/tcp: unknown service\n");
  FUNC_3(1);
 }

        VAR_24 = VAR_43->s_port;


 VAR_14 = 1;
 VAR_19 = 1;
 VAR_8 = 1;
 VAR_36--, VAR_37++;
 while (VAR_36 > 0 && **VAR_37 == '-') {
  for (VAR_38 = *VAR_37 + 1; *VAR_38; VAR_38++)
   switch (*VAR_38) {

   case 'd':
    VAR_22 |= VAR_4;
    VAR_13++;
    break;

   case 'v':
    VAR_35++;
    break;

   case 't':
    VAR_32++;
    break;

   case 'i':
    VAR_19 = 0;
    break;

   case 'n':
    VAR_8 = 0;
    break;

   case 'g':
    VAR_14 = 0;
    break;

   default:
    FUNC_4(VAR_28,
      "ftp: %c: unknown option\n", *VAR_38);
    FUNC_3(1);
   }
  VAR_36--, VAR_37++;
 }

        VAR_17 = 1;



 (void) FUNC_12(VAR_34, "ascii"), VAR_33 = VAR_6;
 (void) FUNC_12(VAR_16, "non-print"), VAR_15 = VAR_0;
 (void) FUNC_12(VAR_21, "stream"), VAR_20 = VAR_2;
 (void) FUNC_12(VAR_30, "file"), VAR_29 = VAR_5;
 (void) FUNC_12(VAR_9, "8"), VAR_10 = 8;
 if (VAR_17)
  VAR_35++;
 VAR_11 = 0;
 VAR_25 = 0;
    VAR_23 = 1;
 VAR_12 = 1;
        FUNC_12(VAR_18, "C:/");
 if (VAR_36 > 0) {
  if (FUNC_10(VAR_31))
   FUNC_3(0);


  FUNC_11(VAR_36 + 1, VAR_37 - 1);
 }
 VAR_39 = FUNC_10(VAR_31) == 0;
 if (VAR_39) {


 }
 for (;;) {
  FUNC_2(VAR_39);
  VAR_39 = 1;
 }
}
