
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t size; int dynamic_members; scalar_t__ mem; } ;
typedef TYPE_1__ zend_persistent_script ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned char*,size_t) ;

unsigned int FUNC_1(zend_persistent_script *VAR_1)
{
 unsigned char *VAR_2 = (unsigned char*)VAR_1->mem;
 size_t VAR_3 = VAR_1->size;
 size_t VAR_4 = ((char *)&(VAR_1->dynamic_members)) - (char *)VAR_1;
 unsigned int VAR_5 = VAR_0;

 if (VAR_2 < (unsigned char*)VAR_1) {
  VAR_5 = FUNC_0(VAR_5, VAR_2, (unsigned char*)VAR_1 - VAR_2);
  VAR_3 -= (unsigned char*)VAR_1 - VAR_2;
  VAR_2 += (unsigned char*)VAR_1 - VAR_2;
 }

 FUNC_0(VAR_5, VAR_2, VAR_4);
 VAR_2 += sizeof(*VAR_1);
 VAR_3 -= sizeof(*VAR_1);

 if (VAR_3 > 0) {
  VAR_5 = FUNC_0(VAR_5, VAR_2, VAR_3);
 }
 return VAR_5;
}
