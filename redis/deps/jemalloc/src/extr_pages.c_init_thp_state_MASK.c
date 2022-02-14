
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sys_state_madvise ;
typedef scalar_t__ ssize_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int,char**,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (char*,char const*,size_t) ;
 scalar_t__ FUNC_7 (int ,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_8(void) {
 if (!VAR_3) {
  if (FUNC_4() && VAR_5) {
   FUNC_3("<jemalloc>: no MADV_HUGEPAGE support\n");
   FUNC_0();
  }
  goto label_error;
 }

 static const char VAR_11[] = "always [madvise] never\n";
 static const char VAR_12[] = "[always] madvise never\n";
 static const char VAR_13[] = "always madvise [never]\n";
 char VAR_14[sizeof(VAR_11)];





 int VAR_15 = FUNC_5("/sys/kernel/mm/transparent_hugepage/enabled", VAR_0);

 if (VAR_15 == -1) {
  goto label_error;
 }

 ssize_t VAR_16 = FUNC_2(VAR_15, &VAR_14, sizeof(VAR_14));



 FUNC_1(VAR_15);


 if (FUNC_6(VAR_14, VAR_11, (size_t)VAR_16) == 0) {
  VAR_4 = VAR_8;
 } else if (FUNC_6(VAR_14, VAR_12, (size_t)VAR_16) == 0) {
  VAR_4 = VAR_7;
 } else if (FUNC_6(VAR_14, VAR_13, (size_t)VAR_16) == 0) {
  VAR_4 = VAR_9;
 } else {
  goto label_error;
 }
 return;
label_error:
 VAR_6 = VAR_4 = VAR_10;
}
