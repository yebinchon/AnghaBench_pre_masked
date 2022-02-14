
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ead_msg_encrypted {unsigned int pad; void** hash; void* iv; } ;
struct ead_msg {void* len; } ;


 int FUNC_0 (int,char*,void*,int) ;
 struct ead_msg_encrypted* FUNC_1 (struct ead_msg*,int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (struct ead_msg_encrypted*,int*,int) ;
 struct ead_msg_encrypted* VAR_2 ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ,unsigned char*,unsigned char*) ;

void
FUNC_6(struct ead_msg *VAR_3, unsigned int VAR_4)
{
 struct ead_msg_encrypted *VAR_5 = FUNC_1(VAR_3, VAR_5);
 unsigned char *VAR_6 = (unsigned char *) VAR_5;
 uint32_t VAR_7[5];
 int VAR_8, VAR_9;

 VAR_4 += sizeof(struct ead_msg_encrypted);
 VAR_5->pad = (VAR_0 - (VAR_4 % VAR_0)) % VAR_0;
 VAR_8 = VAR_4 + VAR_5->pad;
 VAR_3->len = FUNC_4(VAR_8);
 VAR_5->iv = FUNC_4(FUNC_2());

 FUNC_3(VAR_5, VAR_7, VAR_8);
 for (VAR_9 = 0; VAR_9 < 5; VAR_9++)
  VAR_5->hash[VAR_9] = FUNC_4(VAR_7[VAR_9]);
 FUNC_0(2, "SHA1 generate (0x%08x), len=%d\n", VAR_5->hash[0], VAR_8);

 while (VAR_8 > 0) {
  FUNC_5(VAR_1, VAR_6, VAR_6);
  VAR_6 += 16;
  VAR_8 -= 16;
 }
}
