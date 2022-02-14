
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
struct TYPE_3__ {int value; } ;
struct dir_list_cache_data {TYPE_2__ brotli; TYPE_1__ deflated; int rendered; } ;
struct file_cache_entry {struct dir_list_cache_data dir_list_cache_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct file_cache_entry *VAR_0)
{
    struct dir_list_cache_data *VAR_1 = &VAR_0->dir_list_cache_data;

    FUNC_1(&VAR_1->rendered);
    FUNC_0(VAR_1->deflated.value);



}
