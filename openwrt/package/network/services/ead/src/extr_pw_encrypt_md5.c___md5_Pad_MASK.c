
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MD5Context {int* count; } ;
typedef int PADDING ;


 int FUNC_0 (unsigned char*,int*,int) ;
 int FUNC_1 (struct MD5Context*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct MD5Context *VAR_0)
{
 unsigned char VAR_1[8];
 unsigned int VAR_2, VAR_3;
 unsigned char VAR_4[64];

 FUNC_2(VAR_4, 0, sizeof(VAR_4));
 VAR_4[0] = 0x80;


 FUNC_0(VAR_1, VAR_0->count, 8);


 VAR_2 = (VAR_0->count[0] >> 3) & 0x3f;
 VAR_3 = (VAR_2 < 56) ? (56 - VAR_2) : (120 - VAR_2);
 FUNC_1(VAR_0, VAR_4, VAR_3);


 FUNC_1(VAR_0, VAR_1, 8);
}
