
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int do_tight; int * rev_renumber_map; int * renumber_map; int * gen_list; int * ofs_list; int * use_list; scalar_t__ list_len; int upwd_utf8; int opwd_utf8; int permissions; int main_xref_offset; scalar_t__ start; int do_encrypt; int do_clean; int do_linear; int do_garbage; int do_compress_fonts; int do_compress_images; int do_compress; int do_expand; int do_ascii; int do_incremental; } ;
typedef TYPE_1__ pdf_write_state ;
struct TYPE_7__ {int upwd_utf8; int opwd_utf8; int permissions; int do_encrypt; int do_clean; int do_linear; int do_garbage; int do_compress_fonts; int do_compress_images; int do_compress; int do_decompress; int do_pretty; int do_ascii; int do_incremental; } ;
typedef TYPE_2__ pdf_write_options ;
typedef int pdf_document ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(fz_context *VAR_1, pdf_document *VAR_2, const pdf_write_options *VAR_3, pdf_write_state *VAR_4)
{
 int VAR_5 = FUNC_3(VAR_1, VAR_2);

 VAR_4->do_incremental = VAR_3->do_incremental;
 VAR_4->do_ascii = VAR_3->do_ascii;
 VAR_4->do_tight = !VAR_3->do_pretty;
 VAR_4->do_expand = VAR_3->do_decompress;
 VAR_4->do_compress = VAR_3->do_compress;
 VAR_4->do_compress_images = VAR_3->do_compress_images;
 VAR_4->do_compress_fonts = VAR_3->do_compress_fonts;

 VAR_4->do_garbage = VAR_3->do_garbage;
 VAR_4->do_linear = VAR_3->do_linear;
 VAR_4->do_clean = VAR_3->do_clean;
 VAR_4->do_encrypt = VAR_3->do_encrypt;
 VAR_4->start = 0;
 VAR_4->main_xref_offset = VAR_0;

 VAR_4->permissions = VAR_3->permissions;
 FUNC_1(VAR_4->opwd_utf8, VAR_3->opwd_utf8, FUNC_2(VAR_4->opwd_utf8));
 FUNC_1(VAR_4->upwd_utf8, VAR_3->upwd_utf8, FUNC_2(VAR_4->upwd_utf8));




 VAR_4->list_len = 0;
 VAR_4->use_list = ((void*)0);
 VAR_4->ofs_list = ((void*)0);
 VAR_4->gen_list = ((void*)0);
 VAR_4->renumber_map = ((void*)0);
 VAR_4->rev_renumber_map = ((void*)0);

 FUNC_0(VAR_1, VAR_4, VAR_5);
}
