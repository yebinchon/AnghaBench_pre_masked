
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int obj; } ;
typedef TYPE_1__ pdf_annot ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ,char*,int ) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,char*,int,char const*,float,float const*) ;
 int FUNC_5 (char*) ;

void
FUNC_6(fz_context *VAR_3, pdf_annot *VAR_4, const char *VAR_5, float VAR_6, const float VAR_7[3])
{
 char VAR_8[100];

 FUNC_4(VAR_3, VAR_8, sizeof VAR_8, VAR_5, VAR_6, VAR_7);

 FUNC_2(VAR_3, VAR_4->obj, FUNC_0(VAR_0), VAR_8, FUNC_5(VAR_8));

 FUNC_1(VAR_3, VAR_4->obj, FUNC_0(VAR_1));
 FUNC_1(VAR_3, VAR_4->obj, FUNC_0(VAR_2));

 FUNC_3(VAR_3, VAR_4);
}
