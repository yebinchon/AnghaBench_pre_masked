
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_5__ {int strf; } ;
typedef TYPE_1__ pdf_crypt ;
typedef int fz_context ;


 int FUNC_0 (TYPE_1__*,int *,int,int,unsigned char*,int) ;
 int FUNC_1 (int *,TYPE_1__*,int *,unsigned char*,int) ;

void
FUNC_2(fz_context *VAR_0, pdf_crypt *VAR_1, pdf_obj *VAR_2, int VAR_3, int VAR_4)
{
 unsigned char VAR_5[32];
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, &VAR_1->strf, VAR_3, VAR_4, VAR_5, 32);

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_5, VAR_6);
}
