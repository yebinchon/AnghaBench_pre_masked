
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int value; } ;
struct TYPE_7__ {int value; } ;
struct TYPE_6__ {int value; } ;
struct TYPE_5__ {int len; int value; } ;
struct mmap_cache_data {TYPE_4__ zstd; TYPE_3__ brotli; TYPE_2__ deflated; TYPE_1__ uncompressed; } ;
struct file_cache_entry {struct mmap_cache_data mmap_cache_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct file_cache_entry *VAR_0)
{
    struct mmap_cache_data *VAR_1 = &VAR_0->mmap_cache_data;

    FUNC_1(VAR_1->uncompressed.value, VAR_1->uncompressed.len);
    FUNC_0(VAR_1->deflated.value);






}
