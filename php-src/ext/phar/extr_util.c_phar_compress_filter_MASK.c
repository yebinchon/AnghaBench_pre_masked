
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ phar_entry_info ;




 int VAR_0 ;

char * FUNC_0(phar_entry_info * VAR_1, int VAR_2)
{
 switch (VAR_1->flags & VAR_0) {
 case 128:
  return "zlib.deflate";
 case 129:
  return "bzip2.compress";
 default:
  return VAR_2 ? "unknown" : ((void*)0);
 }
}
