
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ lo_buf_used; int loFd; scalar_t__ connection; scalar_t__ writingBlob; } ;
typedef int Oid ;
typedef TYPE_1__ ArchiveHandle ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__,int) ;

void
FUNC_3(ArchiveHandle *VAR_0, Oid VAR_1)
{
 if (VAR_0->lo_buf_used > 0)
 {

  FUNC_1(VAR_0);
 }

 VAR_0->writingBlob = 0;

 if (VAR_0->connection)
 {
  FUNC_2(VAR_0->connection, VAR_0->loFd);
  VAR_0->loFd = -1;
 }
 else
 {
  FUNC_0(VAR_0, "SELECT pg_catalog.lo_close(0);\n\n");
 }
}
