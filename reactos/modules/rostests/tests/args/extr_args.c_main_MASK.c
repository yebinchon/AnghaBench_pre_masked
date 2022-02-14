
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 char* FUNC_1 () ;
 void* FUNC_2 (int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,char*) ;

int FUNC_5(int VAR_4, char* VAR_5[])
{
   int VAR_6;

   FUNC_0();
   VAR_0 = FUNC_2(VAR_2);
   VAR_1 = FUNC_2(VAR_3);

   FUNC_4("GetCommandLineA() %s\n",FUNC_1());
   FUNC_3("GetCommandLineA() %s\n",FUNC_1());
   FUNC_3("argc %d\n", VAR_4);
   for (VAR_6=0; VAR_6<VAR_4; VAR_6++)
     {
        FUNC_3("Argv[%d]: %x\n",VAR_6,VAR_5[VAR_6]);
        FUNC_3("Argv[%d]: '%s'\n",VAR_6,VAR_5[VAR_6]);
     }
   return 0;
}
