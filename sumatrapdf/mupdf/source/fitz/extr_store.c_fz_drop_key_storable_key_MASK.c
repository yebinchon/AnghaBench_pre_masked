
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ refs; int (* drop ) (int *,TYPE_2__*) ;} ;
struct TYPE_5__ {scalar_t__ store_key_refs; TYPE_2__ storable; } ;
typedef TYPE_1__ fz_key_storable ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,TYPE_2__*) ;

void FUNC_5(fz_context *VAR_1, const fz_key_storable *VAR_2)
{


 fz_key_storable *VAR_3 = (fz_key_storable *)VAR_2;
 int VAR_4;

 if (VAR_3 == ((void*)0))
  return;

 FUNC_2(VAR_1, VAR_0);
 FUNC_1(VAR_3->store_key_refs > 0 && VAR_3->storable.refs >= VAR_3->store_key_refs);
 (void)FUNC_0(VAR_3);
 VAR_4 = --VAR_3->storable.refs == 0;
 --VAR_3->store_key_refs;
 FUNC_3(VAR_1, VAR_0);







 if (VAR_4)
  VAR_3->storable.drop(VAR_1, &VAR_3->storable);
}
