
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fdstate; int fd; int fileName; } ;
typedef TYPE_1__ Vfd ;
typedef size_t File ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,size_t,...) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_6(File VAR_5)
{
 Vfd *VAR_6;

 FUNC_0(VAR_5 != 0);

 FUNC_1(FUNC_5(VAR_1, "LruDelete %d (%s)",
      VAR_5, VAR_3[VAR_5].fileName));

 VAR_6 = &VAR_3[VAR_5];





 if (FUNC_3(VAR_6->fd) != 0)
  FUNC_5(VAR_6->fdstate & VAR_0 ? VAR_1 : FUNC_4(VAR_1),
    "could not close file \"%s\": %m", VAR_6->fileName);
 VAR_6->fd = VAR_2;
 --VAR_4;


 FUNC_2(VAR_5);
}
