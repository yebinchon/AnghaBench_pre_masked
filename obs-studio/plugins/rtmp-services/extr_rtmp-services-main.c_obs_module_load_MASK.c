
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int proc_handler_t ;
struct TYPE_4__ {int array; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_1__ VAR_3 ;
 int * FUNC_5 () ;
 char* FUNC_6 () ;
 char* FUNC_7 (char*) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (int ,int ,int ,char*,char*,int ,int *) ;

bool FUNC_12(void)
{
 FUNC_3();

 FUNC_2(&VAR_3, "rtmp-services plugin (libobs ");
 FUNC_1(&VAR_3, FUNC_6());
 FUNC_1(&VAR_3, ")");

 proc_handler_t *VAR_8 = FUNC_5();
 FUNC_10(VAR_8, "void twitch_ingests_refresh(int seconds)",
    VAR_4, ((void*)0));


 char *VAR_9 = FUNC_8("");
 char *VAR_10 = FUNC_7("");

 if (VAR_10) {
  VAR_7 = FUNC_11(VAR_0,
       VAR_3.array,
       VAR_1, VAR_9,
       VAR_10,
       VAR_2, ((void*)0));
 }

 FUNC_4();

 FUNC_0(VAR_9);
 FUNC_0(VAR_10);


 FUNC_9(&VAR_5);
 FUNC_9(&VAR_6);
 return 1;
}
