
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* hostname; } ;
typedef TYPE_1__ RDPCLIENT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*,char*,...) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int,unsigned char*,int) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (int) ;

void
FUNC_14(RDPCLIENT * VAR_5, unsigned char *VAR_6, int VAR_7)
{
 char *VAR_8, *VAR_9, *VAR_10;
 int VAR_11;

 VAR_8 = FUNC_1("HOME");
 if (VAR_8 == ((void*)0))
  return;

 VAR_9 = (char *) FUNC_13(FUNC_9(VAR_8) + FUNC_9(VAR_5->hostname) + sizeof("/.rdesktop/licence."));

 FUNC_6(VAR_9, "%s/.rdesktop", VAR_8);
 if ((FUNC_2(VAR_9, 0700) == -1) && VAR_4 != VAR_0)
 {
  FUNC_4(VAR_9);
  return;
 }



 FUNC_6(VAR_9, "%s/.rdesktop/licence.%s", VAR_8, VAR_5->hostname);
 VAR_10 = (char *) FUNC_13(FUNC_9(VAR_9) + sizeof(".new"));
 FUNC_8(VAR_10, VAR_9);
 FUNC_7(VAR_10, ".new");

 VAR_11 = FUNC_3(VAR_10, VAR_3 | VAR_1 | VAR_2, 0600);
 if (VAR_11 == -1)
 {
  FUNC_4(VAR_10);
  return;
 }

 if (FUNC_11(VAR_11, VAR_6, VAR_7) != VAR_7)
 {
  FUNC_4(VAR_10);
  FUNC_10(VAR_10);
 }
 else if (FUNC_5(VAR_10, VAR_9) == -1)
 {
  FUNC_4(VAR_9);
  FUNC_10(VAR_10);
 }

 FUNC_0(VAR_11);
 FUNC_12(VAR_10);
 FUNC_12(VAR_9);
}
