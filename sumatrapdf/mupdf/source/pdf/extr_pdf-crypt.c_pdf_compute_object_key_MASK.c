
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ method; } ;
typedef TYPE_1__ pdf_crypt_filter ;
struct TYPE_6__ {int length; scalar_t__ v; unsigned char* key; } ;
typedef TYPE_2__ pdf_crypt ;
typedef unsigned char num ;
typedef unsigned char gen ;
typedef int fz_md5 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,unsigned char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_4(pdf_crypt *VAR_2, pdf_crypt_filter *VAR_3, int VAR_4, int VAR_5, unsigned char *VAR_6, int VAR_7)
{
 fz_md5 VAR_8;
 unsigned char VAR_9[5];
 int VAR_10 = VAR_2->length / 8;

 if (VAR_10 > VAR_7)
  VAR_10 = VAR_7;




 if (VAR_2->v == 0 || VAR_3->method == VAR_1)
 {
  FUNC_3(VAR_6, VAR_2->key, VAR_10);
  return VAR_10;
 }

 FUNC_1(&VAR_8);
 FUNC_2(&VAR_8, VAR_2->key, VAR_10);
 VAR_9[0] = (VAR_4) & 0xFF;
 VAR_9[1] = (VAR_4 >> 8) & 0xFF;
 VAR_9[2] = (VAR_4 >> 16) & 0xFF;
 VAR_9[3] = (VAR_5) & 0xFF;
 VAR_9[4] = (VAR_5 >> 8) & 0xFF;
 FUNC_2(&VAR_8, VAR_9, 5);

 if (VAR_3->method == VAR_0)
  FUNC_2(&VAR_8, (unsigned char *)"sAlT", 4);

 FUNC_0(&VAR_8, VAR_6);

 if (VAR_10 + 5 > 16)
  return 16;
 return VAR_10 + 5;
}
