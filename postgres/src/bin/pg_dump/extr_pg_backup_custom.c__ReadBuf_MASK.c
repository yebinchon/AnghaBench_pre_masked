
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t filePos; } ;
typedef TYPE_1__ lclContext ;
struct TYPE_5__ {int FH; scalar_t__ formatData; } ;
typedef TYPE_2__ ArchiveHandle ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (void*,int,size_t,int ) ;

__attribute__((used)) static void
FUNC_2(ArchiveHandle *VAR_0, void *VAR_1, size_t VAR_2)
{
 lclContext *VAR_3 = (lclContext *) VAR_0->formatData;

 if (FUNC_1(VAR_1, 1, VAR_2, VAR_0->FH) != VAR_2)
  FUNC_0(VAR_0->FH);
 VAR_3->filePos += VAR_2;

 return;
}
