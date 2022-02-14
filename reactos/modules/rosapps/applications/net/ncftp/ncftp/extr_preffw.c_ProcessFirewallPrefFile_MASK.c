
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (char*) ;
 int * FUNC_3 (char*,int,int *) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 scalar_t__ FUNC_4 (char) ;
 void* VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 char* FUNC_5 (char*,char*) ;

void
FUNC_6(FILE *VAR_12)
{
 char VAR_13[256];
 char *VAR_14, *VAR_15;
 int VAR_16;


 VAR_13[sizeof(VAR_13) - 1] = '\0';
 while (FUNC_3(VAR_13, sizeof(VAR_13) - 1, VAR_12) != ((void*)0)) {
  VAR_14 = FUNC_5(VAR_13, " =\t\r\n");
  if ((VAR_14 == ((void*)0)) || (VAR_14[0] == '#'))
   continue;
  VAR_15 = FUNC_5(((void*)0), "\r\n");
  if (VAR_15 == ((void*)0))
   continue;
  if (FUNC_0(VAR_14, "firewall-type")) {
   VAR_16 = FUNC_2(VAR_15);
   if ((VAR_16 > 0) && (VAR_16 <= VAR_9))
    VAR_5 = VAR_16;
  } else if (FUNC_0(VAR_14, "firewall-host")) {
   (void) FUNC_1(VAR_2, VAR_15);
  } else if (FUNC_0(VAR_14, "firewall-port")) {
   VAR_16 = FUNC_2(VAR_15);
   if (VAR_16 > 0)
    VAR_4 = (unsigned int) VAR_16;
  } else if (FUNC_0(VAR_14, "firewall-user")) {
   (void) FUNC_1(VAR_6, VAR_15);
  } else if (FUNC_0(VAR_14, "firewall-pass")) {
   (void) FUNC_1(VAR_3, VAR_15);
  } else if (FUNC_0(VAR_14, "firewall-password")) {
   (void) FUNC_1(VAR_3, VAR_15);
  } else if (FUNC_0(VAR_14, "firewall-exception-list")) {
   (void) FUNC_1(VAR_1, VAR_15);
  } else if (FUNC_0(VAR_14, "passive")) {
   if (FUNC_0(VAR_15, "optional")) {
    VAR_0 = VAR_7 = VAR_8;
   } else if (FUNC_0(VAR_15, "on")) {
    VAR_0 = VAR_7 = VAR_10;
   } else if (FUNC_0(VAR_15, "off")) {
    VAR_0 = VAR_7 = VAR_11;
   } else if ((int) FUNC_4(VAR_15[0])) {
    VAR_0 = VAR_7 = FUNC_2(VAR_15);
   }
  }
 }
}
