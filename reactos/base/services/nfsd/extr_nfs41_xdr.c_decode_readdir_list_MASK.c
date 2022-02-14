
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ignore_the_rest; scalar_t__ remaining_len; scalar_t__ has_next_entry; int * last_entry_offset; int buf_pos; } ;
typedef TYPE_1__ readdir_entry_iterator ;
struct TYPE_6__ {scalar_t__ eof; scalar_t__ entries_len; scalar_t__ has_entries; int entries; } ;
typedef TYPE_2__ nfs41_readdir_list ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,scalar_t__*) ;

__attribute__((used)) static bool_t FUNC_2(
    XDR *VAR_2,
    nfs41_readdir_list *VAR_3)
{
    readdir_entry_iterator VAR_4;
    VAR_4.buf_pos = VAR_3->entries;
    VAR_4.remaining_len = VAR_3->entries_len;
    VAR_4.last_entry_offset = ((void*)0);
    VAR_4.ignore_the_rest = 0;
    VAR_4.has_next_entry = 0;

    if (!FUNC_1(VAR_2, &VAR_3->has_entries))
        return VAR_0;

    if (VAR_3->has_entries)
    {
        do {
            if (!FUNC_0(VAR_2, &VAR_4))
                return VAR_0;

        } while (VAR_4.has_next_entry);
    }
    VAR_3->entries_len -= VAR_4.remaining_len;

    if (!FUNC_1(VAR_2, &VAR_3->eof))
        return VAR_0;


    if (VAR_4.ignore_the_rest)
        VAR_3->eof = 0;
    return VAR_1;
}
