
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lclContext ;
struct TYPE_3__ {int * formatData; } ;
typedef TYPE_1__ ArchiveHandle ;


 int FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(ArchiveHandle *VAR_0)
{
 lclContext *VAR_1 = (lclContext *) VAR_0->formatData;

 VAR_0->formatData = (lclContext *) FUNC_1(sizeof(lclContext));
 FUNC_0(VAR_0->formatData, VAR_1, sizeof(lclContext));
 VAR_1 = (lclContext *) VAR_0->formatData;
}
