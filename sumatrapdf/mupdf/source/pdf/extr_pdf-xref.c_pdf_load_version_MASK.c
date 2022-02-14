
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int version; int file; } ;
typedef TYPE_1__ pdf_document ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 float FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,char*,int) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *,char*,int,int) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(fz_context *VAR_2, pdf_document *VAR_3)
{
 char VAR_4[20];

 FUNC_2(VAR_2, VAR_3->file, 0, VAR_1);
 FUNC_1(VAR_2, VAR_3->file, VAR_4, sizeof VAR_4);
 if (FUNC_6(VAR_4) < 5 || FUNC_5(VAR_4, "%PDF-", 5) != 0)
  FUNC_3(VAR_2, VAR_0, "cannot recognize version marker");

 VAR_3->version = 10 * (FUNC_0(VAR_4+5) + 0.05f);
 if (VAR_3->version < 10 || VAR_3->version > 17)
  if (VAR_3->version != 20)
   FUNC_4(VAR_2, "unknown PDF version: %d.%d", VAR_3->version / 10, VAR_3->version % 10);
}
