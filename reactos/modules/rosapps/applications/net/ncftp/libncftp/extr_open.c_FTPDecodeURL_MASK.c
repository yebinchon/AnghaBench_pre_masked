
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int subdir ;
typedef int portstr ;
struct TYPE_3__ {char* user; char* pass; char* host; int port; } ;
typedef int LineListPtr ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char* const,size_t const,char*,size_t) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 size_t FUNC_7 (char* const) ;
 scalar_t__ FUNC_8 (char* const,char*,int) ;
 scalar_t__ FUNC_9 (char* const,char*,int) ;
 char* FUNC_10 (char*,char) ;
 char* FUNC_11 (char*,char*) ;

int
FUNC_12(
 const FTPCIPtr VAR_4,
 char *const VAR_5,
 LineListPtr VAR_6,
 char *const VAR_7,
 const size_t VAR_8,
 int *const VAR_9,
 int *const VAR_10
)
{
 char *VAR_11;
 char *VAR_12, *VAR_13;
 char *VAR_14;
 char *VAR_15;
 char VAR_16[32];
 int VAR_17;
 int VAR_18;
 char *VAR_19;
 char *VAR_20;
 char *VAR_21;
 char VAR_22[128];
 char *VAR_23;

 FUNC_1(VAR_6);
 *VAR_7 = '\0';
 if (VAR_10 != ((void*)0))
  *VAR_10 = 0;
 if (VAR_9 != ((void*)0))
  *VAR_9 = VAR_3;

 VAR_11 = ((void*)0);
 if (FUNC_9(VAR_5, "<URL:ftp://", 11) == 0) {
  VAR_11 = VAR_5 + FUNC_7(VAR_5) - 1;
  if (*VAR_11 != '>')
   return (VAR_0);
  *VAR_11 = '\0';
  VAR_11 = VAR_5 + 11;
 } else if (FUNC_9(VAR_5, "ftp://", 6) == 0) {
  VAR_11 = VAR_5 + 6;
 } else {
  return (-1);
 }




 VAR_15 = ((void*)0);
 for (VAR_12 = VAR_11; ; VAR_11++) {
  if (*VAR_11 == '@') {
   if (VAR_15 == ((void*)0))
    VAR_15 = VAR_11;
   else
    return (VAR_0);
  } else if ((*VAR_11 == '\0') || (*VAR_11 == '/')) {
   VAR_13 = VAR_11;
   break;
  }
 }

 VAR_18 = *VAR_13;
 *VAR_13 = '\0';
 if (VAR_15 == ((void*)0)) {

  VAR_14 = VAR_12;
 } else {
  *VAR_15 = '\0';
  VAR_11 = FUNC_5(VAR_12, ':');
  if (VAR_11 == ((void*)0)) {

   FUNC_2(VAR_4->user, sizeof(VAR_4->user), VAR_12, (size_t) (VAR_15 - VAR_12));
  } else if (FUNC_5(VAR_11 + 1, ':') != ((void*)0)) {

   return (VAR_0);
  } else {
   FUNC_2(VAR_4->user, sizeof(VAR_4->user), VAR_12, (size_t) (VAR_11 - VAR_12));
   FUNC_2(VAR_4->pass, sizeof(VAR_4->pass), VAR_11 + 1, (size_t) (VAR_15 - (VAR_11 + 1)));
  }
  *VAR_15 = '@';
  VAR_14 = VAR_15 + 1;
 }

 VAR_11 = FUNC_5(VAR_14, ':');
 if (VAR_11 == ((void*)0)) {

  FUNC_2(VAR_4->host, sizeof(VAR_4->host), VAR_14, (size_t) (VAR_13 - VAR_14));
 } else if (FUNC_5(VAR_11 + 1, ':') != ((void*)0)) {

  return (VAR_0);
 } else {
  FUNC_2(VAR_4->host, sizeof(VAR_4->host), VAR_14, (size_t) (VAR_11 - VAR_14));
  FUNC_2(VAR_16, sizeof(VAR_16), VAR_11 + 1, (size_t) (VAR_13 - (VAR_11 + 1)));
  VAR_17 = FUNC_3(VAR_16);
  if (VAR_17 > 0)
   VAR_4->port = VAR_17;
 }

 *VAR_13 = (char) VAR_18;
 if ((*VAR_13 == '\0') || ((*VAR_13 == '/') && (VAR_13[1] == '\0'))) {

  return (0);
 }

 VAR_19 = FUNC_10(VAR_13, '/');
 if (VAR_19 == ((void*)0)) {

  return (0);
 }
 *VAR_19 = '\0';

 if ((VAR_23 = FUNC_5(VAR_19 + 1, ';')) != ((void*)0)) {
  *VAR_23++ = '\0';
  if (FUNC_6(VAR_23, "type=i") == 0) {
   if (VAR_9 != ((void*)0))
    *VAR_9 = VAR_3;
  } else if (FUNC_6(VAR_23, "type=a") == 0) {
   if (VAR_9 != ((void*)0))
    *VAR_9 = VAR_2;
  } else if (FUNC_6(VAR_23, "type=b") == 0) {
   if (VAR_9 != ((void*)0))
    *VAR_9 = VAR_3;
  } else if (FUNC_6(VAR_23, "type=d") == 0) {
   if (VAR_10 != ((void*)0)) {
    *VAR_10 = 1;
    if (VAR_9 != ((void*)0))
     *VAR_9 = VAR_2;
   } else {

    return (VAR_0);
   }
  }

 }
 FUNC_2(VAR_7, VAR_8, VAR_19 + 1, FUNC_7(VAR_19 + 1));
 for (VAR_20 = VAR_13; (VAR_21 = FUNC_11(VAR_20, "/")) != ((void*)0); VAR_20 = ((void*)0)) {
  FUNC_2(VAR_22, sizeof(VAR_22), VAR_21, FUNC_7(VAR_21));
  (void) FUNC_0(VAR_6, VAR_22);
 }
 *VAR_19 = '/';
 return (VAR_1);
}
