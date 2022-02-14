
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* const magic; int errNo; char* buf; int bufSize; } ;
typedef TYPE_1__* FTPCIPtr ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char*,int,int ,char const* const) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char const* const,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 char* VAR_4 ;
 int FUNC_5 (TYPE_1__*,char*,int) ;
 scalar_t__ FUNC_6 (char const* const,char*) ;

int
FUNC_7(FTPCIPtr VAR_5, const char *const VAR_6)
{
 char *VAR_7, *VAR_8;
 int VAR_9;
 int VAR_10;

 if (VAR_5 == ((void*)0))
  return (VAR_2);
 if (FUNC_6(VAR_5->magic, VAR_4))
  return (VAR_1);

 if (VAR_6 == ((void*)0)) {
  VAR_9 = VAR_3;
  VAR_5->errNo = VAR_3;
  return VAR_9;
 }

 if ((VAR_6[0] == '\0') || (FUNC_6(VAR_6, ".") == 0)) {
  VAR_9 = 0;
  return (VAR_9);
 }

 VAR_7 = VAR_5->buf;
 VAR_7[VAR_5->bufSize - 2] = '\0';
 if ((VAR_6[0] == '.') && (VAR_6[1] == '.') && ((VAR_6[2] == '\0') || FUNC_0(VAR_6[2]))) {
  FUNC_1(VAR_5->buf, VAR_5->bufSize, VAR_0, VAR_6);
 } else {
  (void) FUNC_4(VAR_5->buf, VAR_6, VAR_5->bufSize);
 }
 if (VAR_7[VAR_5->bufSize - 2] != '\0')
  return (VAR_2);

 FUNC_3(VAR_7);
 do {
  VAR_8 = VAR_7;
  VAR_7 = FUNC_2(VAR_7 + 0);
  if (VAR_7 != ((void*)0)) {
   *VAR_7++ = '\0';
  }
  VAR_10 = (VAR_7 == ((void*)0));
  VAR_9 = FUNC_5(VAR_5, (*VAR_8 != '\0') ? VAR_8 : "/", VAR_10 ? 0 : 1);
  if (VAR_9 < 0) {
   VAR_5->errNo = VAR_9;
  }
 } while ((!VAR_10) && (VAR_9 == 0));

 return (VAR_9);
}
