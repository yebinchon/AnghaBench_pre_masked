
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef void* off64_t ;
typedef int ar_stream ;
typedef int ar_parse_entry_fn ;
typedef int ar_get_global_comment_fn ;
typedef int ar_entry_uncompress_fn ;
typedef int ar_entry_get_name_fn ;
typedef int ar_archive_close_fn ;
struct TYPE_5__ {void* entry_offset_next; void* entry_offset_first; int * stream; int get_comment; int uncompress; int get_name; int parse_entry; int close; } ;
typedef TYPE_1__ ar_archive ;


 TYPE_1__* FUNC_0 (size_t) ;
 int FUNC_1 (TYPE_1__*,int ,size_t) ;

ar_archive *FUNC_2(ar_stream *VAR_0, size_t VAR_1, ar_archive_close_fn VAR_2, ar_parse_entry_fn VAR_3,
                            ar_entry_get_name_fn VAR_4, ar_entry_uncompress_fn VAR_5, ar_get_global_comment_fn VAR_6,
                            off64_t VAR_7)
{
    ar_archive *VAR_8 = FUNC_0(VAR_1);
    if (!VAR_8)
        return ((void*)0);
    FUNC_1(VAR_8, 0, VAR_1);
    VAR_8->close = VAR_2;
    VAR_8->parse_entry = VAR_3;
    VAR_8->get_name = VAR_4;
    VAR_8->uncompress = VAR_5;
    VAR_8->get_comment = VAR_6;
    VAR_8->stream = VAR_0;
    VAR_8->entry_offset_first = VAR_7;
    VAR_8->entry_offset_next = VAR_7;
    return VAR_8;
}
