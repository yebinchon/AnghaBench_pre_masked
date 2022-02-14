
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {unsigned long tv_sec; scalar_t__ tv_usec; } ;
typedef int fd_set ;
struct TYPE_3__ {int ctrlSocketR; int * cin; } ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (int,int*) ;
 int FUNC_1 (int*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int,int *,int *,struct timeval*) ;

int
FUNC_4(const FTPCIPtr VAR_1, unsigned int VAR_2)
{
 int VAR_3;
 fd_set VAR_4;
 struct timeval VAR_5;
 int VAR_6;




 if (VAR_1->cin == ((void*)0))
  return (-1);
 VAR_6 = FUNC_2(VAR_1->cin);

 if (VAR_6 < 0)
  return (-1);
 FUNC_1(&VAR_4);
 FUNC_0(VAR_6, &VAR_4);
 VAR_5.tv_sec = (unsigned long) VAR_2;
 VAR_5.tv_usec = 0;
 VAR_3 = FUNC_3(VAR_6 + 1, VAR_0 &VAR_4, ((void*)0), ((void*)0), &VAR_5);
 return (VAR_3);
}
