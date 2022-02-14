
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {char type; int ofs; } ;
typedef TYPE_2__ pdf_xref_entry ;
typedef int pdf_obj ;
struct TYPE_9__ {int base; } ;
struct TYPE_11__ {TYPE_1__ lexbuf; int file; } ;
typedef TYPE_3__ pdf_document ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *,int ,char*,int,int) ;
 TYPE_2__* FUNC_2 (int *,TYPE_3__*,int) ;
 int * FUNC_3 (int *,TYPE_3__*,int ,int *,int *,int *,int *,int *) ;
 int FUNC_4 (int *,TYPE_3__*) ;

pdf_obj *
FUNC_5(fz_context *VAR_2, pdf_document *VAR_3, int VAR_4)
{
 pdf_xref_entry *VAR_5;

 if (VAR_4 <= 0 || VAR_4 >= FUNC_4(VAR_2, VAR_3))
  FUNC_1(VAR_2, VAR_0, "object out of range (%d 0 R); xref size %d", VAR_4, FUNC_4(VAR_2, VAR_3));

 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
 if (VAR_5->type == 'n')
 {
  FUNC_0(VAR_2, VAR_3->file, VAR_5->ofs, VAR_1);
  return FUNC_3(VAR_2, VAR_3, VAR_3->file, &VAR_3->lexbuf.base, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
 }
 return ((void*)0);
}
