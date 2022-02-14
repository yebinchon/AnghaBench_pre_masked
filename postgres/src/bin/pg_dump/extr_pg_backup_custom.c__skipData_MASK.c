
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t filePos; } ;
typedef TYPE_1__ lclContext ;
struct TYPE_6__ {int FH; scalar_t__ formatData; } ;
typedef TYPE_2__ ArchiveHandle ;


 size_t FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 size_t FUNC_3 (char*,int,size_t,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (size_t) ;

__attribute__((used)) static void
FUNC_6(ArchiveHandle *VAR_0)
{
 lclContext *VAR_1 = (lclContext *) VAR_0->formatData;
 size_t VAR_2;
 char *VAR_3 = ((void*)0);
 int VAR_4 = 0;
 size_t VAR_5;

 VAR_2 = FUNC_0(VAR_0);
 while (VAR_2 != 0)
 {
  if (VAR_2 > VAR_4)
  {
   if (VAR_3)
    FUNC_4(VAR_3);
   VAR_3 = (char *) FUNC_5(VAR_2);
   VAR_4 = VAR_2;
  }
  if ((VAR_5 = FUNC_3(VAR_3, 1, VAR_2, VAR_0->FH)) != VAR_2)
  {
   if (FUNC_2(VAR_0->FH))
    FUNC_1("could not read from input file: end of file");
   else
    FUNC_1("could not read from input file: %m");
  }

  VAR_1->filePos += VAR_2;

  VAR_2 = FUNC_0(VAR_0);
 }

 if (VAR_3)
  FUNC_4(VAR_3);
}
