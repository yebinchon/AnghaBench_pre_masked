
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int errNo; char const* const buf; int lastFTPCmdResultStr; int bufSize; int magic; } ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (TYPE_1__* const,int ,char*,char const* const,char*,...) ;
 int FUNC_1 (TYPE_1__* const,char const* const) ;
 int FUNC_2 (TYPE_1__* const,char*,char const* const) ;
 int FUNC_3 (TYPE_1__* const,char const* const,int ) ;
 int FUNC_4 (char*,char const* const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int const VAR_8 ;
 char* FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*,char) ;

int
FUNC_9(const FTPCIPtr VAR_9, const char *const VAR_10, const int VAR_11, const char *const VAR_12)
{
 int VAR_13, VAR_14;
 char *VAR_15, *VAR_16, *VAR_17;
 char VAR_18[512];
 char VAR_19[512];
 char VAR_20;

 if (VAR_9 == ((void*)0))
  return (VAR_2);
 if (FUNC_6(VAR_9->magic, VAR_6))
  return (VAR_1);

 if ((VAR_10 == ((void*)0)) || (VAR_10[0] == '\0')) {
  VAR_9->errNo = VAR_4;
  return (VAR_4);
 }


 if ((VAR_12 == ((void*)0)) || (VAR_12[0] == '\0')) {






  (void) FUNC_3(VAR_9, VAR_9->buf, VAR_9->bufSize);
 }

 VAR_13 = FUNC_1(VAR_9, VAR_10);
 if (VAR_13 == VAR_7) {



  VAR_14 = FUNC_1(VAR_9, ((VAR_12 == ((void*)0)) || (VAR_12[0] == '\0')) ? VAR_9->buf : VAR_12);
  if (VAR_14 < 0) {
   VAR_13 = VAR_3;
   VAR_9->errNo = VAR_3;
   return (VAR_13);
  }


  return (VAR_7);
 }

 if (VAR_11 == VAR_8) {
  VAR_13 = FUNC_2(VAR_9, "MKD %s", VAR_10);
  if (VAR_13 > 0) {
   if (VAR_13 != 2) {
    FUNC_0(VAR_9, VAR_0, "MKD %s failed; [%s]\n", VAR_10, VAR_9->lastFTPCmdResultStr);
    VAR_13 = VAR_5;
    VAR_9->errNo = VAR_5;
    return (VAR_13);
   } else {
    VAR_13 = VAR_7;
   }
  }
 } else {
  (void) FUNC_4(VAR_18, VAR_10);


  VAR_15 = VAR_18 + FUNC_7(VAR_18) - 1;
  for (;;) {
   if (VAR_15 <= VAR_18) {
    if ((VAR_10 == ((void*)0)) || (VAR_10[0] == '\0')) {
     VAR_9->errNo = VAR_4;
     VAR_13 = VAR_4;
     return (VAR_13);
    }
   }
   if ((*VAR_15 != '/') && (*VAR_15 != '\\')) {
    VAR_15[1] = '\0';
    break;
   }
   --VAR_15;
  }
  (void) FUNC_4(VAR_19, VAR_18);

  if ((FUNC_8(VAR_18, '/') == VAR_18) || (FUNC_8(VAR_18, '\\') == VAR_18)) {

   VAR_13 = FUNC_2(VAR_9, "MKD %s", VAR_18);
   if (VAR_13 < 0) {
    return (VAR_13);
   }
   if (VAR_13 != 2) {
    FUNC_0(VAR_9, VAR_0, "MKD %s failed; [%s]\n", VAR_18, VAR_9->lastFTPCmdResultStr);
    VAR_13 = VAR_5;
    VAR_9->errNo = VAR_5;
    return (VAR_13);
   }

   return (VAR_7);
  }

  for (;;) {
   VAR_15 = FUNC_8(VAR_18, '/');
   if (VAR_15 == ((void*)0))
    VAR_15 = FUNC_8(VAR_18, '\\');
   if (VAR_15 == ((void*)0)) {
    VAR_15 = VAR_18 + FUNC_7(VAR_18) - 1;
    if (VAR_18[0] == '\0') {
     VAR_13 = VAR_5;
     VAR_9->errNo = VAR_5;
     return (VAR_13);
    }




    VAR_15 = VAR_18 - 1;
    break;
   }
   if (VAR_15 == VAR_18) {
    VAR_13 = VAR_5;
    VAR_9->errNo = VAR_5;
    return (VAR_13);
   }
   *VAR_15 = '\0';
   VAR_13 = FUNC_1(VAR_9, VAR_18);
   if (VAR_13 == 0) {
    break;

   }
  }

  VAR_16 = VAR_19 + ((VAR_15 + 1) - VAR_18);
  for (VAR_15 = VAR_16; ; ) {
   VAR_17 = VAR_15;
   VAR_15 = FUNC_5(VAR_17, '/');
   VAR_20 = '/';
   if (VAR_15 == ((void*)0))
    VAR_15 = FUNC_5(VAR_17, '\\');
   if (VAR_15 != ((void*)0)) {
    VAR_20 = *VAR_15;
    *VAR_15 = '\0';
    if (VAR_15[1] == '\0') {

     break;
    }
   }
   VAR_13 = FUNC_2(VAR_9, "MKD %s", VAR_16);
   if (VAR_13 < 0) {
    return (VAR_13);
   }
   if (VAR_13 != 2) {
    FUNC_0(VAR_9, VAR_0, "Cwd=%s; MKD %s failed; [%s]\n", VAR_9->buf, VAR_16, VAR_9->lastFTPCmdResultStr);
    VAR_13 = VAR_5;
    VAR_9->errNo = VAR_5;
    goto goback;
   }
   if (VAR_15 == ((void*)0))
    break;
   *VAR_15++ = VAR_20;
  }
  VAR_13 = VAR_7;

goback:
  VAR_14 = FUNC_1(VAR_9, ((VAR_12 == ((void*)0)) || (VAR_12[0] == '\0')) ? VAR_9->buf : VAR_12);
  if ((VAR_13 == 0) && (VAR_14 < 0)) {
   VAR_13 = VAR_3;
   VAR_9->errNo = VAR_3;
  }
 }
 return (VAR_13);
}
