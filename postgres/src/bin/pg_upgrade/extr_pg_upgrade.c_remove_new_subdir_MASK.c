
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int new_path ;
struct TYPE_2__ {char* pgdata; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int,char*,char*,char const*) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_2, bool VAR_3)
{
 char VAR_4[VAR_0];

 FUNC_2("Deleting files from new %s", VAR_2);

 FUNC_4(VAR_4, sizeof(VAR_4), "%s/%s", VAR_1.pgdata, VAR_2);
 if (!FUNC_3(VAR_4, VAR_3))
  FUNC_1("could not delete directory \"%s\"\n", VAR_4);

 FUNC_0();
}
