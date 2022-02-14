
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ zend_bool ;
struct TYPE_5__ {scalar_t__ s; int member_0; } ;
typedef TYPE_1__ smart_str ;
typedef int MYSQL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int const VAR_2 ;
 unsigned int const VAR_3 ;
 unsigned int const VAR_4 ;
 scalar_t__ VAR_5 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 long FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,unsigned int) ;
 char* FUNC_4 (char const* const) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,char*,int) ;
 int FUNC_8 (TYPE_1__*) ;
 unsigned int FUNC_9 (char**,int ,char*,char*,char*) ;

__attribute__((used)) static int FUNC_10(MYSQL * VAR_6, const unsigned int VAR_7, const char * const VAR_8)
{
 int VAR_9;
 zend_bool VAR_10 = VAR_1;
 smart_str VAR_11 = {0};
 if (VAR_7 & VAR_4) {
  if (VAR_11.s) {
   FUNC_7(&VAR_11, ", ", sizeof(", ") - 1);
  }
  FUNC_7(&VAR_11, "WITH CONSISTENT SNAPSHOT", sizeof("WITH CONSISTENT SNAPSHOT") - 1);
 }
 if (VAR_7 & (VAR_3 | VAR_2)) {
  if (FUNC_2(VAR_6) < 50605L) {
   FUNC_5(((void*)0), VAR_0, "This server version doesn't support 'READ WRITE' and 'READ ONLY'. Minimum 5.6.5 is required");
   VAR_10 = VAR_5;
  } else if (VAR_7 & VAR_3) {
   if (VAR_11.s) {
    FUNC_7(&VAR_11, ", ", sizeof(", ") - 1);
   }
   FUNC_7(&VAR_11, "READ WRITE", sizeof("READ WRITE") - 1);
  } else if (VAR_7 & VAR_2) {
   if (VAR_11.s) {
    FUNC_7(&VAR_11, ", ", sizeof(", ") - 1);
   }
   FUNC_7(&VAR_11, "READ ONLY", sizeof("READ ONLY") - 1);
  }
 }
 FUNC_6(&VAR_11);

 if (VAR_10 == VAR_1){
  char * VAR_12 = FUNC_4(VAR_8);
  char * VAR_13;
  unsigned int VAR_14 = FUNC_9(&VAR_13, 0, "START TRANSACTION%s %s",
            VAR_12? VAR_12:"", VAR_11.s? FUNC_0(VAR_11.s):"");

  FUNC_8(&VAR_11);
  if (VAR_12) {
   FUNC_1(VAR_12);
  }

  VAR_9 = FUNC_3(VAR_6, VAR_13, VAR_14);
  FUNC_1(VAR_13);
 }
 return VAR_9;
}
