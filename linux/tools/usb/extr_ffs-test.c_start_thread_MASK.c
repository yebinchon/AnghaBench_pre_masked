
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int filename; int id; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int,char*,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int ,struct thread*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct thread *VAR_1)
{
 FUNC_0("%s: starting\n", VAR_1->filename);

 FUNC_1(FUNC_2(&VAR_1->id, ((void*)0), VAR_0, VAR_1) < 0,
        "pthread_create(%s)", VAR_1->filename);
}
