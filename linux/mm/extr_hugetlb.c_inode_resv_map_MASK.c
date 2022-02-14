
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resv_map {int dummy; } ;
struct TYPE_2__ {scalar_t__ private_data; } ;
struct inode {TYPE_1__ i_data; } ;



__attribute__((used)) static inline struct resv_map *FUNC_0(struct inode *VAR_0)
{
 return (struct resv_map *)(&VAR_0->i_data)->private_data;
}
