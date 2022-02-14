
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worker {unsigned long ops; int * futex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,int *,int ) ;
 unsigned int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void *FUNC_6(void *VAR_11)
{
 int VAR_12;
 struct worker *VAR_13 = (struct worker *) VAR_11;
 unsigned int VAR_14;
 unsigned long VAR_15 = VAR_13->ops;

 FUNC_3(&VAR_7);
 VAR_10--;
 if (!VAR_10)
  FUNC_1(&VAR_8);
 FUNC_2(&VAR_9, &VAR_7);
 FUNC_4(&VAR_7);

 do {
  for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++, VAR_15++) {






   VAR_12 = FUNC_0(&VAR_13->futex[VAR_14], 1234, ((void*)0), VAR_4);
   if (!VAR_6 &&
       (!VAR_12 || VAR_3 != VAR_0 || VAR_3 != VAR_1))
    FUNC_5("Non-expected futex return call");
  }
 } while (!VAR_2);

 VAR_13->ops = VAR_15;
 return ((void*)0);
}
