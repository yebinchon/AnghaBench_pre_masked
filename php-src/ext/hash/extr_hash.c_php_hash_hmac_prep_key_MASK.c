
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t const block_size; int (* hash_final ) (unsigned char*,void*) ;int (* hash_update ) (void*,unsigned char const*,size_t const) ;int (* hash_init ) (void*) ;} ;
typedef TYPE_1__ php_hash_ops ;


 int FUNC_0 (unsigned char*,unsigned char const*,size_t const) ;
 int FUNC_1 (unsigned char*,int ,size_t const) ;
 int FUNC_2 (unsigned char*,unsigned char*,int,size_t const) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,unsigned char const*,size_t const) ;
 int FUNC_5 (unsigned char*,void*) ;

__attribute__((used)) static inline void FUNC_6(unsigned char *VAR_0, const php_hash_ops *VAR_1, void *VAR_2, const unsigned char *VAR_3, const size_t VAR_4) {
 FUNC_1(VAR_0, 0, VAR_1->block_size);
 if (VAR_4 > VAR_1->block_size) {

  VAR_1->hash_init(VAR_2);
  VAR_1->hash_update(VAR_2, VAR_3, VAR_4);
  VAR_1->hash_final(VAR_0, VAR_2);
 } else {
  FUNC_0(VAR_0, VAR_3, VAR_4);
 }

 FUNC_2(VAR_0, VAR_0, 0x36, VAR_1->block_size);
}
