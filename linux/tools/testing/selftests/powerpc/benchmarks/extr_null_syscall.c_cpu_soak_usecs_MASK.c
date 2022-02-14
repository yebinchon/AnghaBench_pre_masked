
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int val ;
struct TYPE_2__ {unsigned long tv_usec; } ;
struct itimerval {TYPE_1__ it_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct itimerval*,int ,int) ;
 int FUNC_1 (int ,struct itimerval*,int *) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_5)
{
 struct itimerval VAR_6;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.it_value.tv_usec = VAR_5;

 FUNC_2(VAR_1, VAR_3);
 FUNC_1(VAR_0, &VAR_6, ((void*)0));

 while (1) {
  if (VAR_4)
   break;
 }

 FUNC_2(VAR_1, VAR_2);
}
