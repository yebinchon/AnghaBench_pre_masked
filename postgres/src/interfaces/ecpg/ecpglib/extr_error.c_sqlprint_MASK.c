
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* sqlerrmc; size_t sqlerrml; } ;
struct sqlca_t {TYPE_1__ sqlerrm; } ;


 struct sqlca_t* FUNC_0 () ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,char*) ;
 int VAR_0 ;

void
FUNC_4(void)
{
 struct sqlca_t *VAR_1 = FUNC_0();

 if (VAR_1 == ((void*)0))
 {
  FUNC_2("out of memory");
  return;
 }

 VAR_1->sqlerrm.sqlerrmc[VAR_1->sqlerrm.sqlerrml] = '\0';
 FUNC_3(VAR_0, FUNC_1("SQL error: %s\n"), VAR_1->sqlerrm.sqlerrmc);
}
