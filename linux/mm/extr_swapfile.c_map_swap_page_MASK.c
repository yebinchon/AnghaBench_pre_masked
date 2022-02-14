
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int val; } ;
typedef TYPE_1__ swp_entry_t ;
struct page {int dummy; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (TYPE_1__,struct block_device**) ;
 int FUNC_1 (struct page*) ;

sector_t FUNC_2(struct page *VAR_0, struct block_device **VAR_1)
{
 swp_entry_t VAR_2;
 VAR_2.val = FUNC_1(VAR_0);
 return FUNC_0(VAR_2, VAR_1);
}
