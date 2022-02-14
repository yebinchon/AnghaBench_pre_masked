
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* crypt; } ;
typedef TYPE_1__ pdf_document ;
typedef int fz_context ;
struct TYPE_6__ {int r; } ;


 scalar_t__ FUNC_0 (int *,TYPE_2__*,unsigned char*,int ) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*,unsigned char*,int ) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char*) ;

int
FUNC_5(fz_context *VAR_0, pdf_document *VAR_1, const char *VAR_2)
{
 char VAR_3[2048];
 int VAR_4;

 if (!VAR_1->crypt)
  return 1;

 VAR_3[0] = 0;
 if (VAR_2)
 {
  if (VAR_1->crypt->r <= 4)
   FUNC_2(VAR_3, VAR_2, sizeof VAR_3);
  else
   FUNC_3(VAR_3, VAR_2, sizeof VAR_3);
 }

 VAR_4 = 0;
 if (FUNC_1(VAR_0, VAR_1->crypt, (unsigned char *)VAR_3, FUNC_4(VAR_3)))
  VAR_4 = 2;
 if (FUNC_0(VAR_0, VAR_1->crypt, (unsigned char *)VAR_3, FUNC_4(VAR_3)))
  VAR_4 |= 4;
 else if (VAR_4 & 2)
 {




  (void)FUNC_1(VAR_0, VAR_1->crypt, (unsigned char *)VAR_3, FUNC_4(VAR_3));
 }



 if (*VAR_3 == 0 && VAR_4 == 4)
  return 0;

 return VAR_4;
}
