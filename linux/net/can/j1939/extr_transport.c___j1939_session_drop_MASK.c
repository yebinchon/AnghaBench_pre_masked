
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct j1939_session {int sk; int transmission; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct j1939_session *VAR_0)
{
 if (!VAR_0->transmission)
  return;

 FUNC_0(VAR_0->sk);
}
