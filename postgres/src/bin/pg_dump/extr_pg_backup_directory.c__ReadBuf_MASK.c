
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dataFH; } ;
typedef TYPE_1__ lclContext ;
struct TYPE_5__ {scalar_t__ formatData; } ;
typedef TYPE_2__ ArchiveHandle ;


 size_t FUNC_0 (void*,size_t,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(ArchiveHandle *VAR_0, void *VAR_1, size_t VAR_2)
{
 lclContext *VAR_3 = (lclContext *) VAR_0->formatData;





 if (FUNC_0(VAR_1, VAR_2, VAR_3->dataFH) != VAR_2)
  FUNC_1("could not read from input file: end of file");

 return;
}
