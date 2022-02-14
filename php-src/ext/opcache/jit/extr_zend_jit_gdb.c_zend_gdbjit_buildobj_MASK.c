
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ space; int sym; int sect; int hdr; } ;
typedef TYPE_1__ zend_gdbjit_obj ;
struct TYPE_6__ {size_t objsize; scalar_t__ p; TYPE_1__ obj; } ;
typedef TYPE_2__ zend_gdbjit_ctx ;
typedef int zend_elf_symbol ;
typedef int zend_elf_sectheader ;
typedef int zend_elf_header ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_5(zend_gdbjit_ctx *VAR_15)
{
 zend_gdbjit_obj *VAR_16 = &VAR_15->obj;


 FUNC_2(&VAR_16->hdr, &VAR_8, sizeof(zend_elf_header));
 FUNC_3(&VAR_16->sect, 0, sizeof(zend_elf_sectheader) * VAR_0);
 FUNC_3(&VAR_16->sym, 0, sizeof(zend_elf_symbol) * VAR_7);


 VAR_15->p = VAR_16->space;
 FUNC_4(VAR_15, VAR_5, VAR_13);
 FUNC_4(VAR_15, VAR_6, VAR_14);
 FUNC_4(VAR_15, VAR_2, VAR_10);
 FUNC_4(VAR_15, VAR_1, VAR_9);
 FUNC_4(VAR_15, VAR_3, VAR_11);
 FUNC_0(VAR_15->p, sizeof(uintptr_t));
 FUNC_4(VAR_15, VAR_4, VAR_12);
 VAR_15->objsize = (size_t)((char *)VAR_15->p - (char *)VAR_16);

 FUNC_1(VAR_15->objsize < sizeof(zend_gdbjit_obj));
}
