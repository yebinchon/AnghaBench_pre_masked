
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int batname; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int
FUNC_5(int VAR_2)
{
    char *VAR_3;
    int VAR_4;
    int VAR_5 = 0;

    for (VAR_4 = 1; VAR_4 < VAR_0; ++VAR_4)
    {
 VAR_3 = FUNC_4(VAR_1[VAR_4].batname);
 if (VAR_3 != ((void*)0) && FUNC_0(VAR_3))
 {
     ++VAR_5;
     if (VAR_2)
     {
  FUNC_2("removing %s\n", VAR_3);
  FUNC_3(VAR_3);
     }
     else
  FUNC_2(" - the batch file %s\n", VAR_3);
     FUNC_1(VAR_3);
 }
    }
    return VAR_5;
}
