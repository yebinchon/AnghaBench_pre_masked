
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fd_set ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,int *,int *,int *,int *) ;

__attribute__((used)) static int
FUNC_2(int VAR_4, fd_set *VAR_5)
{
 int VAR_6;
 fd_set VAR_7 = *VAR_5;

 for (;;)
 {
  *VAR_5 = VAR_7;
  VAR_6 = FUNC_1(VAR_4 + 1, VAR_5, ((void*)0), ((void*)0), ((void*)0));


  if (VAR_6 < 0 && VAR_3 == VAR_0)
   continue;




  break;
 }

 return VAR_6;
}
