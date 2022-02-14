
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int url ;
typedef long longest_int ;
typedef int localName ;
struct TYPE_4__ {double kBytesPerSec; int netMode; int port; int host; int pass; int user; int startingWorkingDirectory; int * rname; scalar_t__ startPoint; scalar_t__ bytesTransferred; int * lname; int usingTAR; int useProgressMeter; scalar_t__ expectedSize; int (* progress ) (TYPE_1__* const,int) ;} ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (char*,int *,int,int ) ;
 double FUNC_1 (double,char const**,double*) ;
 int FUNC_2 (char*,int,int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__* const,int) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int *,long) ;
 int FUNC_8 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;
 int FUNC_9 (char*,char*,char*,long,double,char const*) ;
 int VAR_3 ;
 int FUNC_10 (char*) ;

void
FUNC_11(const FTPCIPtr VAR_4, int VAR_5)
{
 double VAR_6 = 0.0;
 const char *VAR_7;
 static const char *VAR_8;
 static double VAR_9;
 char VAR_10[32];
 char VAR_11[128];
 int VAR_12;

 switch (VAR_5) {
  case 129:
   if (VAR_4->expectedSize != VAR_2) {
    VAR_4->progress = FUNC_5;
    FUNC_5(VAR_4, VAR_5);
    return;
   }
   (void) FUNC_1((double) VAR_4->expectedSize, &VAR_8, &VAR_9);

   if (VAR_4->lname == ((void*)0)) {
    VAR_10[0] = '\0';
   } else {
    FUNC_0(VAR_10, VAR_4->lname, sizeof(VAR_10) - 2, 0);
    if ((VAR_4->usingTAR) && (FUNC_10(VAR_10) < (sizeof(VAR_10) - 6))) {
     FUNC_6(VAR_10, " (TAR)");
    }
    (void) FUNC_6(VAR_10, ":");
   }
   if (VAR_4->useProgressMeter) {
    (void) FUNC_8(VAR_3, "%-32s", VAR_10);
   }
   break;

  case 128:
   VAR_6 = FUNC_1(VAR_4->kBytesPerSec * 1024.0, &VAR_7, ((void*)0));

   if (VAR_4->lname == ((void*)0)) {
    VAR_10[0] = '\0';
   } else {
    FUNC_0(VAR_10, VAR_4->lname, sizeof(VAR_10) - 2, 0);
    if ((VAR_4->usingTAR) && (FUNC_10(VAR_10) < (sizeof(VAR_10) - 6))) {
     FUNC_6(VAR_10, " (TAR)");
    }
    (void) FUNC_6(VAR_10, ":");
   }
   (void) FUNC_9(VAR_11, "%-32s  %10ld bytes  %6.2f %s/s",
    VAR_10,
    (long) (VAR_4->bytesTransferred + VAR_4->startPoint),
    VAR_6,
    VAR_7
   );






   for (VAR_12 = (int) FUNC_10(VAR_11); VAR_12 < 80 - 2; VAR_12++)
    VAR_11[VAR_12] = ' ';
   VAR_11[VAR_12] = '\0';


   (void) FUNC_8(VAR_3, "\r%s", VAR_11);
   FUNC_7("%s - [%ld bytes]", VAR_4->lname, (long) (VAR_4->bytesTransferred + VAR_4->startPoint));

   break;

  case 130:
   (void) FUNC_8(VAR_3, "\n\r");
   break;
 }
}
