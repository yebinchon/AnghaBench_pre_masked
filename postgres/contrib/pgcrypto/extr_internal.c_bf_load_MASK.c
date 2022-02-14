
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct int_ctx {int mode; struct int_ctx* ptr; int free; int decrypt; int encrypt; int init; int iv_size; int key_size; int block_size; } ;
typedef struct int_ctx PX_Cipher ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct int_ctx*,int ,int) ;
 struct int_ctx* FUNC_1 (int) ;

__attribute__((used)) static PX_Cipher *
FUNC_2(int VAR_7)
{
 PX_Cipher *VAR_8;
 struct int_ctx *VAR_9;

 VAR_8 = FUNC_1(sizeof *VAR_8);
 FUNC_0(VAR_8, 0, sizeof *VAR_8);

 VAR_8->block_size = VAR_0;
 VAR_8->key_size = VAR_5;
 VAR_8->iv_size = VAR_4;
 VAR_8->init = VAR_3;
 VAR_8->encrypt = VAR_2;
 VAR_8->decrypt = VAR_1;
 VAR_8->free = VAR_6;

 VAR_9 = FUNC_1(sizeof *VAR_9);
 FUNC_0(VAR_9, 0, sizeof *VAR_9);
 VAR_9->mode = VAR_7;
 VAR_8->ptr = VAR_9;
 return VAR_8;
}
