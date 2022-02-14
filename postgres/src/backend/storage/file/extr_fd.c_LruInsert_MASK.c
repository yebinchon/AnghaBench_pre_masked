
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ fd; int fileMode; int fileFlags; int fileName; } ;
typedef TYPE_1__ Vfd ;
typedef size_t File ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (size_t) ;
 int VAR_0 ;
 int FUNC_5 () ;
 TYPE_1__* VAR_1 ;
 int FUNC_6 (int ,char*,...) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_7(File VAR_3)
{
 Vfd *VAR_4;

 FUNC_0(VAR_3 != 0);

 FUNC_2(FUNC_6(VAR_0, "LruInsert %d (%s)",
      VAR_3, VAR_1[VAR_3].fileName));

 VAR_4 = &VAR_1[VAR_3];

 if (FUNC_3(VAR_3))
 {

  FUNC_5();






  VAR_4->fd = FUNC_1(VAR_4->fileName, VAR_4->fileFlags,
          VAR_4->fileMode);
  if (VAR_4->fd < 0)
  {
   FUNC_2(FUNC_6(VAR_0, "re-open failed: %m"));
   return -1;
  }
  else
  {
   ++VAR_2;
  }
 }





 FUNC_4(VAR_3);

 return 0;
}
