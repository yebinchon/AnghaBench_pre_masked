
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
 int VAR_1 ;
 int FUNC_0 (int const,int ) ;

__attribute__((used)) static int
FUNC_1(ArchiveHandle *VAR_2, const int VAR_3)
{
 lclContext *VAR_4 = (lclContext *) VAR_2->formatData;
 int VAR_5;

 if ((VAR_5 = FUNC_0(VAR_3, VAR_2->FH)) == VAR_0)
  VAR_1;
 VAR_4->filePos += 1;

 return 1;
}
