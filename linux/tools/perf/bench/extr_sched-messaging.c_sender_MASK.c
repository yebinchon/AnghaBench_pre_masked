
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sender_context {unsigned int num_fds; int * out_fds; int wakefd; int ready_out; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 unsigned int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void *FUNC_3(struct sender_context *VAR_3)
{
 char VAR_4[VAR_0];
 unsigned int VAR_5, VAR_6;

 FUNC_1(VAR_3->ready_out, VAR_3->wakefd);


 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < VAR_3->num_fds; VAR_6++) {
   int VAR_7, VAR_8 = 0;

again:
   VAR_7 = FUNC_2(VAR_3->out_fds[VAR_6], VAR_4 + VAR_8,
        sizeof(VAR_4)-VAR_8);
   if (VAR_7 < 0)
    FUNC_0(VAR_1, "SENDER: write");
   VAR_8 += VAR_7;
   if (VAR_8 < VAR_0)
    goto again;
  }
 }

 return ((void*)0);
}
