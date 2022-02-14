
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int filePos; } ;
typedef TYPE_1__ lclContext ;
struct TYPE_5__ {int FH; scalar_t__ formatData; } ;
typedef TYPE_2__ ArchiveHandle ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(ArchiveHandle *VAR_1)
{
 lclContext *VAR_2 = (lclContext *) VAR_1->formatData;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1->FH);
 if (VAR_3 == VAR_0)
  FUNC_0(VAR_1->FH);
 VAR_2->filePos += 1;
 return VAR_3;
}
