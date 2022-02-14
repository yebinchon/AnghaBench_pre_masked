
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * connection; } ;
typedef int PGconn ;
typedef TYPE_1__ ArchiveHandle ;
typedef int Archive ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_1__*,char const*,char const*) ;
 int FUNC_6 (TYPE_1__*,int *) ;

void
FUNC_7(ArchiveHandle *VAR_1, const char *VAR_2, const char *VAR_3)
{
 PGconn *VAR_4;
 const char *VAR_5;
 const char *VAR_6;

 if (!VAR_2)
  VAR_5 = FUNC_2(VAR_1->connection);
 else
  VAR_5 = VAR_2;

 if (!VAR_3)
  VAR_6 = FUNC_4(VAR_1->connection);
 else
  VAR_6 = VAR_3;

 VAR_4 = FUNC_5(VAR_1, VAR_5, VAR_6);


 FUNC_6(VAR_1, VAR_4);

 FUNC_3(VAR_1->connection);
 VAR_1->connection = VAR_4;


 FUNC_1(FUNC_0((Archive *) VAR_1,
          VAR_0));
}
