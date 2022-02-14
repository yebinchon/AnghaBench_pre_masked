
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int connection; } ;
typedef TYPE_1__ ArchiveHandle ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void
FUNC_3(ArchiveHandle *VAR_0, const char *VAR_1)
{
 FUNC_2("query failed: %s",
     FUNC_0(VAR_0->connection));
 FUNC_1("query was: %s", VAR_1);
}
