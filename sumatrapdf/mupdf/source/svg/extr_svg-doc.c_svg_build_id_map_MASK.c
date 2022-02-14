
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int idmap; } ;
typedef TYPE_1__ svg_document ;
typedef int fz_xml ;
typedef int fz_context ;


 int FUNC_0 (int *,int ,char*,int *) ;
 char* FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0, svg_document *VAR_1, fz_xml *VAR_2)
{
 fz_xml *VAR_3;

 char *VAR_4 = FUNC_1(VAR_2, "id");
 if (VAR_4)
  VAR_1->idmap = FUNC_0(VAR_0, VAR_1->idmap, VAR_4, VAR_2);

 for (VAR_3 = FUNC_2(VAR_2); VAR_3; VAR_3 = FUNC_3(VAR_3))
  FUNC_4(VAR_0, VAR_1, VAR_3);
}
