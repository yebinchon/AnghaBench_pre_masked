
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pDoclist; scalar_t__ p; } ;
typedef TYPE_1__ DocListReader ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(DocListReader *VAR_0){
  return VAR_0->pDoclist==0 || (VAR_0->p >= FUNC_0(VAR_0->pDoclist));
}
