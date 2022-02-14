
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidp_session {int ctrl_transmit; int ctrl_sock; } ;


 int FUNC_0 (struct hidp_session*,int ,int *,unsigned char,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_1(struct hidp_session *VAR_0,
      unsigned char VAR_1, const unsigned char *VAR_2,
      int VAR_3)
{
 return FUNC_0(VAR_0, VAR_0->ctrl_sock,
     &VAR_0->ctrl_transmit, VAR_1, VAR_2, VAR_3);
}
