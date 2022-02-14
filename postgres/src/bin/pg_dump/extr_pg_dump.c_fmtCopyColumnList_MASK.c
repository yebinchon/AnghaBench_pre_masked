
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int numatts; char** attnames; int* attisdropped; char* attgenerated; } ;
typedef TYPE_1__ TableInfo ;
struct TYPE_8__ {char const* data; } ;
typedef TYPE_2__* PQExpBuffer ;


 int FUNC_0 (TYPE_2__*,char) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static const char *
FUNC_3(const TableInfo *VAR_0, PQExpBuffer VAR_1)
{
 int VAR_2 = VAR_0->numatts;
 char **VAR_3 = VAR_0->attnames;
 bool *VAR_4 = VAR_0->attisdropped;
 char *VAR_5 = VAR_0->attgenerated;
 bool VAR_6;
 int VAR_7;

 FUNC_0(VAR_1, '(');
 VAR_6 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
 {
  if (VAR_4[VAR_7])
   continue;
  if (VAR_5[VAR_7])
   continue;
  if (VAR_6)
   FUNC_1(VAR_1, ", ");
  FUNC_1(VAR_1, FUNC_2(VAR_3[VAR_7]));
  VAR_6 = 1;
 }

 if (!VAR_6)
  return "";

 FUNC_0(VAR_1, ')');
 return VAR_1->data;
}
