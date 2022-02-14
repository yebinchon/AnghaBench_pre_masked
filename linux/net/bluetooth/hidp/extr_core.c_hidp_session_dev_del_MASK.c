
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidp_session {scalar_t__ input; scalar_t__ hid; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct hidp_session *VAR_0)
{
 if (VAR_0->hid)
  FUNC_0(VAR_0->hid);
 else if (VAR_0->input)
  FUNC_1(VAR_0->input);
}
