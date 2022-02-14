
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ipsi; scalar_t__ unk; } ;
typedef TYPE_1__ php_com_persist_helper ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int *,scalar_t__*) ;
 int VAR_2 ;

__attribute__((used)) static inline HRESULT FUNC_1(php_com_persist_helper *VAR_3)
{
 if (!VAR_3->ipsi && VAR_3->unk) {
  return FUNC_0(VAR_3->unk, &VAR_1, &VAR_3->ipsi);
 }
 return VAR_3->ipsi ? VAR_2 : VAR_0;
}
