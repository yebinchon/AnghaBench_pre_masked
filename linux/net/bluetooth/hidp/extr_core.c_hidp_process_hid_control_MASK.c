
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidp_session {int intr_transmit; int ctrl_transmit; } ;


 int FUNC_0 (char*,struct hidp_session*,unsigned char) ;
 unsigned char VAR_0 ;
 int FUNC_1 (struct hidp_session*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct hidp_session *VAR_1,
     unsigned char VAR_2)
{
 FUNC_0("session %p param 0x%02x", VAR_1, VAR_2);

 if (VAR_2 == VAR_0) {

  FUNC_2(&VAR_1->ctrl_transmit);
  FUNC_2(&VAR_1->intr_transmit);

  FUNC_1(VAR_1);
 }
}
