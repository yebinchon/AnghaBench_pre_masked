
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sock; } ;
typedef TYPE_1__ Port ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_8(Port *VAR_6, int VAR_7)
{
 if (&FUNC_4)
  FUNC_4) (VAR_6, VAR_7);





 if (VAR_7 != VAR_4)
  return;




 if (FUNC_3(VAR_6->sock, &VAR_5) < 0)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("SELinux: unable to get peer label: %m")));





 if (FUNC_5())
  FUNC_6(VAR_3);
 else
  FUNC_6(VAR_2);
}
