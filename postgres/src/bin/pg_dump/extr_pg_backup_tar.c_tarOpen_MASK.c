
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * tarFH; } ;
typedef TYPE_1__ lclContext ;
struct TYPE_11__ {int compression; scalar_t__ formatData; } ;
struct TYPE_10__ {char mode; int * tarFH; int targetFile; TYPE_3__* AH; int * tmpFH; int * nFH; int * zFH; } ;
typedef TYPE_2__ TAR_MEMBER ;
typedef TYPE_3__ ArchiveHandle ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,char const*) ;
 char* FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (char*,...) ;
 int * FUNC_4 (int,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int * FUNC_7 (int ,char*) ;
 int FUNC_8 (char*,int,int) ;
 TYPE_2__* FUNC_9 (int) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (char*,char*,int) ;
 int * FUNC_12 () ;
 int FUNC_13 (int) ;

__attribute__((used)) static TAR_MEMBER *
FUNC_14(ArchiveHandle *VAR_11, const char *VAR_12, char VAR_13)
{
 lclContext *VAR_14 = (lclContext *) VAR_11->formatData;
 TAR_MEMBER *VAR_15;





 if (VAR_13 == 'r')
 {
  VAR_15 = FUNC_0(VAR_11, VAR_12);
  if (!VAR_15)
  {
   if (VAR_12)
   {




    FUNC_3("could not find file \"%s\" in archive", VAR_12);
   }
   else
   {

    return ((void*)0);
   }
  }
  VAR_15->nFH = VAR_14->tarFH;

 }
 else
 {
  int VAR_16;

  VAR_15 = FUNC_9(sizeof(TAR_MEMBER));







  VAR_16 = FUNC_13(VAR_7 | VAR_8);


  VAR_15->tmpFH = FUNC_12();
  if (VAR_15->tmpFH == ((void*)0))
   FUNC_3("could not generate temporary file name: %m");

  FUNC_13(VAR_16);
  VAR_15->nFH = VAR_15->tmpFH;


  VAR_15->AH = VAR_11;
  VAR_15->targetFile = FUNC_10(VAR_12);
 }

 VAR_15->mode = VAR_13;
 VAR_15->tarFH = VAR_14->tarFH;

 return VAR_15;
}
