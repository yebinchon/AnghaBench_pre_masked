
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* guid; } ;
typedef TYPE_1__ PERSON ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_1__* FUNC_5 (char*,char*,char*,char*,int ) ;
 int FUNC_6 () ;
 int VAR_0 ;
 int FUNC_7 (int,char**) ;
 int FUNC_8 (int *) ;

int FUNC_9(int VAR_1, char **VAR_2) {
 FUNC_0("registry", "enabled", 1);


 FUNC_7(VAR_1, VAR_2);
 FUNC_1(0);

 (void)VAR_1;
 (void)VAR_2;


 PERSON *VAR_3, *VAR_4;

 FUNC_2(VAR_0, "\n\nINITIALIZATION\n");

 FUNC_4();

 int VAR_5 = 2;

 FUNC_2(VAR_0, "\n\nADDING ENTRY\n");
 VAR_3 = FUNC_5("2c95abd0-1542-11e6-8c66-00508db7e9c9", "7c173980-145c-11e6-b86f-00508db7e9c1", "http://localhost:19999/", "test", FUNC_8(((void*)0)));

 if(0)
 while(VAR_5--) {



  VAR_3 = FUNC_5(((void*)0), "7c173980-145c-11e6-b86f-00508db7e9c1", "http://localhost:19999/", "test", FUNC_8(((void*)0)));




  VAR_3 = FUNC_5(VAR_3->guid, "7c173980-145c-11e6-b86f-00508db7e9c1", "http://127.0.0.1:19999/", "test", FUNC_8(((void*)0)));




  VAR_3 = FUNC_5(VAR_3->guid, "7c173980-145c-11e6-b86f-00508db7e9c1", "http://my.server:19999/", "test", FUNC_8(((void*)0)));




  VAR_3 = FUNC_5(VAR_3->guid, "7c173980-145c-11e6-b86f-00508db7e9c1", "http://my.server:19999/", "test", FUNC_8(((void*)0)));




  VAR_4 = FUNC_5(((void*)0), "7c173980-145c-11e6-b86f-00508db7e9c3", "http://localhost:19999/", "test", FUNC_8(((void*)0)));




  VAR_4 = FUNC_5(VAR_4->guid, "7c173980-145c-11e6-b86f-00508db7e9c3", "http://localhost:19999/", "test", FUNC_8(((void*)0)));
 }

 FUNC_2(VAR_0, "\n\nSAVE\n");
 FUNC_6();

 FUNC_2(VAR_0, "\n\nCLEANUP\n");
 FUNC_3();
 return 0;
}
