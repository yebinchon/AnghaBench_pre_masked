
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* o; unsigned char* u; int key; int ue; int oe; int length; } ;
typedef TYPE_1__ pdf_crypt ;
typedef int fz_sha256 ;
typedef int fz_context ;
typedef int fz_aes ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int,unsigned char*,int ,int ) ;
 scalar_t__ FUNC_1 (int *,unsigned char*,int ) ;
 int FUNC_2 (int *,unsigned char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned char*,size_t) ;
 int FUNC_5 (int *,int ,char*,int ) ;
 int FUNC_6 (unsigned char*,unsigned char*,int) ;
 int FUNC_7 (unsigned char*,int ,int) ;

__attribute__((used)) static void
FUNC_8(fz_context *VAR_2, pdf_crypt *VAR_3, unsigned char *VAR_4, size_t VAR_5, int VAR_6, unsigned char *VAR_7)
{
 unsigned char VAR_8[128 + 8 + 48];
 fz_sha256 VAR_9;
 fz_aes VAR_10;



 if (VAR_5 > 127)
  VAR_5 = 127;



 FUNC_6(VAR_8, VAR_4, VAR_5);
 if (VAR_6)
 {
  FUNC_6(VAR_8 + VAR_5, VAR_3->o + 32, 8);
  FUNC_6(VAR_8 + VAR_5 + 8, VAR_3->u, 48);
 }
 else
  FUNC_6(VAR_8 + VAR_5, VAR_3->u + 32, 8);

 FUNC_3(&VAR_9);
 FUNC_4(&VAR_9, VAR_8, VAR_5 + 8 + (VAR_6 ? 48 : 0));
 FUNC_2(&VAR_9, VAR_7);



 if (VAR_6)
 {
  FUNC_6(VAR_8 + VAR_5, VAR_3->o + 40, 8);
  FUNC_6(VAR_8 + VAR_5 + 8, VAR_3->u, 48);
 }
 else
  FUNC_6(VAR_8 + VAR_5, VAR_3->u + 40, 8);

 FUNC_3(&VAR_9);
 FUNC_4(&VAR_9, VAR_8, VAR_5 + 8 + (VAR_6 ? 48 : 0));
 FUNC_2(&VAR_9, VAR_8);


 FUNC_7(VAR_8 + 32, 0, sizeof(VAR_8) - 32);
 if (FUNC_1(&VAR_10, VAR_8, VAR_3->length))
  FUNC_5(VAR_2, VAR_1, "AES key init failed (keylen=%d)", VAR_3->length);
 FUNC_0(&VAR_10, VAR_0, 32, VAR_8 + 32, VAR_6 ? VAR_3->oe : VAR_3->ue, VAR_3->key);
}
