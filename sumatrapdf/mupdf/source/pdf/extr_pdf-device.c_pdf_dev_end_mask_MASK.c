
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int pdf_document ;
struct TYPE_6__ {int * doc; } ;
typedef TYPE_1__ pdf_device ;
struct TYPE_7__ {int buf; int * on_pop_arg; } ;
typedef TYPE_2__ gstate ;
typedef int fz_device ;
typedef int fz_context ;


 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_7(fz_context *VAR_0, fz_device *VAR_1)
{
 pdf_device *VAR_2 = (pdf_device*)VAR_1;
 pdf_document *VAR_3 = VAR_2->doc;
 gstate *VAR_4 = FUNC_0(VAR_2);
 pdf_obj *VAR_5 = (pdf_obj *)VAR_4->on_pop_arg;


 FUNC_4(VAR_0, VAR_2);
 FUNC_1(VAR_0, VAR_4->buf, "Q\n");
 FUNC_6(VAR_0, VAR_3, VAR_5, VAR_4->buf, 0);
 FUNC_2(VAR_0, VAR_4->buf);
 VAR_4->buf = FUNC_3(VAR_0, VAR_4[-1].buf);
 VAR_4->on_pop_arg = ((void*)0);
 FUNC_5(VAR_0, VAR_5);
 FUNC_1(VAR_0, VAR_4->buf, "q\n");
}
