
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int val; } ;
struct TYPE_4__ {scalar_t__ sk_socket; } ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(void)
{
 FUNC_1(&VAR_1);
 FUNC_0(&VAR_0);
 VAR_0.val--;
 FUNC_0(&VAR_0);
 if (VAR_2 && VAR_2->sk_socket)
  FUNC_2(VAR_2->sk_socket);
}
