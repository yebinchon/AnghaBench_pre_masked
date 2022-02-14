
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int dummy; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;


 struct buffer_head* FUNC_0 (struct block_device*,int ,unsigned long,int) ;

struct buffer_head *
FUNC_1(
    struct block_device * VAR_0,
    sector_t VAR_1,
    unsigned long VAR_2,
    int VAR_3
)
{
    return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
