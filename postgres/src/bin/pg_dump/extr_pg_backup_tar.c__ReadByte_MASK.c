
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


 int FUNC_0 (char*) ;
 size_t FUNC_1 (unsigned char*,int,int ) ;

__attribute__((used)) static int
FUNC_2(ArchiveHandle *VAR_0)
{
 lclContext *VAR_1 = (lclContext *) VAR_0->formatData;
 size_t VAR_2;
 unsigned char VAR_3;

 VAR_2 = FUNC_1(&VAR_3, 1, VAR_1->FH);
 if (VAR_2 != 1)

  FUNC_0("could not read from input file: end of file");
 VAR_1->filePos += 1;
 return VAR_3;
}
