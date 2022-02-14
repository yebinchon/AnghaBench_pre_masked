
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int savedcwd ;
typedef int curcwd ;
struct TYPE_11__ {int errNo; } ;
typedef int (* FTPFtwProc ) (TYPE_1__* const,char*,int ) ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (TYPE_1__* const,char const* const) ;
 int FUNC_1 (TYPE_1__* const,char*,char*,int,int (*) (TYPE_1__* const,char*,int ),int) ;
 int FUNC_2 (TYPE_1__* const,char*,int) ;
 int FUNC_3 (TYPE_1__* const,char const* const) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_4 (char*,char) ;
 int FUNC_5 (char*) ;
 int * FUNC_6 (char*,char) ;
 int FUNC_7 (TYPE_1__* const,char*,int ) ;

int
FUNC_8(const FTPCIPtr VAR_4, const char *const VAR_5, FTPFtwProc VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;
 char *VAR_10;
 char VAR_11[1024];
 char VAR_12[2048];

 VAR_8 = FUNC_3(VAR_4, VAR_5);
 if (VAR_8 < 0) {

  return VAR_8;
 } else if (VAR_8 == 0) {
  VAR_8 = VAR_4->errNo = VAR_1;
  return (VAR_8);
 }


 (void) FUNC_2(VAR_4, VAR_11, sizeof(VAR_11));

 VAR_8 = FUNC_0(VAR_4, VAR_5);
 if (VAR_8 != VAR_3) {
  return (VAR_8);
 }


 VAR_8 = FUNC_2(VAR_4, VAR_12, sizeof(VAR_12) - 3);
 if (VAR_8 != VAR_3) {
  if (FUNC_0(VAR_4, VAR_11) != VAR_3) {
   VAR_8 = VAR_0;
   VAR_4->errNo = VAR_0;
  }
  return (VAR_8);
 }

 VAR_9 = (*VAR_6)(VAR_4, VAR_12, VAR_2);
 if (VAR_9 == VAR_3) {
  VAR_10 = VAR_12 + FUNC_5(VAR_12);

  if ((FUNC_4(VAR_12, '/') == ((void*)0)) && (FUNC_6(VAR_12, '\\') != ((void*)0)))
   *VAR_10++ = '\\';
  else
   *VAR_10++ = '/';
  *VAR_10 = '\0';
  VAR_8 = FUNC_1(VAR_4, VAR_12, VAR_10, sizeof(VAR_12), VAR_6, VAR_7 - 1);
 }


 if (FUNC_0(VAR_4, VAR_11) != VAR_3) {

  VAR_8 = VAR_0;
  VAR_4->errNo = VAR_0;
  return (VAR_8);
 }

 if ((VAR_9 != VAR_3) && (VAR_8 == VAR_3))
  VAR_8 = VAR_9;

 return (VAR_8);
}
