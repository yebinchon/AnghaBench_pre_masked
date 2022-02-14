
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ len; } ;
struct TYPE_6__ {TYPE_1__ tsv; } ;
typedef int TValue ;
typedef TYPE_2__ TString ;


 scalar_t__ VAR_0 ;
 int const* VAR_1 ;
 int const* FUNC_0 (void*,TYPE_2__*,int *) ;

const TValue *FUNC_1 (void *VAR_2, TString *VAR_3) {
  if (!VAR_2 || VAR_3->tsv.len>VAR_0)
    return VAR_1;
  return FUNC_0(VAR_2, VAR_3, ((void*)0));
}
