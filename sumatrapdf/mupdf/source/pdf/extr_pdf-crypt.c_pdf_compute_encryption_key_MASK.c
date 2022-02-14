
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; unsigned char* o; int r; int encrypt_metadata; int id; scalar_t__ p; } ;
typedef TYPE_1__ pdf_crypt ;
typedef unsigned char p ;
typedef int fz_md5 ;
typedef int fz_context ;


 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int *,unsigned char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (unsigned char*,unsigned char*,int) ;
 unsigned char* VAR_0 ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void
FUNC_7(fz_context *VAR_1, pdf_crypt *VAR_2, unsigned char *VAR_3, size_t VAR_4, unsigned char *VAR_5)
{
 unsigned char VAR_6[32];
 unsigned int VAR_7;
 int VAR_8, VAR_9;
 fz_md5 VAR_10;

 VAR_9 = FUNC_0(VAR_2->length / 8, 0, 16);


 if (VAR_4 > 32)
  VAR_4 = 32;
 FUNC_4(VAR_6, VAR_3, VAR_4);
 FUNC_4(VAR_6 + VAR_4, VAR_0, 32 - VAR_4);


 FUNC_2(&VAR_10);
 FUNC_3(&VAR_10, VAR_6, 32);


 FUNC_3(&VAR_10, VAR_2->o, 32);


 VAR_7 = (unsigned int) VAR_2->p;
 VAR_6[0] = (VAR_7) & 0xFF;
 VAR_6[1] = (VAR_7 >> 8) & 0xFF;
 VAR_6[2] = (VAR_7 >> 16) & 0xFF;
 VAR_6[3] = (VAR_7 >> 24) & 0xFF;
 FUNC_3(&VAR_10, VAR_6, 4);


 FUNC_3(&VAR_10, (unsigned char *)FUNC_5(VAR_1, VAR_2->id), FUNC_6(VAR_1, VAR_2->id));


 if (VAR_2->r >= 4)
 {
  if (!VAR_2->encrypt_metadata)
  {
   VAR_6[0] = 0xFF;
   VAR_6[1] = 0xFF;
   VAR_6[2] = 0xFF;
   VAR_6[3] = 0xFF;
   FUNC_3(&VAR_10, VAR_6, 4);
  }
 }


 FUNC_1(&VAR_10, VAR_6);


 if (VAR_2->r >= 3)
 {
  for (VAR_8 = 0; VAR_8 < 50; VAR_8++)
  {
   FUNC_2(&VAR_10);
   FUNC_3(&VAR_10, VAR_6, VAR_9);
   FUNC_1(&VAR_10, VAR_6);
  }
 }


 FUNC_4(VAR_5, VAR_6, VAR_9);
}
