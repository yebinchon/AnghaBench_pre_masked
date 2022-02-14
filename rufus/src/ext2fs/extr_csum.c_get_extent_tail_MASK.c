
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext3_extent_tail {int dummy; } ;
struct ext3_extent_header {int dummy; } ;


 int FUNC_0 (struct ext3_extent_header*) ;

__attribute__((used)) static struct ext3_extent_tail *FUNC_1(struct ext3_extent_header *VAR_0)
{
 return (struct ext3_extent_tail *)(((char *)VAR_0) +
        FUNC_0(VAR_0));
}
