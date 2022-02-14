
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int guc_options; int * cmdline_options; } ;
typedef TYPE_1__ Port ;
typedef int ListCell ;
typedef int GucContext ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char*,int ,int ) ;
 char* FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int * FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char**,int*,int *) ;
 int FUNC_7 (int,char**,int ,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(Port *VAR_3, bool VAR_4)
{
 GucContext VAR_5;
 ListCell *VAR_6;

 VAR_5 = VAR_4 ? VAR_1 : VAR_0;





 if (VAR_3->cmdline_options != ((void*)0))
 {





  char **VAR_7;
  int VAR_8;
  int VAR_9;

  VAR_8 = 2 + (FUNC_8(VAR_3->cmdline_options) + 1) / 2;

  VAR_7 = (char **) FUNC_5(VAR_8 * sizeof(char *));
  VAR_9 = 0;

  VAR_7[VAR_9++] = "postgres";

  FUNC_6(VAR_7, &VAR_9, VAR_3->cmdline_options);

  VAR_7[VAR_9] = ((void*)0);

  FUNC_0(VAR_9 < VAR_8);

  (void) FUNC_7(VAR_9, VAR_7, VAR_5, ((void*)0));
 }





 VAR_6 = FUNC_3(VAR_3->guc_options);
 while (VAR_6)
 {
  char *VAR_10;
  char *VAR_11;

  VAR_10 = FUNC_2(VAR_6);
  VAR_6 = FUNC_4(VAR_3->guc_options, VAR_6);

  VAR_11 = FUNC_2(VAR_6);
  VAR_6 = FUNC_4(VAR_3->guc_options, VAR_6);

  FUNC_1(VAR_10, VAR_11, VAR_5, VAR_2);
 }
}
