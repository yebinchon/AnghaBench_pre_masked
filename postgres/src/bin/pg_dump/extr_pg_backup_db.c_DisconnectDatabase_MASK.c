
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int errbuf ;
struct TYPE_3__ {int * connection; scalar_t__ connCancel; } ;
typedef TYPE_1__ ArchiveHandle ;
typedef int Archive ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,char*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;

void
FUNC_4(Archive *VAR_1)
{
 ArchiveHandle *VAR_2 = (ArchiveHandle *) VAR_1;
 char VAR_3[1];

 if (!VAR_2->connection)
  return;

 if (VAR_2->connCancel)
 {





  if (FUNC_2(VAR_2->connection) == VAR_0)
   (void) FUNC_0(VAR_2->connCancel, VAR_3, sizeof(VAR_3));




  FUNC_3(VAR_2, ((void*)0));
 }

 FUNC_1(VAR_2->connection);
 VAR_2->connection = ((void*)0);
}
