
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
struct TYPE_3__ {int bitcount; int tag; int (* get_byte ) () ;} ;
typedef TYPE_1__ UZLIB_DATA ;


 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1 (UZLIB_DATA *VAR_0) {
  uint VAR_1;


  if (!VAR_0->bitcount--) {

    VAR_0->tag = VAR_0->get_byte();
    VAR_0->bitcount = 7;
  }


  VAR_1 = VAR_0->tag & 0x01;
  VAR_0->tag >>= 1;

  return VAR_1;
}
