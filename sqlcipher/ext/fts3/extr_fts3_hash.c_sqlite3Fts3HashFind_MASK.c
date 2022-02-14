
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* data; } ;
typedef TYPE_1__ Fts3HashElem ;
typedef int Fts3Hash ;


 TYPE_1__* FUNC_0 (int const*,void const*,int) ;

void *FUNC_1(const Fts3Hash *VAR_0, const void *VAR_1, int VAR_2){
  Fts3HashElem *VAR_3;

  VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
  return VAR_3 ? VAR_3->data : 0;
}
