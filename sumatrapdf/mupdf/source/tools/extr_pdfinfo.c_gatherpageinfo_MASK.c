
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_5__ {int doc; } ;
typedef TYPE_1__ globals ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,char*,int) ;
 int FUNC_2 (int *,TYPE_1__*,int,int *) ;
 int FUNC_3 (int *,TYPE_1__*,int,int *,int) ;
 int * FUNC_4 (int *,int *,int ) ;
 int * FUNC_5 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_2, globals *VAR_3, int VAR_4, int VAR_5)
{
 pdf_obj *VAR_6;
 pdf_obj *VAR_7;

 VAR_6 = FUNC_5(VAR_2, VAR_3->doc, VAR_4-1);

 if (!VAR_6)
  FUNC_1(VAR_2, VAR_0, "cannot retrieve info from page %d", VAR_4);

 FUNC_2(VAR_2, VAR_3, VAR_4, VAR_6);

 VAR_7 = FUNC_4(VAR_2, VAR_6, FUNC_0(VAR_1));
 FUNC_3(VAR_2, VAR_3, VAR_4, VAR_7, VAR_5);
}
