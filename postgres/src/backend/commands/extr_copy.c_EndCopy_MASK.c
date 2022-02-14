
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int copycontext; int * filename; int copy_file; scalar_t__ is_program; } ;
typedef TYPE_1__* CopyState ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int *) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_7(CopyState VAR_1)
{
 if (VAR_1->is_program)
 {
  FUNC_0(VAR_1);
 }
 else
 {
  if (VAR_1->filename != ((void*)0) && FUNC_1(VAR_1->copy_file))
   FUNC_3(VAR_0,
     (FUNC_4(),
      FUNC_5("could not close file \"%s\": %m",
       VAR_1->filename)));
 }

 FUNC_2(VAR_1->copycontext);
 FUNC_6(VAR_1);
}
