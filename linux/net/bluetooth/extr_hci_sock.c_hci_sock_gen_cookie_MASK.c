
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {int cookie; int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (int *,int,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_3(struct sock *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_3)->cookie;

 if (!VAR_4) {
  VAR_4 = FUNC_2(&VAR_2, 1, 0, VAR_0);
  if (VAR_4 < 0)
   VAR_4 = 0xffffffff;

  FUNC_1(VAR_3)->cookie = VAR_4;
  FUNC_0(FUNC_1(VAR_3)->comm, VAR_1);
  return 1;
 }

 return 0;
}
