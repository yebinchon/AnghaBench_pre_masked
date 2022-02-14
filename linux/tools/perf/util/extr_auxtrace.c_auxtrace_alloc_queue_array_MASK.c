
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auxtrace_queue {int * priv; int head; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct auxtrace_queue* FUNC_1 (unsigned int,int) ;

__attribute__((used)) static struct auxtrace_queue *FUNC_2(unsigned int VAR_1)
{
 struct auxtrace_queue *VAR_2;
 unsigned int VAR_3, VAR_4;

 VAR_3 = VAR_0 / sizeof(struct auxtrace_queue);
 if (VAR_1 > VAR_3)
  return ((void*)0);

 VAR_2 = FUNC_1(VAR_1, sizeof(struct auxtrace_queue));
 if (!VAR_2)
  return ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  FUNC_0(&VAR_2[VAR_4].head);
  VAR_2[VAR_4].priv = ((void*)0);
 }

 return VAR_2;
}
