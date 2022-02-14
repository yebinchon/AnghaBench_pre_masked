
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int VAR_8 ;
 int FUNC_6 (int ,int *,char*,int,char*) ;

__attribute__((used)) static void FUNC_7(zval *VAR_9, char *VAR_10, char *VAR_11, char *VAR_12, char *VAR_13, zval *VAR_14, char *VAR_15)
{
 if (FUNC_1(VAR_9) != VAR_0) {
  FUNC_4(VAR_9, VAR_6);
 }

 FUNC_2(VAR_9, "faultstring", VAR_12 ? VAR_12 : "");
 FUNC_6(VAR_8, VAR_9, "message", sizeof("message")-1, (VAR_12 ? VAR_12 : ""));

 if (VAR_11 != ((void*)0)) {
  int VAR_16 = FUNC_0(VAR_16);

  if (VAR_10) {
   FUNC_2(VAR_9, "faultcode", VAR_11);
   FUNC_2(VAR_9, "faultcodens", VAR_10);
  } else {
   if (VAR_16 == VAR_2) {
    FUNC_2(VAR_9, "faultcode", VAR_11);
    if (FUNC_5(VAR_11,"Client") == 0 ||
        FUNC_5(VAR_11,"Server") == 0 ||
        FUNC_5(VAR_11,"VersionMismatch") == 0 ||
        FUNC_5(VAR_11,"MustUnderstand") == 0) {
     FUNC_2(VAR_9, "faultcodens", VAR_3);
    }
   } else if (VAR_16 == VAR_4) {
    if (FUNC_5(VAR_11,"Client") == 0) {
     FUNC_2(VAR_9, "faultcode", "Sender");
     FUNC_2(VAR_9, "faultcodens", VAR_5);
    } else if (FUNC_5(VAR_11,"Server") == 0) {
     FUNC_2(VAR_9, "faultcode", "Receiver");
     FUNC_2(VAR_9, "faultcodens", VAR_5);
    } else if (FUNC_5(VAR_11,"VersionMismatch") == 0 ||
               FUNC_5(VAR_11,"MustUnderstand") == 0 ||
               FUNC_5(VAR_11,"DataEncodingUnknown") == 0) {
     FUNC_2(VAR_9, "faultcode", VAR_11);
     FUNC_2(VAR_9, "faultcodens", VAR_5);
    } else {
     FUNC_2(VAR_9, "faultcode", VAR_11);
    }
   }
  }
 }
 if (VAR_13 != ((void*)0)) {
  FUNC_2(VAR_9, "faultactor", VAR_13);
 }
 if (VAR_14 != ((void*)0) && FUNC_1(VAR_14) != VAR_1) {
  FUNC_3(VAR_9, "detail", VAR_14);
 }
 if (VAR_15 != ((void*)0)) {
  FUNC_2(VAR_9, "_name", VAR_15);
 }
}
