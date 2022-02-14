
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int filename; int id; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct thread *VAR_0)
{
 int VAR_1 = FUNC_2(VAR_0->id, ((void*)0));

 if (VAR_1 < 0)
  FUNC_1("%s: joining thread", VAR_0->filename);
 else
  FUNC_0("%s: joined\n", VAR_0->filename);
}
