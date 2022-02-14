
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int filename; int reached_eof; scalar_t__ is_copy_from; int copy_file; int is_program; } ;
typedef TYPE_1__* CopyState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (int,int ) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(CopyState VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3->is_program);

 VAR_4 = FUNC_1(VAR_3->copy_file);
 if (VAR_4 == -1)
  FUNC_2(VAR_1,
    (FUNC_4(),
     FUNC_6("could not close pipe to external command: %m")));
 else if (VAR_4 != 0)
 {






  if (VAR_3->is_copy_from && !VAR_3->reached_eof &&
   FUNC_7(VAR_4, VAR_2))
   return;

  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),
     FUNC_6("program \"%s\" failed",
      VAR_3->filename),
     FUNC_5("%s", FUNC_8(VAR_4))));
 }
}
