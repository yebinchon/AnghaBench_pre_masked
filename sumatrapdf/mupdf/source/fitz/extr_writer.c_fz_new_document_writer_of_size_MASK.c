
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_document_writer_end_page_fn ;
typedef int fz_document_writer_drop_writer_fn ;
typedef int fz_document_writer_close_writer_fn ;
typedef int fz_document_writer_begin_page_fn ;
struct TYPE_4__ {int * drop_writer; int * close_writer; int * end_page; int * begin_page; } ;
typedef TYPE_1__ fz_document_writer ;
typedef int fz_context ;


 TYPE_1__* FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int,size_t) ;

fz_document_writer *FUNC_2(fz_context *VAR_0, size_t VAR_1, fz_document_writer_begin_page_fn *VAR_2,
 fz_document_writer_end_page_fn *VAR_3, fz_document_writer_close_writer_fn *VAR_4, fz_document_writer_drop_writer_fn *VAR_5)
{
 fz_document_writer *VAR_6 = FUNC_0(FUNC_1(VAR_0, 1, VAR_1), "fz_document_writer");

 VAR_6->begin_page = VAR_2;
 VAR_6->end_page = VAR_3;
 VAR_6->close_writer = VAR_4;
 VAR_6->drop_writer = VAR_5;

 return VAR_6;
}
