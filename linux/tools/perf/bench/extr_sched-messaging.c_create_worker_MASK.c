
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int pthread_attr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *,void* (*) (void*),void*) ;
 void* FUNC_6 (void*) ;
 int VAR_2 ;

__attribute__((used)) static pthread_t FUNC_7(void *VAR_3, void *(*VAR_4)(void *))
{
 pthread_attr_t VAR_5;
 pthread_t VAR_6;
 int VAR_7;

 if (!VAR_2) {


  switch (FUNC_2()) {
  case -1:
   FUNC_0(VAR_0, "fork()");
   break;
  case 0:
   (*VAR_4) (VAR_3);
   FUNC_1(0);
   break;
  default:
   break;
  }

  return (pthread_t)0;
 }

 if (FUNC_3(&VAR_5) != 0)
  FUNC_0(VAR_0, "pthread_attr_init:");


 if (FUNC_4(&VAR_5, VAR_1) != 0)
  FUNC_0(VAR_0, "pthread_attr_setstacksize");


 VAR_7 = FUNC_5(&VAR_6, &VAR_5, VAR_4, VAR_3);
 if (VAR_7 != 0)
  FUNC_0(VAR_0, "pthread_create failed");

 return VAR_6;
}
