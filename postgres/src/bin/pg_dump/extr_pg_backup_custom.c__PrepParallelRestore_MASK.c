
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ pgoff_t ;
struct TYPE_6__ {scalar_t__ dataState; scalar_t__ dataPos; } ;
typedef TYPE_1__ lclTocEntry ;
struct TYPE_7__ {scalar_t__ hasSeek; } ;
typedef TYPE_2__ lclContext ;
struct TYPE_8__ {scalar_t__ dataLength; scalar_t__ formatData; struct TYPE_8__* next; } ;
typedef TYPE_3__ TocEntry ;
struct TYPE_9__ {int FH; TYPE_3__* toc; scalar_t__ formatData; } ;
typedef TYPE_4__ ArchiveHandle ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(ArchiveHandle *VAR_2)
{
 lclContext *VAR_3 = (lclContext *) VAR_2->formatData;
 TocEntry *VAR_4 = ((void*)0);
 lclTocEntry *VAR_5 = ((void*)0);
 TocEntry *VAR_6;






 for (VAR_6 = VAR_2->toc->next; VAR_6 != VAR_2->toc; VAR_6 = VAR_6->next)
 {
  lclTocEntry *VAR_7 = (lclTocEntry *) VAR_6->formatData;






  if (VAR_7->dataState != VAR_0)
   continue;


  if (VAR_4)
  {
   if (VAR_7->dataPos > VAR_5->dataPos)
    VAR_4->dataLength = VAR_7->dataPos - VAR_5->dataPos;
  }

  VAR_4 = VAR_6;
  VAR_5 = VAR_7;
 }


 if (VAR_4 && VAR_3->hasSeek)
 {
  pgoff_t VAR_8;

  if (FUNC_1(VAR_2->FH, 0, VAR_1) != 0)
   FUNC_0("error during file seek: %m");
  VAR_8 = FUNC_2(VAR_2->FH);
  if (VAR_8 > VAR_5->dataPos)
   VAR_4->dataLength = VAR_8 - VAR_5->dataPos;
 }
}
