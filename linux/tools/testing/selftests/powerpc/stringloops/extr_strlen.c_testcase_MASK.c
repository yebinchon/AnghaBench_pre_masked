
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (int,unsigned long) ;
 int FUNC_3 (char*,int ,unsigned long) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(void)
{
 char *VAR_2;
 unsigned long VAR_3;

 VAR_2 = FUNC_2(128, VAR_1);
 if (!VAR_2) {
  FUNC_4("memalign");
  FUNC_1(1);
 }

 FUNC_6(1);

 FUNC_3(VAR_2, 0, VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  char VAR_4;

  do {
   VAR_4 = FUNC_5() & 0x7f;
  } while (!VAR_4);
  VAR_2[VAR_3] = VAR_4;
  FUNC_7(VAR_2);
 }

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  unsigned long VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
   char VAR_6;

   do {
    VAR_6 = FUNC_5() & 0x7f;
   } while (!VAR_6);
   VAR_2[VAR_5] = VAR_6;
  }
  for (VAR_5 = 0; VAR_5 < sizeof(long); VAR_5++) {
   VAR_2[VAR_1 - 1 - VAR_5] = 0;
   FUNC_7(VAR_2);
  }
 }

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  char VAR_7;

  do {
   VAR_7 = FUNC_5() & 0x7f;
  } while (!VAR_7);
  VAR_2[VAR_3] = VAR_7;
 }

 FUNC_0(VAR_2);

 VAR_2[16] = 0;
 FUNC_0(VAR_2);

 VAR_2[8] = 0;
 FUNC_0(VAR_2);

 VAR_2[4] = 0;
 FUNC_0(VAR_2);

 VAR_2[3] = 0;
 FUNC_0(VAR_2);

 VAR_2[2] = 0;
 FUNC_0(VAR_2);

 VAR_2[1] = 0;
 FUNC_0(VAR_2);

 return 0;
}
