
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int key; scalar_t__ encrypt_metadata; int p; } ;
typedef TYPE_1__ pdf_crypt ;
typedef int iv ;
typedef int fz_context ;
typedef int fz_aes ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int,unsigned char*,unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (unsigned char*,unsigned char*,int) ;
 int FUNC_5 (unsigned char*,int,int) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_2, pdf_crypt *VAR_3, unsigned char *VAR_4)
{
 unsigned char VAR_5[16];
 unsigned char VAR_6[16];
 fz_aes VAR_7;


 FUNC_4(VAR_5, (unsigned char *) &VAR_3->p, 4);
 FUNC_5(&VAR_5[4], 0xff, 4);


 VAR_5[8] = VAR_3->encrypt_metadata ? 'T' : 'F';


 VAR_5[9] = 'a';
 VAR_5[10] = 'd';
 VAR_5[11] = 'b';


 FUNC_2(VAR_2, &VAR_5[12], 4);


 FUNC_5(VAR_6, 0, sizeof(VAR_6));
 if (FUNC_1(&VAR_7, VAR_3->key, 256))
  FUNC_3(VAR_2, VAR_1, "AES key init failed (keylen=256)");
 FUNC_0(&VAR_7, VAR_0, 16, VAR_6, VAR_5, VAR_4);
}
