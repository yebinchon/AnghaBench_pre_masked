
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int doc; int * out; } ;
typedef TYPE_1__ globals ;
typedef int fz_output ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*) ;
 char* FUNC_1 (int *,char const*,int*,int*,int) ;
 int FUNC_2 (int *,int *,char*,...) ;
 int FUNC_3 (int *,TYPE_1__*,int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,TYPE_1__*,char*,int,int) ;
 int FUNC_7 (char const*,char*) ;

__attribute__((used)) static void
FUNC_8(fz_context *VAR_0, globals *VAR_1, char *VAR_2, int VAR_3, const char *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 int VAR_8;
 int VAR_9;
 fz_output *VAR_10 = VAR_1->out;

 if (!VAR_1->doc)
  FUNC_4();

 VAR_8 = !FUNC_7(VAR_4, "1-N");

 VAR_9 = FUNC_5(VAR_0, VAR_1->doc);

 while ((VAR_4 = FUNC_1(VAR_0, VAR_4, &VAR_6, &VAR_7, VAR_9)))
 {
  if (VAR_8)
   FUNC_2(VAR_0, VAR_10, "Retrieving info from pages %d-%d...\n", VAR_6, VAR_7);
  for (VAR_5 = VAR_6; VAR_5 <= VAR_7; VAR_5++)
  {
   FUNC_3(VAR_0, VAR_1, VAR_5, VAR_3);
   if (!VAR_8)
   {
    FUNC_2(VAR_0, VAR_10, "Page %d:\n", VAR_5);
    FUNC_6(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5);
    FUNC_2(VAR_0, VAR_10, "\n");
    FUNC_0(VAR_0, VAR_1);
   }
  }
 }

 if (VAR_8)
  FUNC_6(VAR_0, VAR_1, VAR_2, VAR_3, -1);
}
