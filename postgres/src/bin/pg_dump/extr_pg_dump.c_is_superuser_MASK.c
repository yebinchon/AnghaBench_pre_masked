
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int connection; } ;
typedef TYPE_1__ ArchiveHandle ;
typedef int Archive ;


 char* FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static bool
FUNC_2(Archive *VAR_0)
{
 ArchiveHandle *VAR_1 = (ArchiveHandle *) VAR_0;
 const char *VAR_2;

 VAR_2 = FUNC_0(VAR_1->connection, "is_superuser");

 if (VAR_2 && FUNC_1(VAR_2, "on") == 0)
  return 1;

 return 0;
}
