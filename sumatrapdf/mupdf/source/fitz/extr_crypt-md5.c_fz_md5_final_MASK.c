
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* count; int* state; } ;
typedef TYPE_1__ fz_md5 ;


 int FUNC_0 (unsigned char*,int*,int) ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 unsigned char* VAR_0 ;

void FUNC_3(fz_md5 *VAR_1, unsigned char VAR_2[16])
{
 unsigned char VAR_3[8];
 unsigned VAR_4, VAR_5;


 FUNC_0(VAR_3, VAR_1->count, 8);


 VAR_4 = (unsigned)((VAR_1->count[0] >> 3) & 0x3f);
 VAR_5 = VAR_4 < 56 ? 56 - VAR_4 : 120 - VAR_4;
 FUNC_1(VAR_1, VAR_0, VAR_5);


 FUNC_1(VAR_1, VAR_3, 8);


 FUNC_0(VAR_2, VAR_1->state, 16);


 FUNC_2(VAR_1, 0, sizeof(fz_md5));
}
