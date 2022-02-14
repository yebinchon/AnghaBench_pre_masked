
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_14__ {int base; int screen; int screen_size; int input; int input_size; scalar_t__ input_buf; scalar_t__ screen_buf; scalar_t__ mem; } ;
struct TYPE_13__ {int off; } ;
struct TYPE_12__ {TYPE_4__* bfvm; } ;
struct TYPE_11__ {TYPE_2__* data; } ;
typedef TYPE_1__ RIODesc ;
typedef TYPE_2__ RIOBfdbg ;
typedef TYPE_3__ RIO ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int,TYPE_4__*) ;
 scalar_t__ FUNC_3 (int,TYPE_4__*) ;
 scalar_t__ FUNC_4 (int,TYPE_4__*) ;
 int FUNC_5 (int *,scalar_t__,int) ;

__attribute__((used)) static int FUNC_6(RIO *VAR_0, RIODesc *VAR_1, ut8 *VAR_2, int VAR_3) {
 RIOBfdbg *VAR_4;
 int VAR_5;
 if (!VAR_1 || !VAR_1->data) {
  return -1;
 }
 VAR_4 = VAR_1->data;

 if (FUNC_2 (VAR_0->off, VAR_4->bfvm)) {
  int VAR_6 = VAR_0->off-VAR_4->bfvm->base;
  if (VAR_6 > VAR_3) {
   VAR_3 = VAR_6;
  }
  FUNC_5 (VAR_2, VAR_4->bfvm->mem+VAR_6, VAR_3);
  return VAR_3;
 }

 if (FUNC_4 (VAR_0->off, VAR_4->bfvm)) {
  int VAR_7 = VAR_0->off-VAR_4->bfvm->screen;
  if (VAR_7 > VAR_3) {
   VAR_3 = VAR_4->bfvm->screen_size - VAR_7;
  }
  FUNC_5 (VAR_2, VAR_4->bfvm->screen_buf+VAR_7, VAR_3);
  return VAR_3;
 }

 if (FUNC_3 (VAR_0->off, VAR_4->bfvm)) {
  int VAR_8 = VAR_0->off-VAR_4->bfvm->input;
  if (VAR_8 > VAR_3) {
   VAR_3 = VAR_4->bfvm->input_size - VAR_8;
  }
  FUNC_5 (VAR_2, VAR_4->bfvm->input_buf+VAR_8, VAR_3);
  return VAR_3;
 }

 VAR_5 = FUNC_1 (VAR_1);
 if (VAR_0->off + VAR_3 >= VAR_5) {
  VAR_3 = VAR_5 - VAR_0->off;
 }
 if (VAR_0->off >= VAR_5) {
  return -1;
 }
 FUNC_5 (VAR_2, FUNC_0 (VAR_1)+VAR_0->off, VAR_3);
 return VAR_3;
}
