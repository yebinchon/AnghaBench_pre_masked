
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct stream {scalar_t__ eof; } ;
struct ebml_parse_ctx {int has_errors; int talloc_ctx; scalar_t__ no_error_messages; } ;
struct ebml_elem_desc {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct ebml_parse_ctx*,int,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ebml_parse_ctx*,void*,int ,int,struct ebml_elem_desc const*,int ) ;
 int FUNC_2 (struct stream*) ;
 int FUNC_3 (struct stream*,int ,int) ;
 int FUNC_4 (int *,int) ;

int FUNC_5(struct stream *VAR_3, struct ebml_parse_ctx *VAR_4,
                      void *VAR_5, const struct ebml_elem_desc *VAR_6)
{
    VAR_4->has_errors = 0;
    int VAR_7 = VAR_4->no_error_messages ? VAR_1 : VAR_2;
    uint64_t VAR_8 = FUNC_2(VAR_3);
    if (VAR_3->eof) {
        FUNC_0(VAR_4, VAR_7, "Unexpected end of file "
                   "- partial or corrupt file?\n");
        return -1;
    }
    if (VAR_8 == VAR_0) {
        FUNC_0(VAR_4, VAR_7, "EBML element with unknown length - unsupported\n");
        return -1;
    }
    if (VAR_8 > 1000000000) {
        FUNC_0(VAR_4, VAR_7, "Refusing to read element over 100 MB in size\n");
        return -1;
    }
    VAR_4->talloc_ctx = FUNC_4(((void*)0), VAR_8);
    int VAR_9 = FUNC_3(VAR_3, VAR_4->talloc_ctx, VAR_8);
    if (VAR_9 < VAR_8)
        FUNC_0(VAR_4, VAR_7, "Unexpected end of file - partial or corrupt file?\n");
    FUNC_1(VAR_4, VAR_5, VAR_4->talloc_ctx, VAR_9, VAR_6, 0);
    if (VAR_4->has_errors)
        FUNC_0(VAR_4, VAR_7, "Error parsing element %s\n", VAR_6->name);
    return 0;
}
