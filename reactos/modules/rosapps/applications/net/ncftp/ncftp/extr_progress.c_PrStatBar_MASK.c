
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int url ;
typedef int localName ;
struct TYPE_4__ {double kBytesPerSec; int stalled; int netMode; int port; int host; int pass; int user; int startingWorkingDirectory; int * rname; int * lname; scalar_t__ startPoint; scalar_t__ bytesTransferred; scalar_t__ expectedSize; int percentCompleted; int secLeft; int useProgressMeter; int (* progress ) (TYPE_1__* const,int) ;} ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (char*,int *,int,int ) ;
 double FUNC_1 (double,char const**,double*) ;
 int FUNC_2 (char*,int,int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (TYPE_1__* const,int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;
 int FUNC_9 (char*,char*,char*,double,...) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_10 (char*) ;

void
FUNC_11(const FTPCIPtr VAR_5, int VAR_6)
{
 double VAR_7, VAR_8;
 int VAR_9, VAR_10;
 const char *VAR_11;
 static const char *VAR_12;
 static double VAR_13, VAR_14;
 const char *VAR_15;
 char VAR_16[80];
 char VAR_17[134];
 int VAR_18;

 switch (VAR_6) {
  case 129:
   FUNC_7(VAR_4);
   if (VAR_5->expectedSize == VAR_2) {
    VAR_5->progress = FUNC_4;
    FUNC_4(VAR_5, VAR_6);
    return;
   }
   VAR_13 = FUNC_1((double) VAR_5->expectedSize, &VAR_12, &VAR_14);

   if (VAR_5->lname == ((void*)0)) {
    VAR_16[0] = '\0';
   } else {

    FUNC_0(VAR_16, VAR_5->lname, sizeof(VAR_16) - 2, 0);
    (void) FUNC_5(VAR_16, ":");
   }

   if (VAR_5->useProgressMeter)
    (void) FUNC_8(VAR_3, "%-32s", VAR_16);
   break;

  case 128:
   VAR_9 = (int) (VAR_5->secLeft + 0.5);
   VAR_10 = VAR_9 / 60;
   VAR_9 = VAR_9 - (VAR_10 * 60);
   if (VAR_10 > 999) {
    VAR_10 = 999;
    VAR_9 = 59;
   }

   VAR_7 = FUNC_1(VAR_5->kBytesPerSec * 1024.0, &VAR_11, ((void*)0));
   VAR_8 = (double) (VAR_5->bytesTransferred + VAR_5->startPoint) / VAR_14;

   if (VAR_5->lname == ((void*)0)) {
    VAR_16[0] = '\0';
   } else {
    FUNC_0(VAR_16, VAR_5->lname, 31, 0);
    (void) FUNC_5(VAR_16, ":");
   }

   if (VAR_5->stalled < 2)
    VAR_15 = " ";
   else if (VAR_5->stalled < 15)
    VAR_15 = "-";
   else
    VAR_15 = "=";

   (void) FUNC_9(VAR_17, "%-32s   ETA: %3d:%02d  %6.2f/%6.2f %.2s  %6.2f %.2s/s %.1s",
    VAR_16,
    VAR_10,
    VAR_9,
    VAR_8,
    VAR_13,
    VAR_12,
    VAR_7,
    VAR_11,
    VAR_15
   );


   (void) FUNC_8(VAR_3, "\r%s", VAR_17);

   FUNC_6("%s - [%.1f%%]", VAR_5->lname, VAR_5->percentCompleted);
   break;

  case 130:

   VAR_7 = FUNC_1(VAR_5->kBytesPerSec * 1024.0, &VAR_11, ((void*)0));
   VAR_8 = (double) (VAR_5->bytesTransferred + VAR_5->startPoint) / VAR_14;

   if (VAR_5->expectedSize == (VAR_5->bytesTransferred + VAR_5->startPoint)) {
    if (VAR_5->lname == ((void*)0)) {
     VAR_16[0] = '\0';
    } else {
     FUNC_0(VAR_16, VAR_5->lname, 52, 0);
     (void) FUNC_5(VAR_16, ":");
    }

    (void) FUNC_9(VAR_17, "%-53s  %6.2f %.2s  %6.2f %.2s/s  ",
     VAR_16,
     VAR_13,
     VAR_12,
     VAR_7,
     VAR_11
    );
   } else {
    if (VAR_5->lname == ((void*)0)) {
     VAR_16[0] = '\0';
    } else {
     FUNC_0(VAR_16, VAR_5->lname, 45, 0);
     (void) FUNC_5(VAR_16, ":");
    }

    (void) FUNC_9(VAR_17, "%-46s  %6.2f/%6.2f %.2s  %6.2f %.2s/s  ",
     VAR_16,
     VAR_8,
     VAR_13,
     VAR_12,
     VAR_7,
     VAR_11
    );
   }





   for (VAR_18 = (int) FUNC_10(VAR_17); VAR_18 < 80 - 2; VAR_18++)
    VAR_17[VAR_18] = ' ';
   VAR_17[VAR_18] = '\0';


   (void) FUNC_8(VAR_3, "\r%s\n\r", VAR_17);
   break;
 }
}
