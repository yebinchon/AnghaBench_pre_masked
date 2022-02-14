
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 char* VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (int,struct stat*) ;
 void* FUNC_4 (int *,scalar_t__,int ,int ,int,int ) ;
 int FUNC_5 (void*,scalar_t__) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (void*,scalar_t__) ;
 int FUNC_8 (char*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_9(void)
{
 struct stat VAR_5;
 int VAR_6;
 void *VAR_7;

 VAR_6 = FUNC_6(VAR_3, VAR_1);
 if (VAR_6 < 0) {
  FUNC_2(VAR_4, "fixdep: error opening depfile: ");
  FUNC_8(VAR_3);
  FUNC_1(2);
 }
 if (FUNC_3(VAR_6, &VAR_5) < 0) {
  FUNC_2(VAR_4, "fixdep: error fstat'ing depfile: ");
  FUNC_8(VAR_3);
  FUNC_1(2);
 }
 if (VAR_5.st_size == 0) {
  FUNC_2(VAR_4, "fixdep: %s is empty\n", VAR_3);
  FUNC_0(VAR_6);
  return;
 }
 VAR_7 = FUNC_4(((void*)0), VAR_5.st_size, VAR_2, VAR_0, VAR_6, 0);
 if ((long) VAR_7 == -1) {
  FUNC_8("fixdep: mmap");
  FUNC_0(VAR_6);
  return;
 }

 FUNC_7(VAR_7, VAR_5.st_size);

 FUNC_5(VAR_7, VAR_5.st_size);

 FUNC_0(VAR_6);
}
