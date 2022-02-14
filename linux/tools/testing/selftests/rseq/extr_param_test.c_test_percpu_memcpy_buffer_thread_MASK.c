
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct percpu_memcpy_buffer_node {int dummy; } ;
struct percpu_memcpy_buffer {int dummy; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 long long VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,int,int ,int ) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_4 ;
 int FUNC_6 (struct percpu_memcpy_buffer*,struct percpu_memcpy_buffer_node*,int *) ;
 int FUNC_7 (struct percpu_memcpy_buffer*,struct percpu_memcpy_buffer_node,int *) ;

void *FUNC_8(void *VAR_5)
{
 long long VAR_6, VAR_7;
 struct percpu_memcpy_buffer *VAR_8 = (struct percpu_memcpy_buffer *)VAR_5;

 if (!VAR_1 && FUNC_3())
  FUNC_0();

 VAR_7 = VAR_2;
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  struct percpu_memcpy_buffer_node VAR_9;
  bool VAR_10;

  VAR_10 = FUNC_6(VAR_8, &VAR_9, ((void*)0));
  if (VAR_3)
   FUNC_5();
  if (VAR_10) {
   if (!FUNC_7(VAR_8, VAR_9, ((void*)0))) {

    FUNC_0();
   }
  }
 }

 FUNC_2("tid %d: number of rseq abort: %d, signals delivered: %u\n",
         (int) FUNC_1(), VAR_0, VAR_4);
 if (!VAR_1 && FUNC_4())
  FUNC_0();

 return ((void*)0);
}
