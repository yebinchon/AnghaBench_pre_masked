
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_2 (int *,int ,int,int ,int,int ) ;
 int FUNC_3 (void*,int ,int) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,char*,int) ;

__attribute__((used)) static void FUNC_7(int VAR_8)
{
 ssize_t VAR_9;
 void *VAR_10;
 int VAR_11;





 if (!VAR_6) {

  VAR_9 = FUNC_6(VAR_8, "\0\0\0\0", 4);
  if (VAR_9 != 4) {
   FUNC_5("write() failed: %m\n");
   FUNC_0();
  }
 }


 VAR_10 = FUNC_2(((void*)0),
   VAR_7,
   VAR_4 | VAR_5,
   VAR_3,
   VAR_8,
   0);
 if (VAR_10 == VAR_2) {
  FUNC_5("mmap() failed: %m\n");
  FUNC_0();
 }
 *(char *)VAR_10 = 0;
 FUNC_4(VAR_10, VAR_7);


 VAR_10 = FUNC_2(((void*)0),
   VAR_7,
   VAR_5,
   VAR_3,
   VAR_8,
   0);
 if (VAR_10 == VAR_2) {
  FUNC_5("mmap() failed: %m\n");
  FUNC_0();
 }
 *(char *)VAR_10 = 0;
 FUNC_4(VAR_10, VAR_7);



 VAR_10 = FUNC_2(((void*)0),
   VAR_7,
   VAR_4,
   VAR_3,
   VAR_8,
   0);
 if (VAR_10 == VAR_2) {
  FUNC_5("mmap() failed: %m\n");
  FUNC_0();
 }

 VAR_11 = FUNC_3(VAR_10, VAR_7, VAR_4 | VAR_5);
 if (VAR_11 < 0) {
  FUNC_5("mprotect() failed: %m\n");
  FUNC_0();
 }

 *(char *)VAR_10 = 0;
 FUNC_4(VAR_10, VAR_7);


 VAR_11 = FUNC_1(VAR_8,
        VAR_1 | VAR_0,
        0,
        VAR_7);
 if (VAR_11 < 0) {
  FUNC_5("fallocate(PUNCH_HOLE) failed: %m\n");
  FUNC_0();
 }
}
