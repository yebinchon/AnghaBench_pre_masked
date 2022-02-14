
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int secondaryBuf ;
typedef scalar_t__ longest_int ;
typedef int line ;
struct TYPE_6__ {scalar_t__ xferTimeout; int errNo; int numListings; int bytesTransferred; int dataSocket; int magic; } ;
typedef int SReadlineInfo ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (char*,int,int ,char*,char**,char**,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__* const,int ,char*) ;
 int FUNC_3 (TYPE_1__* const,int) ;
 int FUNC_4 (TYPE_1__* const,int ,int ,scalar_t__,char*,char const*,...) ;
 scalar_t__ FUNC_5 (int *,int ,char*,int,int,int) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int const,char*,int ) ;

int
FUNC_12(const FTPCIPtr VAR_13, const int VAR_14, const int VAR_15, const char *const VAR_16)
{
 const char *VAR_17;
 char VAR_18[512];
 char VAR_19[768];

 char *VAR_20, *VAR_21;
 int VAR_22;
 volatile int VAR_23;





 if (VAR_13 == ((void*)0))
  return (VAR_3);
 if (FUNC_9(VAR_13->magic, VAR_8))
  return (VAR_2);

 VAR_17 = (VAR_15 != 0) ? "LIST" : "NLST";
 if ((VAR_16 == ((void*)0)) || (VAR_16[0] == '\0')) {
  VAR_23 = FUNC_4(VAR_13, VAR_9, VAR_12, (longest_int) 0, "%s", VAR_17);
 } else {
  VAR_23 = FUNC_4(VAR_13, VAR_9, VAR_12, (longest_int) 0, "%s %s", VAR_17, VAR_16);
 }
 if (VAR_23 == 0) {




  VAR_20 = VAR_19 + sizeof(VAR_19);
  VAR_21 = (char *) 0;

  for (;;) {
   if (VAR_13->xferTimeout > 0)
    (void) FUNC_8(VAR_13->xferTimeout);
   VAR_22 = FUNC_0(VAR_18, sizeof(VAR_18), VAR_13->dataSocket, VAR_19, &VAR_20, &VAR_21, sizeof(VAR_19));
   if (VAR_22 <= 0) {
    if (VAR_22 < 0)
     break;
   } else {
    VAR_13->bytesTransferred += (longest_int) VAR_22;
    (void) FUNC_7(VAR_18, "\n");
    (void) FUNC_11(VAR_14, VAR_18, FUNC_10(VAR_18));
   }
  }
  if (VAR_13->xferTimeout > 0)
   (void) FUNC_8(0);
  VAR_23 = FUNC_3(VAR_13, 1);
  if (VAR_23 < 0) {
   VAR_23 = VAR_7;
   VAR_13->errNo = VAR_7;
  }
  VAR_23 = VAR_10;
  VAR_13->numListings++;
 } else if (VAR_23 == VAR_6) {
  VAR_23 = VAR_7;
  VAR_13->errNo = VAR_7;
 }

 return (VAR_23);
}
