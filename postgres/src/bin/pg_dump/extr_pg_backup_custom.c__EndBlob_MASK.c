
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cs; } ;
typedef TYPE_1__ lclContext ;
typedef int TocEntry ;
struct TYPE_7__ {scalar_t__ formatData; } ;
typedef int Oid ;
typedef TYPE_2__ ArchiveHandle ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_2(ArchiveHandle *VAR_0, TocEntry *VAR_1, Oid VAR_2)
{
 lclContext *VAR_3 = (lclContext *) VAR_0->formatData;

 FUNC_0(VAR_0, VAR_3->cs);

 FUNC_1(VAR_0, 0);
}
