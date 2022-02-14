
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cs; } ;
typedef TYPE_1__ lclContext ;
typedef int TocEntry ;
struct TYPE_6__ {int compression; scalar_t__ formatData; } ;
typedef scalar_t__ Oid ;
typedef TYPE_2__ ArchiveHandle ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(ArchiveHandle *VAR_1, TocEntry *VAR_2, Oid VAR_3)
{
 lclContext *VAR_4 = (lclContext *) VAR_1->formatData;

 if (VAR_3 == 0)
  FUNC_2("invalid OID for large object");

 FUNC_1(VAR_1, VAR_3);

 VAR_4->cs = FUNC_0(VAR_1->compression, VAR_0);
}
