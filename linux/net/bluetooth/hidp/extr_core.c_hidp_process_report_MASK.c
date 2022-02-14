
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hidp_session {int input_buf; int hid; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int,int ,unsigned int,int) ;
 int FUNC_1 (int ,int const*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct hidp_session *VAR_1, int VAR_2,
    const u8 *VAR_3, unsigned int VAR_4, int VAR_5)
{
 if (VAR_4 > VAR_0)
  VAR_4 = VAR_0;

 FUNC_1(VAR_1->input_buf, VAR_3, VAR_4);
 FUNC_0(VAR_1->hid, VAR_2, VAR_1->input_buf, VAR_4, VAR_5);
}
