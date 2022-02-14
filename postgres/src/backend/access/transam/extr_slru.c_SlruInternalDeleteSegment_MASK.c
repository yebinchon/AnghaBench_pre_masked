
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* Dir; } ;
typedef TYPE_1__* SlruCtl ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,char*,char*,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(SlruCtl VAR_2, char *VAR_3)
{
 char VAR_4[VAR_1];

 FUNC_2(VAR_4, VAR_1, "%s/%s", VAR_2->Dir, VAR_3);
 FUNC_0(VAR_0,
   (FUNC_1("removing file \"%s\"", VAR_4)));
 FUNC_3(VAR_4);
}
