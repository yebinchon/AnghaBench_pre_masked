
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fd_set ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(fd_set *VAR_3)
{
 int VAR_4 = -1;
 int VAR_5;

 FUNC_1(VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
 {
  int VAR_6 = VAR_0[VAR_5];

  if (VAR_6 == VAR_2)
   break;
  FUNC_0(VAR_6, VAR_3);

  if (VAR_6 > VAR_4)
   VAR_4 = VAR_6;
 }

 return VAR_4 + 1;
}
