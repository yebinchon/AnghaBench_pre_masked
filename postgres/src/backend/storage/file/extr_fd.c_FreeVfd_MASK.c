
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* fileName; int fdstate; size_t nextFree; } ;
typedef TYPE_1__ Vfd ;
typedef size_t File ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ,char*,size_t,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(File VAR_2)
{
 Vfd *VAR_3 = &VAR_1[VAR_2];

 FUNC_0(FUNC_1(VAR_0, "FreeVfd: %d (%s)",
      VAR_2, VAR_3->fileName ? VAR_3->fileName : ""));

 if (VAR_3->fileName != ((void*)0))
 {
  FUNC_2(VAR_3->fileName);
  VAR_3->fileName = ((void*)0);
 }
 VAR_3->fdstate = 0x0;

 VAR_3->nextFree = VAR_1[0].nextFree;
 VAR_1[0].nextFree = VAR_2;
}
