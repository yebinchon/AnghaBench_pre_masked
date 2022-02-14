
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * FH; } ;
typedef TYPE_1__ lclContext ;
struct TYPE_8__ {scalar_t__ formatData; } ;
typedef int TAR_MEMBER ;
typedef TYPE_2__ ArchiveHandle ;


 int FUNC_0 (char*,int,size_t,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int * FUNC_2 (TYPE_2__*,char*,char) ;
 size_t FUNC_3 (char*,int,int *) ;

__attribute__((used)) static void
FUNC_4(ArchiveHandle *VAR_0, char *VAR_1)
{
 lclContext *VAR_2 = (lclContext *) VAR_0->formatData;
 char VAR_3[4096];
 size_t VAR_4;
 TAR_MEMBER *VAR_5;

 if (!VAR_1)
  return;

 VAR_5 = FUNC_2(VAR_0, VAR_1, 'r');
 VAR_2->FH = VAR_5;

 while ((VAR_4 = FUNC_3(VAR_3, 4095, VAR_5)) > 0)
 {
  VAR_3[VAR_4] = '\0';
  FUNC_0(VAR_3, 1, VAR_4, VAR_0);
 }

 FUNC_1(VAR_0, VAR_5);
}
