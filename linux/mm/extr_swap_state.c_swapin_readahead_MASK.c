
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct vm_fault {int dummy; } ;
struct page {int dummy; } ;
typedef int gfp_t ;


 struct page* FUNC_0 (int ,int ,struct vm_fault*) ;
 scalar_t__ FUNC_1 () ;
 struct page* FUNC_2 (int ,int ,struct vm_fault*) ;

struct page *FUNC_3(swp_entry_t VAR_0, gfp_t VAR_1,
    struct vm_fault *VAR_2)
{
 return FUNC_1() ?
   FUNC_2(VAR_0, VAR_1, VAR_2) :
   FUNC_0(VAR_0, VAR_1, VAR_2);
}
