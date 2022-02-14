
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* ext2fs_generic_bitmap_64 ;
typedef int __u64 ;
struct TYPE_3__ {scalar_t__ base_error_code; scalar_t__ description; } ;


 int FUNC_0 (int ,scalar_t__,char*,int ,...) ;

__attribute__((used)) static void FUNC_1(ext2fs_generic_bitmap_64 VAR_0,
   int VAR_1, __u64 VAR_2)
{

 if (VAR_0->description)
  FUNC_0(0, VAR_0->base_error_code+VAR_1,
   "#%llu for %s", VAR_2, VAR_0->description);
 else
  FUNC_0(0, VAR_0->base_error_code + VAR_1, "#%llu", VAR_2);

}
