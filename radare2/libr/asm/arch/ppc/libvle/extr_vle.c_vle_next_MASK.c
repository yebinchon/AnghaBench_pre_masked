
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int size; } ;
typedef TYPE_1__ vle_t ;
struct TYPE_10__ {scalar_t__ pos; scalar_t__ end; int inc; } ;
typedef TYPE_2__ vle_handle ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 TYPE_1__* FUNC_3 (scalar_t__) ;

vle_t* FUNC_4(vle_handle* VAR_0) {
 vle_t *VAR_1 = ((void*)0);
 if (!VAR_0 || VAR_0->pos + VAR_0->inc >= VAR_0->end) {
  return ((void*)0);
 }
 VAR_0->pos += VAR_0->inc;


 if (FUNC_0 (VAR_0) && VAR_0->pos + 4 <= VAR_0->end) {
  VAR_1 = FUNC_2 (VAR_0->pos);
 }
 if (!VAR_1 && VAR_0->pos + 4 <= VAR_0->end) {
  VAR_1 = FUNC_1 (VAR_0->pos);
 }
 if (!VAR_1 && VAR_0->pos + 2 <= VAR_0->end) {
  VAR_1 = FUNC_3 (VAR_0->pos);
 }

 VAR_0->inc = VAR_1 ? VAR_1->size : 0;
 return VAR_1;
}
