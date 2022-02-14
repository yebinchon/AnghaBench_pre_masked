
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int has_digest; int digest; int buffer; } ;
typedef TYPE_1__ fz_font ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (unsigned char*,int ,int) ;

void FUNC_3(fz_context *VAR_1, fz_font *VAR_2, unsigned char VAR_3[16])
{
 if (!VAR_2->buffer)
  FUNC_1(VAR_1, VAR_0, "no font file for digest");
 if (!VAR_2->has_digest)
 {
  FUNC_0(VAR_1, VAR_2->buffer, VAR_2->digest);
  VAR_2->has_digest = 1;
 }
 FUNC_2(VAR_3, VAR_2->digest, 16);
}
