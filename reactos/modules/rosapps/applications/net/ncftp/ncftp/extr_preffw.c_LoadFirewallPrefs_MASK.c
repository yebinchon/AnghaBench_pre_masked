
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pathName ;
struct TYPE_3__ {int ourHostName; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char*,int ) ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 TYPE_1__ VAR_9 ;
 int VAR_10 ;
 char* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 char* VAR_14 ;
 char* VAR_15 ;
 char* FUNC_9 (int ,char) ;

void
FUNC_10(int VAR_16)
{
 FILE *VAR_17, *VAR_18;
 char VAR_19[256];
 char *VAR_20;
 int VAR_21 = 0;
 int VAR_22 = 0;

 if ((VAR_6 != 0) && (VAR_16 == 0))
  return;
 VAR_6 = 1;

 if (VAR_11[0] == '\0')
  return;
 (void) FUNC_1(VAR_19, sizeof(VAR_19), VAR_13);


 VAR_7 = VAR_12;
 VAR_5 = 0;
 VAR_3[0] = '\0';
 VAR_8[0] = '\0';
 VAR_4[0] = '\0';
 VAR_2[0] = '\0';

 VAR_18 = FUNC_8(VAR_14, VAR_0);
 if (VAR_18 != ((void*)0)) {

  FUNC_2(VAR_18);
  (void) FUNC_7(VAR_18);
  VAR_22++;
 }

 VAR_17 = FUNC_8(VAR_19, VAR_0);
 if (VAR_17 != ((void*)0)) {

  FUNC_2(VAR_17);
  (void) FUNC_7(VAR_17);
  VAR_21 = 1;
 }

 VAR_18 = FUNC_8(VAR_15, VAR_0);
 if (VAR_18 != ((void*)0)) {

  FUNC_2(VAR_18);
  (void) FUNC_7(VAR_18);
  VAR_22++;
 }

 if ((VAR_21 == 0) && (VAR_22 == 0)) {



  VAR_17 = FUNC_8(VAR_19, VAR_1);
  if (VAR_17 != ((void*)0)) {
   FUNC_5(VAR_17);
   (void) FUNC_7(VAR_17);
   (void) FUNC_6(VAR_19, 00600);
   VAR_10 = 1;
  }
 }

 if (VAR_2[0] == '\0') {
  FUNC_0(&VAR_9);
  VAR_20 = FUNC_9(VAR_9.ourHostName, '.');

  if (VAR_20 != ((void*)0)) {
   (void) FUNC_4(VAR_2, VAR_20);
   (void) FUNC_3(VAR_2, ",localdomain");
  }
 }
}
