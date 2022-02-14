
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int,int ,int ) ;
 int VAR_7 ;
 void* FUNC_2 (int *,int ,int,int ,int,int ) ;
 int FUNC_3 (void*,int ,int) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (int,char*,int) ;

__attribute__((used)) static void FUNC_6(int VAR_8)
{
 ssize_t VAR_9;
 void *VAR_10;
 int VAR_11;


 VAR_9 = FUNC_5(VAR_8, "data", 4);
 if (VAR_9 != -VAR_0) {
  FUNC_4("expected EPERM on write(), but got %d: %m\n", (int)VAR_9);
  FUNC_0();
 }


 VAR_10 = FUNC_2(((void*)0),
   VAR_7,
   VAR_5 | VAR_6,
   VAR_4,
   VAR_8,
   0);
 if (VAR_10 != VAR_3) {
  FUNC_4("mmap() didn't fail as expected\n");
  FUNC_0();
 }


 VAR_10 = FUNC_2(((void*)0),
   VAR_7,
   VAR_6,
   VAR_4,
   VAR_8,
   0);
 if (VAR_10 != VAR_3) {
  FUNC_4("mmap() didn't fail as expected\n");
  FUNC_0();
 }



 VAR_10 = FUNC_2(((void*)0),
   VAR_7,
   VAR_5,
   VAR_4,
   VAR_8,
   0);
 if (VAR_10 != VAR_3) {
  VAR_11 = FUNC_3(VAR_10, VAR_7, VAR_5 | VAR_6);
  if (VAR_11 >= 0) {
   FUNC_4("mmap()+mprotect() didn't fail as expected\n");
   FUNC_0();
  }
 }


 VAR_11 = FUNC_1(VAR_8,
        VAR_2 | VAR_1,
        0,
        VAR_7);
 if (VAR_11 >= 0) {
  FUNC_4("fallocate(PUNCH_HOLE) didn't fail as expected\n");
  FUNC_0();
 }
}
