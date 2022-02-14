
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int connection; } ;
typedef int PGresult ;
typedef scalar_t__ ExecStatusType ;
typedef TYPE_1__ ArchiveHandle ;
typedef int Archive ;


 int * FUNC_0 (int ,char const*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,char const*) ;

PGresult *
FUNC_3(Archive *VAR_0, const char *VAR_1, ExecStatusType VAR_2)
{
 ArchiveHandle *VAR_3 = (ArchiveHandle *) VAR_0;
 PGresult *VAR_4;

 VAR_4 = FUNC_0(VAR_3->connection, VAR_1);
 if (FUNC_1(VAR_4) != VAR_2)
  FUNC_2(VAR_3, VAR_1);
 return VAR_4;
}
