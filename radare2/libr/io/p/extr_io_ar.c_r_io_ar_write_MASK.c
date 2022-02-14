
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_6__ {int off; } ;
struct TYPE_5__ {int data; } ;
typedef TYPE_1__ RIODesc ;
typedef TYPE_2__ RIO ;
typedef int RBuffer ;


 int FUNC_0 (int *,int ,void*,int) ;

__attribute__((used)) static int FUNC_1(RIO *VAR_0, RIODesc *VAR_1, const ut8 *VAR_2, int VAR_3) {
 RBuffer *VAR_4 = ((void*)0);
 if (!VAR_1 || !VAR_1->data || !VAR_2) {
  return -1;
 }
 return FUNC_0 (VAR_4, VAR_0->off, (void *) VAR_2, VAR_3);
}
