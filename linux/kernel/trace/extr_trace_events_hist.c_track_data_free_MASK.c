
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct track_data* private_data; } ;
struct track_data {struct track_data* comm; TYPE_1__ elt; struct track_data* key; } ;
struct hist_elt_data {struct hist_elt_data* comm; TYPE_1__ elt; struct hist_elt_data* key; } ;


 int FUNC_0 (struct track_data*) ;

__attribute__((used)) static void FUNC_1(struct track_data *VAR_0)
{
 struct hist_elt_data *VAR_1;

 if (!VAR_0)
  return;

 FUNC_0(VAR_0->key);

 VAR_1 = VAR_0->elt.private_data;
 if (VAR_1) {
  FUNC_0(VAR_1->comm);
  FUNC_0(VAR_1);
 }

 FUNC_0(VAR_0);
}
