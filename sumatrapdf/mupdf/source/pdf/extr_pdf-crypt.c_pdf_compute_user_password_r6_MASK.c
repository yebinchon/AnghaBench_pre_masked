
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int key; } ;
typedef TYPE_1__ pdf_crypt ;
typedef int iv ;
typedef int fz_context ;
typedef int fz_aes ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int,unsigned char*,int ,unsigned char*) ;
 scalar_t__ FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (int *,unsigned char*,int ) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (unsigned char*,unsigned char*,int ) ;
 int FUNC_5 (unsigned char*,int ,int) ;
 int FUNC_6 (unsigned char*) ;
 int FUNC_7 (int *,unsigned char*,size_t,unsigned char*,int *,unsigned char*) ;

__attribute__((used)) static void
FUNC_8(fz_context *VAR_2, pdf_crypt *VAR_3, unsigned char *VAR_4, size_t VAR_5, unsigned char *VAR_6, unsigned char *VAR_7)
{
 unsigned char VAR_8[8];
 unsigned char VAR_9[8];
 unsigned char VAR_10[32];
 unsigned char VAR_11[16];
 fz_aes VAR_12;


 FUNC_2(VAR_2, VAR_8, FUNC_6(VAR_8));
 FUNC_2(VAR_2, VAR_9, FUNC_6(VAR_9));


 FUNC_7(VAR_2, VAR_4, VAR_5, VAR_8, ((void*)0), VAR_6);
 FUNC_4(VAR_6 + 32, VAR_8, FUNC_6(VAR_8));
 FUNC_4(VAR_6 + 40, VAR_9, FUNC_6(VAR_9));


 FUNC_7(VAR_2, VAR_4, VAR_5, VAR_9, ((void*)0), VAR_10);


 FUNC_5(VAR_11, 0, sizeof(VAR_11));
 if (FUNC_1(&VAR_12, VAR_10, 256))
  FUNC_3(VAR_2, VAR_1, "AES key init failed (keylen=256)");
 FUNC_0(&VAR_12, VAR_0, 32, VAR_11, VAR_3->key, VAR_7);
}
