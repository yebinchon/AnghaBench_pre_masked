
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int std_strings; int encoding; } ;
typedef int PQExpBuffer ;
typedef TYPE_1__ Archive ;


 int FUNC_0 (int ,char const*,char const*,int ,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(PQExpBuffer VAR_0, const char *VAR_1,
      const char *VAR_2, Archive *VAR_3)
{
 bool VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3->encoding,
        VAR_3->std_strings);
 if (!VAR_4)
  FUNC_1("could not parse reloptions array");
}
