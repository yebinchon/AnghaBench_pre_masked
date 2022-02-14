
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,struct timespec*) ;
 int VAR_4 ;
 struct timespec VAR_5 ;
 void* VAR_6 ;
 int FUNC_2 (char*,void*) ;
 int FUNC_3 (unsigned int,int) ;
 struct timespec VAR_7 ;
 int VAR_8 ;
 void* FUNC_4 (struct timespec,struct timespec) ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_9, VAR_10;
 struct timespec VAR_11;

 FUNC_1(VAR_1, &VAR_11);

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
   FUNC_0(&VAR_3[VAR_9], VAR_10);
 }





 VAR_8 = FUNC_4(VAR_7, VAR_11);
 if (VAR_8 / 1000 > VAR_2)
  FUNC_3((unsigned int)VAR_8 / 1000000,
       VAR_2 / 1000);

 return 0;
}
