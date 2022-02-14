
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t filePos; int FH; } ;
typedef TYPE_1__ lclContext ;
struct TYPE_5__ {scalar_t__ formatData; } ;
typedef TYPE_2__ ArchiveHandle ;


 int VAR_0 ;
 size_t FUNC_0 (void const*,size_t,int ) ;

__attribute__((used)) static void
FUNC_1(ArchiveHandle *VAR_1, const void *VAR_2, size_t VAR_3)
{
 lclContext *VAR_4 = (lclContext *) VAR_1->formatData;

 if (FUNC_0(VAR_2, VAR_3, VAR_4->FH) != VAR_3)
  VAR_0;

 VAR_4->filePos += VAR_3;
}
