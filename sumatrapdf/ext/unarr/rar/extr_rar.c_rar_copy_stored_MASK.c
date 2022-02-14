
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t data_left; size_t bytes_done; } ;
struct TYPE_5__ {int stream; } ;
struct TYPE_7__ {TYPE_2__ progress; TYPE_1__ super; } ;
typedef TYPE_3__ ar_archive_rar ;


 size_t FUNC_0 (int ,void*,size_t) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static bool FUNC_2(ar_archive_rar *VAR_0, void *VAR_1, size_t VAR_2)
{
    if (VAR_2 > VAR_0->progress.data_left) {
        FUNC_1("Unexpected EOS in stored data");
        return 0;
    }
    if (FUNC_0(VAR_0->super.stream, VAR_1, VAR_2) != VAR_2) {
        FUNC_1("Unexpected EOF in stored data");
        return 0;
    }
    VAR_0->progress.data_left -= VAR_2;
    VAR_0->progress.bytes_done += VAR_2;
    return 1;
}
