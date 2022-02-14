
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; } ;
typedef TYPE_1__ yxml_t ;
typedef int yxml_ret_t ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;

__attribute__((used)) static inline yxml_ret_t FUNC_1(yxml_t *VAR_1, unsigned VAR_2) {
 VAR_1->data[0] = ']';
 VAR_1->data[1] = ']';
 FUNC_0(VAR_1->data+2, VAR_2);
 VAR_1->data[3] = 0;
 return VAR_0;
}
