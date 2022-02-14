
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fd; } ;
struct TYPE_3__ {scalar_t__ fd; } ;
struct sendfile_cache_data {TYPE_2__ uncompressed; TYPE_1__ compressed; } ;
struct file_cache_entry {struct sendfile_cache_data sendfile_cache_data; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct file_cache_entry *VAR_0)
{
    struct sendfile_cache_data *VAR_1 = &VAR_0->sendfile_cache_data;

    if (VAR_1->compressed.fd >= 0)
        FUNC_0(VAR_1->compressed.fd);
    if (VAR_1->uncompressed.fd >= 0)
        FUNC_0(VAR_1->uncompressed.fd);
}
