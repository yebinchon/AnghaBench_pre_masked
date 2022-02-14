
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int key; int ue; int oe; int * u; int * o; } ;
typedef TYPE_1__ pdf_crypt ;
typedef int iv ;
typedef int fz_context ;
typedef int fz_aes ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int,unsigned char*,int ,int ) ;
 scalar_t__ FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int FUNC_4 (int *,unsigned char*,size_t,int *,int *,unsigned char*) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_2, pdf_crypt *VAR_3, unsigned char *VAR_4, size_t VAR_5, int VAR_6, unsigned char *VAR_7)
{
 unsigned char VAR_8[32];
 unsigned char VAR_9[16];
 fz_aes VAR_10;

 if (VAR_5 > 127)
  VAR_5 = 127;

 FUNC_4(VAR_2, VAR_4, VAR_5,
  (VAR_6 ? VAR_3->o : VAR_3->u) + 32,
  VAR_6 ? VAR_3->u : ((void*)0), VAR_7);
 FUNC_4(VAR_2, VAR_4, VAR_5,
  (VAR_6 ? VAR_3->o : VAR_3->u) + 40,
  (VAR_6 ? VAR_3->u : ((void*)0)),
  VAR_8);

 FUNC_3(VAR_9, 0, sizeof(VAR_9));
 if (FUNC_1(&VAR_10, VAR_8, 256))
  FUNC_2(VAR_2, VAR_1, "AES key init failed (keylen=256)");
 FUNC_0(&VAR_10, VAR_0, 32, VAR_9, VAR_6 ? VAR_3->oe : VAR_3->ue, VAR_3->key);
}
