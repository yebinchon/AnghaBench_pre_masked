
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TocEntry ;
struct TYPE_8__ {TYPE_1__* ropt; } ;
struct TYPE_9__ {scalar_t__ version; int WriteDataPtr; TYPE_2__ public; } ;
struct TYPE_7__ {scalar_t__ dropSchema; } ;
typedef scalar_t__ Oid ;
typedef TYPE_3__ ArchiveHandle ;


 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,char*,scalar_t__,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(ArchiveHandle *VAR_3, TocEntry *VAR_4, Oid VAR_5)
{
 bool VAR_6 = (VAR_3->version < VAR_1);

 if (VAR_5 == 0)
  FUNC_2("invalid OID for large object");


 if (VAR_6 && VAR_3->public.ropt->dropSchema)
  FUNC_0(VAR_3, VAR_5);

 if (VAR_6)
  FUNC_1(VAR_3, "SELECT pg_catalog.lo_open(pg_catalog.lo_create('%u'), %d);\n",
     VAR_5, VAR_0);
 else
  FUNC_1(VAR_3, "SELECT pg_catalog.lo_open('%u', %d);\n",
     VAR_5, VAR_0);

 VAR_3->WriteDataPtr = VAR_2;
}
