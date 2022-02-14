
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct thread** VAR_1 ;
 scalar_t__ FUNC_1 (struct thread*) ;
 void* FUNC_2 (struct thread**,int) ;
 struct thread* FUNC_3 (int ,int ) ;

__attribute__((used)) static struct thread *FUNC_4(int VAR_2)
{




 if ((VAR_2 >= VAR_0) || (VAR_1 == ((void*)0))) {
  int VAR_3, VAR_4 = FUNC_0(VAR_2+1);
  void *VAR_5;

  VAR_5 = FUNC_2(VAR_1, VAR_4 * sizeof(struct thread *));
  if (!VAR_5)
   return ((void*)0);

  VAR_1 = (struct thread **) VAR_5;
  for (VAR_3 = VAR_0; VAR_3 < VAR_4; ++VAR_3)
   VAR_1[VAR_3] = ((void*)0);

  VAR_0 = VAR_4;
 }


 if (VAR_1[VAR_2] == ((void*)0)) {
  VAR_1[VAR_2] = FUNC_3(0, 0);

  if (VAR_1[VAR_2]) {
   if (FUNC_1(VAR_1[VAR_2]) < 0)
    return ((void*)0);
  }
 }

 return VAR_1[VAR_2];
}
