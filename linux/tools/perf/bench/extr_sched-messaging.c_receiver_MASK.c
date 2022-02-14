
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct receiver_context {unsigned int num_packets; int * in_fds; int wakefd; int ready_out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void *FUNC_4(struct receiver_context* VAR_3)
{
 unsigned int VAR_4;

 if (!VAR_2)
  FUNC_0(VAR_3->in_fds[1]);


 FUNC_3(VAR_3->ready_out, VAR_3->wakefd);


 for (VAR_4 = 0; VAR_4 < VAR_3->num_packets; VAR_4++) {
  char VAR_5[VAR_0];
  int VAR_6, VAR_7 = 0;

again:
  VAR_6 = FUNC_2(VAR_3->in_fds[0], VAR_5 + VAR_7, VAR_0 - VAR_7);
  if (VAR_6 < 0)
   FUNC_1(VAR_1, "SERVER: read");
  VAR_7 += VAR_6;
  if (VAR_7 < VAR_0)
   goto again;
 }

 return ((void*)0);
}
