
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int connection; } ;
typedef int PGresult ;
typedef TYPE_1__ ArchiveHandle ;
typedef int Archive ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,char const*) ;

void
FUNC_4(Archive *VAR_1, const char *VAR_2)
{
 ArchiveHandle *VAR_3 = (ArchiveHandle *) VAR_1;
 PGresult *VAR_4;

 VAR_4 = FUNC_1(VAR_3->connection, VAR_2);
 if (FUNC_2(VAR_4) != VAR_0)
  FUNC_3(VAR_3, VAR_2);
 FUNC_0(VAR_4);
}
