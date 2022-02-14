
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* e_ident; } ;
struct TYPE_4__ {TYPE_1__ ehdr; } ;
struct bpf_object {TYPE_2__ efile; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct bpf_object *VAR_4)
{

 if (VAR_4->efile.ehdr.e_ident[VAR_0] == VAR_1)
  return 0;






 FUNC_0("endianness mismatch.\n");
 return -VAR_3;
}
