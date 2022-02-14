
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int,int *,size_t) ;
 int * VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static bool
FUNC_7(bool VAR_4) {
 bool VAR_5;
 int VAR_6;

 FUNC_0(VAR_1);





 {
  int VAR_7 = FUNC_5();

  VAR_6 = FUNC_6("/proc/%d/task/%d/maps", VAR_7, VAR_7);
  if (VAR_6 == -1) {
   VAR_6 = FUNC_6("/proc/%d/maps", VAR_7);
  }
 }

 if (VAR_6 != -1) {
  ssize_t VAR_8;

  if (FUNC_4(VAR_4, "\nMAPPED_LIBRARIES:\n") &&
      VAR_4) {
   VAR_5 = 1;
   goto label_return;
  }
  VAR_8 = 0;
  do {
   VAR_3 += VAR_8;
   if (VAR_3 == VAR_0) {

    if (FUNC_3(VAR_4) &&
        VAR_4) {
     VAR_5 = 1;
     goto label_return;
    }
   }
   VAR_8 = FUNC_2(VAR_6,
       &VAR_2[VAR_3], VAR_0
       - VAR_3);
  } while (VAR_8 > 0);
 } else {
  VAR_5 = 1;
  goto label_return;
 }

 VAR_5 = 0;
label_return:
 if (VAR_6 != -1) {
  FUNC_1(VAR_6);
 }
 return VAR_5;
}
