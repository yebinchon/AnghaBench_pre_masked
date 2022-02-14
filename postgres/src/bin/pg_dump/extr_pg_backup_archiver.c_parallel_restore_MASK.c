
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int TocEntry ;
struct TYPE_5__ {scalar_t__ n_errors; } ;
struct TYPE_6__ {TYPE_1__ public; int * connection; } ;
typedef TYPE_2__ ArchiveHandle ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int *,int) ;

int
FUNC_2(ArchiveHandle *VAR_0, TocEntry *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0->connection != ((void*)0));


 VAR_0->public.n_errors = 0;


 VAR_2 = FUNC_1(VAR_0, VAR_1, 1);

 return VAR_2;
}
