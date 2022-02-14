
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


 size_t FUNC_0 (void const*,size_t,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(ArchiveHandle *VAR_0, const void *VAR_1, size_t VAR_2)
{
 lclContext *VAR_3 = (lclContext *) VAR_0->formatData;

 if (VAR_2 > 0 && FUNC_0(VAR_1, VAR_2, VAR_3->dataFH) != VAR_2)
  FUNC_1("could not write to output file: %s",
     FUNC_2(VAR_3->dataFH));


 return;
}
