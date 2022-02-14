
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_3__ {char* lookahead; int lookaheadSize; int lookaheadLen; char* fSpec; int format; int intSize; int offSize; int readHeader; int version; scalar_t__ lookaheadPos; } ;
typedef int FILE ;
typedef TYPE_1__ ArchiveHandle ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char,char,char) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 char* VAR_5 ;
 char* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (char*,int ) ;
 size_t FUNC_10 (char*,int,int,int *) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,char*,int) ;
 int FUNC_15 (char*) ;
 char* FUNC_16 (int) ;
 int FUNC_17 (char*,int,char*,char*) ;
 scalar_t__ FUNC_18 (char*,struct stat*) ;
 int * VAR_9 ;
 int FUNC_19 (char*) ;
 scalar_t__ FUNC_20 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_21(ArchiveHandle *VAR_10)
{
 FILE *VAR_11;
 char VAR_12[6];
 size_t VAR_13;
 int VAR_14 = 0;

 FUNC_15("attempting to ascertain archive format");

 if (VAR_10->lookahead)
  FUNC_11(VAR_10->lookahead);

 VAR_10->lookaheadSize = 512;
 VAR_10->lookahead = FUNC_16(512);
 VAR_10->lookaheadLen = 0;
 VAR_10->lookaheadPos = 0;

 if (VAR_10->fSpec)
 {
  struct stat VAR_15;

  VAR_14 = 1;





  if (FUNC_18(VAR_10->fSpec, &VAR_15) == 0 && FUNC_2(VAR_15.st_mode))
  {
   char VAR_16[VAR_2];

   if (FUNC_17(VAR_16, VAR_2, "%s/toc.dat", VAR_10->fSpec) >= VAR_2)
    FUNC_4("directory name too long: \"%s\"",
       VAR_10->fSpec);
   if (FUNC_18(VAR_16, &VAR_15) == 0 && FUNC_3(VAR_15.st_mode))
   {
    VAR_10->format = VAR_7;
    return VAR_10->format;
   }
   FUNC_4("directory \"%s\" does not appear to be a valid archive (\"toc.dat\" does not exist)",
      VAR_10->fSpec);
   VAR_11 = ((void*)0);
  }
  else
  {
   VAR_11 = FUNC_9(VAR_10->fSpec, VAR_3);
   if (!VAR_11)
    FUNC_4("could not open input file \"%s\": %m", VAR_10->fSpec);
  }
 }
 else
 {
  VAR_11 = VAR_9;
  if (!VAR_11)
   FUNC_4("could not open input file: %m");
 }

 if ((VAR_13 = FUNC_10(VAR_12, 1, 5, VAR_11)) != 5)
 {
  if (FUNC_7(VAR_11))
   FUNC_4("could not read input file: %m");
  else
   FUNC_4("input file is too short (read %lu, expected 5)",
      (unsigned long) VAR_13);
 }


 FUNC_14(&VAR_10->lookahead[0], VAR_12, 5);
 VAR_10->lookaheadLen = 5;

 if (FUNC_20(VAR_12, "PGDMP", 5) == 0)
 {
  int VAR_17;
  char VAR_18,
     VAR_19,
     VAR_20;






  if ((VAR_17 = FUNC_8(VAR_11)) == VAR_0)
   FUNC_1(VAR_11);

  VAR_18 = VAR_17;

  if ((VAR_17 = FUNC_8(VAR_11)) == VAR_0)
   FUNC_1(VAR_11);

  VAR_19 = VAR_17;


  VAR_10->lookahead[VAR_10->lookaheadLen++] = VAR_18;
  VAR_10->lookahead[VAR_10->lookaheadLen++] = VAR_19;


  if (VAR_18 > 1 || (VAR_18 == 1 && VAR_19 > 0))
  {
   if ((VAR_17 = FUNC_8(VAR_11)) == VAR_0)
    FUNC_1(VAR_11);

   VAR_20 = VAR_17;
   VAR_10->lookahead[VAR_10->lookaheadLen++] = VAR_20;
  }
  else
   VAR_20 = 0;

  VAR_10->version = FUNC_0(VAR_18, VAR_19, VAR_20);

  if ((VAR_10->intSize = FUNC_8(VAR_11)) == VAR_0)
   FUNC_1(VAR_11);
  VAR_10->lookahead[VAR_10->lookaheadLen++] = VAR_10->intSize;

  if (VAR_10->version >= VAR_1)
  {
   if ((VAR_10->offSize = FUNC_8(VAR_11)) == VAR_0)
    FUNC_1(VAR_11);
   VAR_10->lookahead[VAR_10->lookaheadLen++] = VAR_10->offSize;
  }
  else
   VAR_10->offSize = VAR_10->intSize;

  if ((VAR_17 = FUNC_8(VAR_11)) == VAR_0)
   FUNC_1(VAR_11);

  VAR_10->format = VAR_17;
  VAR_10->lookahead[VAR_10->lookaheadLen++] = VAR_10->format;
 }
 else
 {




  VAR_13 = FUNC_10(&VAR_10->lookahead[VAR_10->lookaheadLen], 1, 512 - VAR_10->lookaheadLen, VAR_11);

  VAR_10->lookaheadLen += VAR_13;

  if (VAR_10->lookaheadLen >= FUNC_19(VAR_5) &&
   (FUNC_20(VAR_10->lookahead, VAR_6, FUNC_19(VAR_6)) == 0 ||
    FUNC_20(VAR_10->lookahead, VAR_5, FUNC_19(VAR_5)) == 0))
  {




   FUNC_4("input file appears to be a text format dump. Please use psql.");
  }

  if (VAR_10->lookaheadLen != 512)
  {
   if (FUNC_6(VAR_11))
    FUNC_4("input file does not appear to be a valid archive (too short?)");
   else
    FUNC_1(VAR_11);
  }

  if (!FUNC_13(VAR_10->lookahead))
   FUNC_4("input file does not appear to be a valid archive");

  VAR_10->format = VAR_8;
 }


 if (FUNC_12(VAR_11, 0, VAR_4) != 0)
 {




  VAR_10->readHeader = 1;
 }
 else
  VAR_10->lookaheadLen = 0;


 if (VAR_14)
  if (FUNC_5(VAR_11) != 0)
   FUNC_4("could not close input file: %m");

 return VAR_10->format;
}
