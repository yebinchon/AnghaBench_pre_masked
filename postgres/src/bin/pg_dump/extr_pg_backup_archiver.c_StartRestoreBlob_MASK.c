
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ version; int loFd; int writingBlob; scalar_t__ connection; scalar_t__ lo_buf_used; int blobCount; } ;
typedef scalar_t__ Oid ;
typedef TYPE_1__ ArchiveHandle ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,char*,scalar_t__,int ) ;
 int FUNC_3 (char*,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__,int ) ;
 int FUNC_6 (char*,scalar_t__) ;

void
FUNC_7(ArchiveHandle *VAR_2, Oid VAR_3, bool VAR_4)
{
 bool VAR_5 = (VAR_2->version < VAR_1);
 Oid VAR_6;

 VAR_2->blobCount++;


 VAR_2->lo_buf_used = 0;

 FUNC_6("restoring large object with OID %u", VAR_3);


 if (VAR_5 && VAR_4)
  FUNC_0(VAR_2, VAR_3);

 if (VAR_2->connection)
 {
  if (VAR_5)
  {
   VAR_6 = FUNC_4(VAR_2->connection, VAR_3);
   if (VAR_6 == 0 || VAR_6 != VAR_3)
    FUNC_3("could not create large object %u: %s",
       VAR_3, FUNC_1(VAR_2->connection));
  }
  VAR_2->loFd = FUNC_5(VAR_2->connection, VAR_3, VAR_0);
  if (VAR_2->loFd == -1)
   FUNC_3("could not open large object %u: %s",
      VAR_3, FUNC_1(VAR_2->connection));
 }
 else
 {
  if (VAR_5)
   FUNC_2(VAR_2, "SELECT pg_catalog.lo_open(pg_catalog.lo_create('%u'), %d);\n",
      VAR_3, VAR_0);
  else
   FUNC_2(VAR_2, "SELECT pg_catalog.lo_open('%u', %d);\n",
      VAR_3, VAR_0);
 }

 VAR_2->writingBlob = 1;
}
