
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_long ;
struct TYPE_3__ {int (* hash_final ) (unsigned char*,void*) ;int (* hash_update ) (void*,unsigned char const*,int const) ;int const block_size; int (* hash_init ) (void*) ;} ;
typedef TYPE_1__ php_hash_ops ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*,unsigned char const*,int const) ;
 int FUNC_2 (void*,unsigned char const*,int const) ;
 int FUNC_3 (unsigned char*,void*) ;

__attribute__((used)) static inline void FUNC_4(unsigned char *VAR_0, const php_hash_ops *VAR_1, void *VAR_2, const unsigned char *VAR_3, const unsigned char *VAR_4, const zend_long VAR_5) {
 VAR_1->hash_init(VAR_2);
 VAR_1->hash_update(VAR_2, VAR_3, VAR_1->block_size);
 VAR_1->hash_update(VAR_2, VAR_4, VAR_5);
 VAR_1->hash_final(VAR_0, VAR_2);
}
