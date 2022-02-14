
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int buf ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 void* FUNC_1 (int *,int ,int,int ,int,int ) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char*,int) ;

__attribute__((used)) static void FUNC_5(int VAR_5)
{
 char VAR_6[16];
 void *VAR_7;
 ssize_t VAR_8;

 VAR_8 = FUNC_4(VAR_5, VAR_6, sizeof(VAR_6));
 if (VAR_8 != sizeof(VAR_6)) {
  FUNC_3("read() failed: %m\n");
  FUNC_0();
 }


 VAR_7 = FUNC_1(((void*)0),
   VAR_4,
   VAR_2,
   VAR_1,
   VAR_5,
   0);
 if (VAR_7 == VAR_0) {
  FUNC_3("mmap() failed: %m\n");
  FUNC_0();
 }
 FUNC_2(VAR_7, VAR_4);


 VAR_7 = FUNC_1(((void*)0),
   VAR_4,
   VAR_2 | VAR_3,
   VAR_1,
   VAR_5,
   0);
 if (VAR_7 == VAR_0) {
  FUNC_3("mmap() failed: %m\n");
  FUNC_0();
 }
 FUNC_2(VAR_7, VAR_4);
}
