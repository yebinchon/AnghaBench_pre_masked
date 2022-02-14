
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * filename; } ;
typedef TYPE_2__ lclTocEntry ;
struct TYPE_10__ {scalar_t__ formatData; } ;
typedef TYPE_3__ TocEntry ;
struct TYPE_8__ {scalar_t__ verbose; } ;
struct TYPE_11__ {TYPE_1__ public; } ;
typedef TYPE_4__ ArchiveHandle ;


 int FUNC_0 (TYPE_4__*,char*,int *) ;

__attribute__((used)) static void
FUNC_1(ArchiveHandle *VAR_0, TocEntry *VAR_1)
{
 lclTocEntry *VAR_2 = (lclTocEntry *) VAR_1->formatData;

 if (VAR_0->public.verbose && VAR_2->filename != ((void*)0))
  FUNC_0(VAR_0, "-- File: %s\n", VAR_2->filename);
}
