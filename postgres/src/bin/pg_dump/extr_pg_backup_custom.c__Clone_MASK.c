
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * cs; } ;
typedef TYPE_1__ lclContext ;
struct TYPE_7__ {TYPE_1__* formatData; } ;
typedef TYPE_2__ ArchiveHandle ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(ArchiveHandle *VAR_0)
{
 lclContext *VAR_1 = (lclContext *) VAR_0->formatData;

 VAR_0->formatData = (lclContext *) FUNC_2(sizeof(lclContext));
 FUNC_1(VAR_0->formatData, VAR_1, sizeof(lclContext));
 VAR_1 = (lclContext *) VAR_0->formatData;


 if (VAR_1->cs != ((void*)0))
  FUNC_0("compressor active");







}
