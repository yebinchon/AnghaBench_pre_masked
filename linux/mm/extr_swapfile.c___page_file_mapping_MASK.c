
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct address_space {int dummy; } ;
struct TYPE_4__ {TYPE_1__* swap_file; } ;
struct TYPE_3__ {struct address_space* f_mapping; } ;


 TYPE_2__* FUNC_0 (struct page*) ;

struct address_space *FUNC_1(struct page *VAR_0)
{
 return FUNC_0(VAR_0)->swap_file->f_mapping;
}
