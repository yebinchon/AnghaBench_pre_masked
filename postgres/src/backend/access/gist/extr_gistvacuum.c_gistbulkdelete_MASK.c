
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IndexVacuumInfo ;
typedef int IndexBulkDeleteResult ;
typedef int IndexBulkDeleteCallback ;
typedef int GistBulkDeleteResult ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,int *,int ,void*) ;

IndexBulkDeleteResult *
FUNC_2(IndexVacuumInfo *VAR_0, IndexBulkDeleteResult *VAR_1,
      IndexBulkDeleteCallback VAR_2, void *VAR_3)
{
 GistBulkDeleteResult *VAR_4 = (GistBulkDeleteResult *) VAR_1;


 if (VAR_4 == ((void*)0))
  VAR_4 = FUNC_0();

 FUNC_1(VAR_0, VAR_4, VAR_2, VAR_3);

 return (IndexBulkDeleteResult *) VAR_4;
}
