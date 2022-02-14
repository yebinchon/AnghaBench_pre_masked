
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int teReqs ;
struct TYPE_3__ {int reqs; } ;
typedef TYPE_1__ TocEntry ;
typedef int DumpId ;
typedef int ArchiveHandle ;


 TYPE_1__* FUNC_0 (int *,int ) ;

teReqs
FUNC_1(ArchiveHandle *VAR_0, DumpId VAR_1)
{
 TocEntry *VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (!VAR_2)
  return 0;

 return VAR_2->reqs;
}
