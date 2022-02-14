
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {size_t lo_buf_used; int writingBlob; scalar_t__ lo_buf; int loFd; scalar_t__ connection; } ;
struct TYPE_9__ {int data; } ;
typedef TYPE_1__* PQExpBuffer ;
typedef TYPE_2__ ArchiveHandle ;


 int FUNC_0 (TYPE_2__*,char*,int ) ;
 int FUNC_1 (TYPE_1__*,unsigned char const*,size_t,TYPE_2__*) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,unsigned long,unsigned long) ;
 size_t FUNC_5 (scalar_t__,int ,scalar_t__,size_t) ;
 int FUNC_6 (char*,char*,size_t) ;
 int FUNC_7 (int ,unsigned long,unsigned long) ;

__attribute__((used)) static void
FUNC_8(ArchiveHandle *VAR_0)
{
 if (VAR_0->connection)
 {
  size_t VAR_1;

  VAR_1 = FUNC_5(VAR_0->connection, VAR_0->loFd, VAR_0->lo_buf, VAR_0->lo_buf_used);
  FUNC_7(FUNC_6("wrote %lu byte of large object data (result = %lu)",
         "wrote %lu bytes of large object data (result = %lu)",
         VAR_0->lo_buf_used),
      (unsigned long) VAR_0->lo_buf_used, (unsigned long) VAR_1);
  if (VAR_1 != VAR_0->lo_buf_used)
   FUNC_4("could not write to large object (result: %lu, expected: %lu)",
      (unsigned long) VAR_1, (unsigned long) VAR_0->lo_buf_used);
 }
 else
 {
  PQExpBuffer VAR_2 = FUNC_2();

  FUNC_1(VAR_2,
         (const unsigned char *) VAR_0->lo_buf,
         VAR_0->lo_buf_used,
         VAR_0);


  VAR_0->writingBlob = 0;
  FUNC_0(VAR_0, "SELECT pg_catalog.lowrite(0, %s);\n", VAR_2->data);
  VAR_0->writingBlob = 1;

  FUNC_3(VAR_2);
 }
 VAR_0->lo_buf_used = 0;
}
