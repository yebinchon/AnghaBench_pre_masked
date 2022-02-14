
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* filename; } ;
typedef TYPE_1__ lclTocEntry ;
struct TYPE_5__ {scalar_t__ formatData; } ;
typedef TYPE_2__ TocEntry ;
typedef int ArchiveHandle ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void
FUNC_1(ArchiveHandle *VAR_0, TocEntry *VAR_1)
{
 lclTocEntry *VAR_2 = (lclTocEntry *) VAR_1->formatData;





 if (VAR_2->filename)
  FUNC_0(VAR_0, VAR_2->filename);
 else
  FUNC_0(VAR_0, "");
}
