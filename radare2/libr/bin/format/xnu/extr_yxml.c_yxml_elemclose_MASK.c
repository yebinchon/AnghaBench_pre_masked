
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ elem; } ;
typedef TYPE_1__ yxml_t ;
typedef int yxml_ret_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline yxml_ret_t FUNC_0(yxml_t *VAR_2, unsigned VAR_3) {
 if(*((unsigned char *)VAR_2->elem) != VAR_3)
  return VAR_0;
 VAR_2->elem++;
 return VAR_1;
}
