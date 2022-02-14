
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int filePos; int FH; } ;
typedef TYPE_1__ lclContext ;
struct TYPE_5__ {scalar_t__ formatData; } ;
typedef TYPE_2__ ArchiveHandle ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ) ;

__attribute__((used)) static int
FUNC_1(ArchiveHandle *VAR_1, const int VAR_2)
{
 lclContext *VAR_3 = (lclContext *) VAR_1->formatData;
 char VAR_4 = VAR_2;

 if (FUNC_0(&VAR_4, 1, VAR_3->FH) != 1)
  VAR_0;

 VAR_3->filePos += 1;
 return 1;
}
