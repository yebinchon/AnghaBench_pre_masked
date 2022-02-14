
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int old_flags; int flags; scalar_t__ is_modified; } ;
typedef TYPE_1__ phar_entry_info ;




 int VAR_0 ;

char * FUNC_0(phar_entry_info * VAR_1, int VAR_2)
{
 uint32_t VAR_3;

 if (VAR_1->is_modified) {
  VAR_3 = VAR_1->old_flags;
 } else {
  VAR_3 = VAR_1->flags;
 }

 switch (VAR_3 & VAR_0) {
  case 128:
   return "zlib.inflate";
  case 129:
   return "bzip2.decompress";
  default:
   return VAR_2 ? "unknown" : ((void*)0);
 }
}
