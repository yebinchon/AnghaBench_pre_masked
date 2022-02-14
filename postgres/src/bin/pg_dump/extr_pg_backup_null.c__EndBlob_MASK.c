
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TocEntry ;
struct TYPE_4__ {int WriteDataPtr; } ;
typedef int Oid ;
typedef TYPE_1__ ArchiveHandle ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;

__attribute__((used)) static void
FUNC_1(ArchiveHandle *VAR_1, TocEntry *VAR_2, Oid VAR_3)
{
 VAR_1->WriteDataPtr = VAR_0;

 FUNC_0(VAR_1, "SELECT pg_catalog.lo_close(0);\n\n");
}
