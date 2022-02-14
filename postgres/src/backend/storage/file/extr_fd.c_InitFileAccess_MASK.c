
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ Vfd ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;

void
FUNC_7(void)
{
 FUNC_0(VAR_3 == 0);


 VAR_5 = (Vfd *) FUNC_5(sizeof(Vfd));
 if (VAR_5 == ((void*)0))
  FUNC_2(VAR_2,
    (FUNC_3(VAR_1),
     FUNC_4("out of memory")));

 FUNC_1((char *) &(VAR_5[0]), 0, sizeof(Vfd));
 VAR_5->fd = VAR_4;

 VAR_3 = 1;


 FUNC_6(VAR_0, 0);
}
