
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ stm_ofs; int obj; } ;
typedef TYPE_1__ pdf_xref_entry ;
struct TYPE_9__ {int file; } ;
typedef TYPE_2__ pdf_document ;
typedef int fz_stream ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,...) ;
 TYPE_1__* FUNC_1 (int *,TYPE_2__*,int) ;
 int * FUNC_2 (int *,int ,TYPE_2__*,int ,int,int*,int*,scalar_t__) ;
 int FUNC_3 (int *,TYPE_2__*) ;

fz_stream *
FUNC_4(fz_context *VAR_1, pdf_document *VAR_2, int VAR_3)
{
 pdf_xref_entry *VAR_4;
 int VAR_5, VAR_6;

 if (VAR_3 <= 0 || VAR_3 >= FUNC_3(VAR_1, VAR_2))
  FUNC_0(VAR_1, VAR_0, "object id out of range (%d 0 R)", VAR_3);

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_4->stm_ofs == 0)
  FUNC_0(VAR_1, VAR_0, "object is not a stream");

 return FUNC_2(VAR_1, VAR_2->file, VAR_2, VAR_4->obj, VAR_3, &VAR_5, &VAR_6, VAR_4->stm_ofs);
}
