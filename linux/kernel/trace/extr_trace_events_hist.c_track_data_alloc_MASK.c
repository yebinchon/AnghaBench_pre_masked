
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct hist_elt_data* private_data; } ;
struct track_data {unsigned int key_len; TYPE_1__ elt; struct hist_trigger_data* hist_data; struct action_data* action_data; void* key; } ;
struct hist_trigger_data {int dummy; } ;
struct hist_elt_data {void* comm; } ;
struct action_data {int dummy; } ;


 int VAR_0 ;
 struct track_data* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (struct track_data*) ;

__attribute__((used)) static struct track_data *FUNC_3(unsigned int VAR_3,
        struct action_data *VAR_4,
        struct hist_trigger_data *VAR_5)
{
 struct track_data *VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
 struct hist_elt_data *VAR_7;

 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_6->key = FUNC_1(VAR_3, VAR_1);
 if (!VAR_6->key) {
  FUNC_2(VAR_6);
  return FUNC_0(-VAR_0);
 }

 VAR_6->key_len = VAR_3;
 VAR_6->action_data = VAR_4;
 VAR_6->hist_data = VAR_5;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (!VAR_7) {
  FUNC_2(VAR_6);
  return FUNC_0(-VAR_0);
 }
 VAR_6->elt.private_data = VAR_7;

 VAR_7->comm = FUNC_1(VAR_2, VAR_1);
 if (!VAR_7->comm) {
  FUNC_2(VAR_6);
  return FUNC_0(-VAR_0);
 }

 return VAR_6;
}
