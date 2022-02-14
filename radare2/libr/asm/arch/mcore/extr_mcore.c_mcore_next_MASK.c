
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mcore_t ;
struct TYPE_3__ {scalar_t__ pos; scalar_t__ end; } ;
typedef TYPE_1__ mcore_handle ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (scalar_t__) ;

mcore_t* FUNC_1(mcore_handle* VAR_1) {
 mcore_t *VAR_2 = ((void*)0);
 if (!VAR_1 || VAR_1->pos + VAR_0 > VAR_1->end) {
  return ((void*)0);
 }

 if (!VAR_2 && VAR_1->pos + 2 <= VAR_1->end) {
  VAR_2 = FUNC_0 (VAR_1->pos);
 }
 VAR_1->pos += VAR_0;

 return VAR_2;
}
