
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef char zend_string ;
typedef scalar_t__ time_t ;
struct timeval {int tv_sec; } ;
struct TYPE_8__ {char* s; int member_0; } ;
typedef TYPE_1__ smart_str ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_9 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct timeval*,int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (int *,int ,char*,...) ;
 char* FUNC_7 (char*,int,scalar_t__,int ) ;
 char* FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 char* FUNC_11 (char*,int) ;
 int FUNC_12 (int ,int,int ,int ) ;
 int VAR_18 ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*,char*) ;
 int FUNC_15 (TYPE_1__*,char) ;
 int FUNC_16 (TYPE_1__*,char*,int) ;
 int FUNC_17 (TYPE_1__*,char*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*,int ) ;

__attribute__((used)) static int FUNC_21(void)
{
 smart_str VAR_19 = {0};
 zend_string *VAR_20 = ((void*)0);
 zend_string *VAR_21, *VAR_22;

 if (FUNC_1(VAR_16)) {
  const char *VAR_23 = FUNC_8();
  int VAR_24 = FUNC_9();

  if (VAR_23) {
   FUNC_6(((void*)0), VAR_7, "Cannot send session cookie - headers already sent by (output started at %s:%d)", VAR_23, VAR_24);
  } else {
   FUNC_6(((void*)0), VAR_7, "Cannot send session cookie - headers already sent");
  }
  return VAR_8;
 }


 VAR_21 = FUNC_11(FUNC_0(VAR_18), FUNC_19(FUNC_0(VAR_18)));
 VAR_22 = FUNC_11(FUNC_3(FUNC_0(VAR_17)), FUNC_2(FUNC_0(VAR_17)));

 FUNC_16(&VAR_19, "Set-Cookie: ", sizeof("Set-Cookie: ")-1);
 FUNC_16(&VAR_19, FUNC_3(VAR_21), FUNC_2(VAR_21));
 FUNC_15(&VAR_19, '=');
 FUNC_16(&VAR_19, FUNC_3(VAR_22), FUNC_2(VAR_22));

 FUNC_20(VAR_21, 0);
 FUNC_20(VAR_22, 0);

 if (FUNC_0(VAR_12) > 0) {
  struct timeval VAR_25;
  time_t VAR_26;

  FUNC_5(&VAR_25, ((void*)0));
  VAR_26 = VAR_25.tv_sec + FUNC_0(VAR_12);

  if (VAR_26 > 0) {
   VAR_20 = FUNC_7("D, d-M-Y H:i:s T", sizeof("D, d-M-Y H:i:s T")-1, VAR_26, 0);
   FUNC_17(&VAR_19, VAR_1);
   FUNC_16(&VAR_19, FUNC_3(VAR_20), FUNC_2(VAR_20));
   FUNC_20(VAR_20, 0);

   FUNC_17(&VAR_19, VAR_3);
   FUNC_14(&VAR_19, FUNC_0(VAR_12));
  }
 }

 if (FUNC_0(VAR_13)[0]) {
  FUNC_17(&VAR_19, VAR_4);
  FUNC_17(&VAR_19, FUNC_0(VAR_13));
 }

 if (FUNC_0(VAR_10)[0]) {
  FUNC_17(&VAR_19, VAR_0);
  FUNC_17(&VAR_19, FUNC_0(VAR_10));
 }

 if (FUNC_0(VAR_15)) {
  FUNC_17(&VAR_19, VAR_6);
 }

 if (FUNC_0(VAR_11)) {
  FUNC_17(&VAR_19, VAR_2);
 }

 if (FUNC_0(VAR_14)[0]) {
     FUNC_17(&VAR_19, VAR_5);
     FUNC_17(&VAR_19, FUNC_0(VAR_14));
    }

 FUNC_13(&VAR_19);

 FUNC_10();


 FUNC_12(FUNC_4(FUNC_3(VAR_19.s), FUNC_2(VAR_19.s)), FUNC_2(VAR_19.s), 0, 0);
 FUNC_18(&VAR_19);

 return VAR_9;
}
