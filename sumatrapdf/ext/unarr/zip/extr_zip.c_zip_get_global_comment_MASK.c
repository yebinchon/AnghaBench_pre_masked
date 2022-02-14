
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t comment_size; int comment_offset; } ;
typedef TYPE_1__ ar_archive_zip ;
struct TYPE_5__ {int stream; } ;
typedef TYPE_2__ ar_archive ;


 int VAR_0 ;
 size_t FUNC_0 (int ,void*,size_t) ;
 int FUNC_1 (int ,int ,int ) ;

size_t FUNC_2(ar_archive *VAR_1, void *VAR_2, size_t VAR_3)
{
    ar_archive_zip *VAR_4 = (ar_archive_zip *)VAR_1;
    if (!VAR_4->comment_size)
        return 0;
    if (!VAR_2)
        return VAR_4->comment_size;
    if (!FUNC_1(VAR_1->stream, VAR_4->comment_offset, VAR_0))
        return 0;
    if (VAR_3 > VAR_4->comment_size)
        VAR_3 = VAR_4->comment_size;
    return FUNC_0(VAR_1->stream, VAR_2, VAR_3);
}
