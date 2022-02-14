
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
typedef TYPE_1__* PQExpBuffer ;
typedef int ArchiveHandle ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (TYPE_1__*,unsigned char const*,size_t,int *) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(ArchiveHandle *VAR_0, const void *VAR_1, size_t VAR_2)
{
 if (VAR_2 > 0)
 {
  PQExpBuffer VAR_3 = FUNC_2();

  FUNC_1(VAR_3,
         (const unsigned char *) VAR_1,
         VAR_2,
         VAR_0);

  FUNC_0(VAR_0, "SELECT pg_catalog.lowrite(0, %s);\n", VAR_3->data);

  FUNC_3(VAR_3);
 }
 return;
}
