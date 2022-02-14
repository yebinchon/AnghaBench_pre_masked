
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef scalar_t__ uint32_t ;
struct sway_workspace {char const* name; } ;
struct sway_view {struct sway_container* container; } ;
struct sway_seat {int dummy; } ;
struct TYPE_23__ {scalar_t__ id; } ;
struct sway_container {struct sway_workspace* workspace; TYPE_6__ node; TYPE_4__* marks; struct sway_view* view; } ;
struct criteria {scalar_t__ con_id; scalar_t__ id; scalar_t__ window_type; char urgent; TYPE_10__* workspace; scalar_t__ tiling; scalar_t__ floating; TYPE_9__* window_role; TYPE_8__* instance; TYPE_7__* class; TYPE_5__* con_mark; TYPE_3__* app_id; TYPE_2__* shell; TYPE_1__* title; } ;
struct TYPE_17__ {int length; struct sway_view** items; } ;
typedef TYPE_11__ list_t ;
struct TYPE_26__ {int match_type; int regex; } ;
struct TYPE_25__ {int match_type; int regex; } ;
struct TYPE_24__ {int match_type; int regex; } ;
struct TYPE_22__ {int regex; } ;
struct TYPE_21__ {int length; char const** items; } ;
struct TYPE_20__ {int match_type; int regex; } ;
struct TYPE_19__ {int match_type; int regex; } ;
struct TYPE_18__ {int match_type; int regex; } ;
struct TYPE_16__ {int match_type; int regex; } ;


 scalar_t__ VAR_0 ;


 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sway_container*) ;
 TYPE_11__* FUNC_1 () ;
 int VAR_2 ;
 struct sway_seat* FUNC_2 () ;
 int FUNC_3 (TYPE_11__*) ;
 int FUNC_4 (TYPE_11__*,int ) ;
 scalar_t__ FUNC_5 (char const*,int ) ;
 int FUNC_6 (int ,TYPE_11__*) ;
 struct sway_container* FUNC_7 (struct sway_seat*) ;
 int FUNC_8 (char const*,char*) ;
 char* FUNC_9 (struct sway_view*) ;
 char* FUNC_10 (struct sway_view*) ;
 char* FUNC_11 (struct sway_view*) ;
 char* FUNC_12 (struct sway_view*) ;
 char* FUNC_13 (struct sway_view*) ;
 char* FUNC_14 (struct sway_view*) ;
 scalar_t__ FUNC_15 (struct sway_view*) ;
 int FUNC_16 (struct sway_view*,scalar_t__) ;
 int FUNC_17 (struct sway_view*) ;

__attribute__((used)) static bool FUNC_18(struct criteria *VAR_3,
  struct sway_view *VAR_4) {
 struct sway_seat *VAR_5 = FUNC_2();
 struct sway_container *VAR_6 = FUNC_7(VAR_5);
 struct sway_view *VAR_7 = VAR_6 ? VAR_6->view : ((void*)0);

 if (VAR_3->title) {
  const char *VAR_8 = FUNC_13(VAR_4);
  if (!VAR_8) {
   return 0;
  }

  switch (VAR_3->title->match_type) {
  case 129:
   if (VAR_7 && FUNC_8(VAR_8, FUNC_13(VAR_7))) {
    return 0;
   }
   break;
  case 128:
   if (FUNC_5(VAR_8, VAR_3->title->regex) != 0) {
    return 0;
   }
   break;
  }
 }

 if (VAR_3->shell) {
  const char *VAR_9 = FUNC_12(VAR_4);
  if (!VAR_9) {
   return 0;
  }

  switch (VAR_3->shell->match_type) {
  case 129:
   if (VAR_7 && FUNC_8(VAR_9, FUNC_12(VAR_7))) {
    return 0;
   }
   break;
  case 128:
   if (FUNC_5(VAR_9, VAR_3->shell->regex) != 0) {
    return 0;
   }
   break;
  }
 }

 if (VAR_3->app_id) {
  const char *VAR_10 = FUNC_9(VAR_4);
  if (!VAR_10) {
   return 0;
  }

  switch (VAR_3->app_id->match_type) {
  case 129:
   if (VAR_7 && FUNC_8(VAR_10, FUNC_9(VAR_7))) {
    return 0;
   }
   break;
  case 128:
   if (FUNC_5(VAR_10, VAR_3->app_id->regex) != 0) {
    return 0;
   }
   break;
  }
 }

 if (VAR_3->con_mark) {
  bool VAR_11 = 0;
  struct sway_container *VAR_12 = VAR_4->container;
  for (int VAR_13 = 0; VAR_13 < VAR_12->marks->length; ++VAR_13) {
   if (FUNC_5(VAR_12->marks->items[VAR_13], VAR_3->con_mark->regex) == 0) {
    VAR_11 = 1;
    break;
   }
  }
  if (!VAR_11) {
   return 0;
  }
 }

 if (VAR_3->con_id) {
  if (!VAR_4->container || VAR_4->container->node.id != VAR_3->con_id) {
   return 0;
  }
 }
 if (VAR_3->floating) {
  if (!FUNC_0(VAR_4->container)) {
   return 0;
  }
 }

 if (VAR_3->tiling) {
  if (FUNC_0(VAR_4->container)) {
   return 0;
  }
 }

 if (VAR_3->urgent) {
  if (!FUNC_17(VAR_4)) {
   return 0;
  }
  list_t *VAR_14 = FUNC_1();
  FUNC_6(VAR_2, VAR_14);
  FUNC_4(VAR_14, VAR_1);
  struct sway_view *VAR_15;
  if (VAR_3->urgent == 'o') {
   VAR_15 = VAR_14->items[0];
  } else {
   VAR_15 = VAR_14->items[VAR_14->length - 1];
  }
  FUNC_3(VAR_14);
  if (VAR_4 != VAR_15) {
   return 0;
  }
 }

 if (VAR_3->workspace) {
  struct sway_workspace *VAR_16 = VAR_4->container->workspace;
  if (!VAR_16) {
   return 0;
  }

  switch (VAR_3->workspace->match_type) {
  case 129:
   if (VAR_7 &&
     FUNC_8(VAR_16->name, VAR_7->container->workspace->name)) {
    return 0;
   }
   break;
  case 128:
   if (FUNC_5(VAR_16->name, VAR_3->workspace->regex) != 0) {
    return 0;
   }
   break;
  }
 }

 return 1;
}
