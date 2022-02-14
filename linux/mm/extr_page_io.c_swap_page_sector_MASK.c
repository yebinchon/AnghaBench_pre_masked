
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int sector_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;

__attribute__((used)) static sector_t FUNC_1(struct page *VAR_1)
{
 return (sector_t)FUNC_0(VAR_1) << (VAR_0 - 9);
}
