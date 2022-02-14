
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t tarFHpos; } ;
typedef TYPE_1__ lclContext ;
struct TYPE_8__ {size_t lookaheadLen; size_t lookaheadPos; size_t lookahead; scalar_t__ formatData; } ;
struct TYPE_7__ {int * nFH; int zFH; } ;
typedef TYPE_2__ TAR_MEMBER ;
typedef int FILE ;
typedef TYPE_3__ ArchiveHandle ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (char*,int,size_t,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (char*,int,size_t,int *) ;
 char* FUNC_6 (int ,int*) ;
 int FUNC_7 (void*,size_t,size_t) ;
 char const* FUNC_8 (int ) ;

__attribute__((used)) static size_t
FUNC_9(ArchiveHandle *VAR_2, void *VAR_3, size_t VAR_4, TAR_MEMBER *VAR_5, FILE *VAR_6)
{
 lclContext *VAR_7 = (lclContext *) VAR_2->formatData;
 size_t VAR_8;
 size_t VAR_9 = 0;
 size_t VAR_10 = 0;

 VAR_8 = VAR_2->lookaheadLen - VAR_2->lookaheadPos;
 if (VAR_8 > 0)
 {

  if (VAR_8 >= VAR_4)
   VAR_9 = VAR_4;
  else
   VAR_9 = VAR_8;


  FUNC_7(VAR_3, VAR_2->lookahead + VAR_2->lookaheadPos, VAR_9);
  VAR_2->lookaheadPos += VAR_9;


  VAR_4 -= VAR_9;
 }


 if (VAR_4 > 0)
 {
  if (VAR_6)
  {
   VAR_10 = FUNC_5(&((char *) VAR_3)[VAR_9], 1, VAR_4, VAR_6);
   if (VAR_10 != VAR_4 && !FUNC_4(VAR_6))
    FUNC_2(VAR_6);
  }
  else if (VAR_5)
  {
   if (VAR_5->zFH)
   {
    VAR_10 = FUNC_1(&((char *) VAR_3)[VAR_9], 1, VAR_4, VAR_5->zFH);
    if (VAR_10 != VAR_4 && !FUNC_0(VAR_5->zFH))
    {







     FUNC_3("could not read from input file: %s",
        FUNC_8(VAR_1));

    }
   }
   else
   {
    VAR_10 = FUNC_5(&((char *) VAR_3)[VAR_9], 1, VAR_4, VAR_5->nFH);
    if (VAR_10 != VAR_4 && !FUNC_4(VAR_5->nFH))
     FUNC_2(VAR_5->nFH);
   }
  }
  else
   FUNC_3("internal error -- neither th nor fh specified in _tarReadRaw()");
 }

 VAR_7->tarFHpos += VAR_10 + VAR_9;

 return (VAR_10 + VAR_9);
}
