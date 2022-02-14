
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* magic; int errNo; char* buf; int bufSize; } ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (TYPE_1__*,char const* const) ;
 int FUNC_1 (TYPE_1__*,char const* const,char* const,size_t const) ;
 int FUNC_2 (TYPE_1__*,char*,char*) ;
 int FUNC_3 (TYPE_1__*,char* const,size_t const) ;
 int FUNC_4 (TYPE_1__*,char const* const,int ) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*,char const* const,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (char const* const,char*) ;

int
FUNC_8(FTPCIPtr VAR_9, const char *const VAR_10, char *const VAR_11, const size_t VAR_12, int VAR_13)
{
 char *VAR_14, *VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18, VAR_19;

 if (VAR_9 == ((void*)0))
  return (VAR_4);
 if (FUNC_7(VAR_9->magic, VAR_6))
  return (VAR_3);

 if (VAR_10 == ((void*)0)) {
  VAR_16 = VAR_5;
  VAR_9->errNo = VAR_5;
  return VAR_16;
 }

 if (VAR_13 == VAR_2)
  return (FUNC_0(VAR_9, VAR_10));
 if (VAR_13 == VAR_0) {
  return (FUNC_1(VAR_9, VAR_10, VAR_11, VAR_12));
 } else if (VAR_13 == VAR_1) {
  VAR_16 = FUNC_4(VAR_9, VAR_10, VAR_8);
  if (VAR_16 == VAR_7)
   VAR_16 = FUNC_0(VAR_9, VAR_10);
  return VAR_16;
 } else if (VAR_13 == (VAR_1|VAR_0)) {
  VAR_16 = FUNC_4(VAR_9, VAR_10, VAR_8);
  if (VAR_16 == VAR_7)
   VAR_16 = FUNC_1(VAR_9, VAR_10, VAR_11, VAR_12);
  return VAR_16;
 }



 VAR_14 = VAR_9->buf;
 VAR_14[VAR_9->bufSize - 1] = '\0';
 (void) FUNC_6(VAR_9->buf, VAR_10, VAR_9->bufSize);
 if (VAR_14[VAR_9->bufSize - 1] != '\0')
  return (VAR_4);

 VAR_18 = (VAR_13 & VAR_1);
 VAR_19 = (VAR_13 & VAR_0);

 if ((VAR_10[0] == '\0') || (FUNC_7(VAR_10, ".") == 0)) {
  VAR_16 = 0;
  if (VAR_13 == VAR_0)
   VAR_16 = FUNC_3(VAR_9, VAR_11, VAR_12);
  return (VAR_16);
 }

 VAR_17 = 0;
 do {
  VAR_15 = VAR_14;
  VAR_14 = FUNC_5(VAR_14);
  if (VAR_14 != ((void*)0)) {





   *VAR_14++ = '\0';
  } else {
   VAR_17 = 1;
  }
  if (FUNC_7(VAR_15, ".") == 0) {
   VAR_16 = 0;
   if ((VAR_17 != 0) && (VAR_19 != 0))
    VAR_16 = FUNC_3(VAR_9, VAR_11, VAR_12);
  } else if ((VAR_17 != 0) && (VAR_19 != 0)) {
   VAR_16 = FUNC_1(VAR_9, (*VAR_15 != '\0') ? VAR_15 : "/", VAR_11, VAR_12);
  } else {
   VAR_16 = FUNC_0(VAR_9, (*VAR_15 != '\0') ? VAR_15 : "/");
  }
  if (VAR_16 < 0) {
   if ((VAR_18 != 0) && (*VAR_15 != '\0')) {
    if (FUNC_2(VAR_9, "MKD %s", VAR_15) == 2) {
     VAR_16 = FUNC_0(VAR_9, VAR_15);
    } else {

     VAR_9->errNo = VAR_16;
    }
   } else {
    VAR_9->errNo = VAR_16;
   }
  }
 } while ((!VAR_17) && (VAR_16 == 0));

 return (VAR_16);
}
