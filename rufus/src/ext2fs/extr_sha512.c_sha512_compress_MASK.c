
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* state; } ;
struct hash_state {TYPE_1__ sha512; } ;
typedef scalar_t__ __u64 ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,unsigned char const*) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct hash_state * VAR_0, const unsigned char *VAR_1)
{
 __u64 VAR_2[8], VAR_3[80], VAR_4, VAR_5;
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
  VAR_2[VAR_6] = VAR_0->sha512.state[VAR_6];
 }


 for (VAR_6 = 0; VAR_6 < 16; VAR_6++) {
  FUNC_2(VAR_3[VAR_6], VAR_1 + (8*VAR_6));
 }


 for (VAR_6 = 16; VAR_6 < 80; VAR_6++) {
  VAR_3[VAR_6] = FUNC_1(VAR_3[VAR_6 - 2]) + VAR_3[VAR_6 - 7] +
   FUNC_0(VAR_3[VAR_6 - 15]) + VAR_3[VAR_6 - 16];
 }

 for (VAR_6 = 0; VAR_6 < 80; VAR_6 += 8) {
  FUNC_3(VAR_2[0],VAR_2[1],VAR_2[2],VAR_2[3],VAR_2[4],VAR_2[5],VAR_2[6],VAR_2[7],VAR_6+0);
  FUNC_3(VAR_2[7],VAR_2[0],VAR_2[1],VAR_2[2],VAR_2[3],VAR_2[4],VAR_2[5],VAR_2[6],VAR_6+1);
  FUNC_3(VAR_2[6],VAR_2[7],VAR_2[0],VAR_2[1],VAR_2[2],VAR_2[3],VAR_2[4],VAR_2[5],VAR_6+2);
  FUNC_3(VAR_2[5],VAR_2[6],VAR_2[7],VAR_2[0],VAR_2[1],VAR_2[2],VAR_2[3],VAR_2[4],VAR_6+3);
  FUNC_3(VAR_2[4],VAR_2[5],VAR_2[6],VAR_2[7],VAR_2[0],VAR_2[1],VAR_2[2],VAR_2[3],VAR_6+4);
  FUNC_3(VAR_2[3],VAR_2[4],VAR_2[5],VAR_2[6],VAR_2[7],VAR_2[0],VAR_2[1],VAR_2[2],VAR_6+5);
  FUNC_3(VAR_2[2],VAR_2[3],VAR_2[4],VAR_2[5],VAR_2[6],VAR_2[7],VAR_2[0],VAR_2[1],VAR_6+6);
  FUNC_3(VAR_2[1],VAR_2[2],VAR_2[3],VAR_2[4],VAR_2[5],VAR_2[6],VAR_2[7],VAR_2[0],VAR_6+7);
 }


 for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
  VAR_0->sha512.state[VAR_6] = VAR_0->sha512.state[VAR_6] + VAR_2[VAR_6];
 }
}
