
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int user_name; int database_name; } ;
typedef TYPE_1__ Port ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char**,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (char**,int*,int ) ;
 int VAR_3 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(Port *VAR_4)
{
 char **VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 VAR_6 = 2;
 VAR_6 += (FUNC_8(VAR_1) + 1) / 2;

 VAR_5 = (char **) FUNC_1(VAR_2,
           VAR_6 * sizeof(char *));
 VAR_7 = 0;

 VAR_5[VAR_7++] = "postgres";





 FUNC_7(VAR_5, &VAR_7, VAR_1);

 VAR_5[VAR_7] = ((void*)0);

 FUNC_0(VAR_7 < VAR_6);




 FUNC_4(VAR_0,
   (FUNC_5("%s child[%d]: starting with (",
        VAR_3, (int) FUNC_6())));
 for (VAR_8 = 0; VAR_8 < VAR_7; ++VAR_8)
  FUNC_4(VAR_0,
    (FUNC_5("\t%s", VAR_5[VAR_8])));
 FUNC_4(VAR_0,
   (FUNC_5(")")));





 FUNC_2(VAR_2);

 FUNC_3(VAR_7, VAR_5, VAR_4->database_name, VAR_4->user_name);
}
