
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmpLog ;
struct Stat {scalar_t__ st_size; } ;
typedef int str ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*) ;
 scalar_t__ FUNC_1 (char*,struct Stat*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int *) ;
 char* VAR_2 ;
 double VAR_3 ;
 char* VAR_4 ;
 int FUNC_6 (char) ;
 scalar_t__ FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char*) ;

void
FUNC_10(void)
{
 FILE *VAR_5, *VAR_6;
 struct Stat VAR_7;
 long VAR_8;
 char VAR_9[512];
 char VAR_10[256];

 if (VAR_4[0] == '\0')
  return;





 if ((VAR_3 <= 0) || (FUNC_1(VAR_2, &VAR_7) < 0))
  return;

 if ((size_t)VAR_7.st_size < (size_t)VAR_3)
  return;

 if ((VAR_6 = FUNC_4(VAR_2, VAR_0)) == ((void*)0))
  return;




 VAR_8 = (long) VAR_7.st_size - (long) VAR_3 + (long) (0.30 * VAR_3);
 while (VAR_8 > 0L) {
  if (FUNC_3(VAR_9, (int) sizeof(VAR_9), VAR_6) == ((void*)0))
   return;
  VAR_8 -= (long) FUNC_9(VAR_9);
 }

 for (;;) {
  if (FUNC_3(VAR_9, (int) sizeof(VAR_9), VAR_6) == ((void*)0)) {
   (void) FUNC_2(VAR_6);
   (void) FUNC_7(VAR_2);
   return;
  }
  if (! FUNC_6(*VAR_9))
   break;
 }


 FUNC_0(VAR_10, sizeof(VAR_10), "log.tmp");
 if ((VAR_5 = FUNC_4(VAR_10, VAR_1)) == ((void*)0)) {
  (void) FUNC_2(VAR_6);
  return;
 }
 (void) FUNC_5(VAR_9, VAR_5);
 while (FUNC_3(VAR_9, (int) sizeof(VAR_9), VAR_6) != ((void*)0))
  (void) FUNC_5(VAR_9, VAR_5);
 (void) FUNC_2(VAR_6);
 (void) FUNC_2(VAR_5);
 if (FUNC_7(VAR_2) < 0)
  return;
 if (FUNC_8(VAR_10, VAR_2) < 0)
  return;
}
