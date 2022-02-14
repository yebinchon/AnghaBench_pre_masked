
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ physical_offset; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,char*) ;

size_t FUNC_1(size_t VAR_2) {

  if (VAR_2 + VAR_1.physical_offset < VAR_1.physical_offset)
    return VAR_2;



  if (VAR_2 >= (64ULL * 1024ULL * 1024ULL * 1024ULL * 1024ULL)) {
    FUNC_0(VAR_0, "phys_to_virt argument is > 64 TB\n");
    return -1ULL;
  }


  return VAR_2 + VAR_1.physical_offset;
}
