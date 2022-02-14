
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int pdf_document ;
struct TYPE_7__ {int * doc; } ;
typedef TYPE_1__ pdf_device ;
struct TYPE_8__ {int buf; } ;
typedef TYPE_2__ gstate ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_buffer ;


 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,int *,int *,int ) ;

__attribute__((used)) static void
FUNC_7(fz_context *VAR_0, fz_device *VAR_1)
{
 pdf_device *VAR_2 = (pdf_device*)VAR_1;
 pdf_document *VAR_3 = VAR_2->doc;
 gstate *VAR_4 = FUNC_0(VAR_2);
 fz_buffer *VAR_5 = FUNC_2(VAR_0, VAR_4->buf);
 pdf_obj *VAR_6;

 FUNC_3(VAR_0, VAR_2);
 VAR_6 = (pdf_obj *)FUNC_4(VAR_0, VAR_2);
 FUNC_6(VAR_0, VAR_3, VAR_6, VAR_5, 0);
 FUNC_1(VAR_0, VAR_5);
 FUNC_5(VAR_0, VAR_6);
}
