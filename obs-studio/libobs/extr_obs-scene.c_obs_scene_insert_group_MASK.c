
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {struct TYPE_19__* prev; TYPE_2__* parent; struct TYPE_19__* next; scalar_t__ is_group; } ;
typedef TYPE_1__ obs_sceneitem_t ;
struct TYPE_20__ {TYPE_1__* first_item; int source; } ;
typedef TYPE_2__ obs_scene_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 TYPE_2__* FUNC_1 (char*,char const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_1__* FUNC_5 (TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

obs_sceneitem_t *FUNC_9(obs_scene_t *VAR_0, const char *VAR_1,
     obs_sceneitem_t **VAR_2, size_t VAR_3)
{
 if (!VAR_0)
  return ((void*)0);


 for (size_t VAR_4 = VAR_3; VAR_4 > 0; VAR_4--) {
  obs_sceneitem_t *VAR_5 = VAR_2[VAR_4 - 1];
  if (VAR_5->parent != VAR_0 || VAR_5->is_group)
   return ((void*)0);
 }

 obs_scene_t *VAR_6 = FUNC_1("group", VAR_1);
 obs_sceneitem_t *VAR_7 = VAR_2 ? VAR_2[VAR_3 - 1] : ((void*)0);

 obs_sceneitem_t *VAR_8 =
  FUNC_5(VAR_0, VAR_6->source, VAR_7);

 FUNC_6(VAR_6);

 if (!VAR_2 || !VAR_3)
  return VAR_8;



 FUNC_3(VAR_0);
 FUNC_3(VAR_6);
 VAR_6->first_item = VAR_2[0];

 for (size_t VAR_9 = VAR_3; VAR_9 > 0; VAR_9--) {
  size_t VAR_10 = VAR_9 - 1;
  FUNC_7(VAR_8, VAR_2[VAR_10]);
  FUNC_2(VAR_2[VAR_10]);
 }
 for (size_t VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  size_t VAR_12 = VAR_11;
  if (VAR_12 != (VAR_3 - 1)) {
   size_t VAR_13 = VAR_12 + 1;
   VAR_2[VAR_12]->next = VAR_2[VAR_13];
   VAR_2[VAR_13]->prev = VAR_2[VAR_12];
  } else {
   VAR_2[VAR_12]->next = ((void*)0);
  }
  VAR_2[VAR_12]->parent = VAR_6;
  FUNC_0(VAR_2[VAR_12], VAR_8);
 }
 VAR_2[0]->prev = ((void*)0);
 FUNC_8(VAR_8);
 FUNC_4(VAR_6);
 FUNC_4(VAR_0);



 return VAR_8;
}
