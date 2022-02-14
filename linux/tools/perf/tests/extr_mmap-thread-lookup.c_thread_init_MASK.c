
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_data {int tid; void* map; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int *,int ,int,int,int,int ) ;
 int VAR_7 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,void*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct thread_data *VAR_8)
{
 void *VAR_9;

 VAR_9 = FUNC_0(((void*)0), VAR_7,
     VAR_4|VAR_5|VAR_3,
     VAR_2|VAR_0, -1, 0);

 if (VAR_9 == VAR_1) {
  FUNC_1("mmap failed");
  return -1;
 }

 VAR_8->map = VAR_9;
 VAR_8->tid = FUNC_3(VAR_6);

 FUNC_2("tid = %d, map = %p\n", VAR_8->tid, VAR_9);
 return 0;
}
