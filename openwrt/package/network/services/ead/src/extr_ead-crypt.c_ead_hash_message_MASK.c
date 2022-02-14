
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ead_msg_encrypted {int hash; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,int ) ;

__attribute__((used)) static void
FUNC_3(struct ead_msg_encrypted *VAR_1, uint32_t *VAR_2, int VAR_3)
{
 unsigned char *VAR_4 = (unsigned char *) VAR_1;


 FUNC_1(VAR_2);
 FUNC_0(VAR_1->hash, 0, sizeof(VAR_1->hash));
 while (VAR_3 > 0) {
  FUNC_2(VAR_2, VAR_4, VAR_0);
  VAR_3 -= 64;
  VAR_4 += 64;
 }
}
