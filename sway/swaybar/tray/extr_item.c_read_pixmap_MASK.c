
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct swaybar_sni {int watcher_id; } ;
struct swaybar_pixmap {int size; scalar_t__ pixels; } ;
typedef int sd_bus_message ;
struct TYPE_6__ {int length; } ;
typedef TYPE_1__ list_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,struct swaybar_pixmap*) ;
 int FUNC_2 (TYPE_1__*) ;
 struct swaybar_pixmap* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int*,int*) ;
 int FUNC_9 (int *,char,void const**,size_t*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,char*,int ,char const*,...) ;

__attribute__((used)) static int FUNC_12(sd_bus_message *VAR_2, struct swaybar_sni *VAR_3,
  const char *VAR_4, list_t **VAR_5) {
 int VAR_6 = FUNC_6(VAR_2, 'a', "(iiay)");
 if (VAR_6 < 0) {
  FUNC_11(VAR_1, "%s %s: %s", VAR_3->watcher_id, VAR_4, FUNC_10(-VAR_6));
  return VAR_6;
 }

 if (FUNC_5(VAR_2, 0)) {
  FUNC_11(VAR_0, "%s %s no. of icons = 0", VAR_3->watcher_id, VAR_4);
  return VAR_6;
 }

 list_t *VAR_7 = FUNC_0();
 if (!VAR_7) {
  return -12;
 }

 while (!FUNC_5(VAR_2, 0)) {
  VAR_6 = FUNC_6(VAR_2, 'r', "iiay");
  if (VAR_6 < 0) {
   FUNC_11(VAR_1, "%s %s: %s", VAR_3->watcher_id, VAR_4, FUNC_10(-VAR_6));
   goto error;
  }

  int VAR_8, VAR_9;
  VAR_6 = FUNC_8(VAR_2, "ii", &VAR_8, &VAR_9);
  if (VAR_6 < 0) {
   FUNC_11(VAR_1, "%s %s: %s", VAR_3->watcher_id, VAR_4, FUNC_10(-VAR_6));
   goto error;
  }

  const void *VAR_10;
  size_t VAR_11;
  VAR_6 = FUNC_9(VAR_2, 'y', &VAR_10, &VAR_11);
  if (VAR_6 < 0) {
   FUNC_11(VAR_1, "%s %s: %s", VAR_3->watcher_id, VAR_4, FUNC_10(-VAR_6));
   goto error;
  }

  if (VAR_9 > 0 && VAR_8 == VAR_9) {
   FUNC_11(VAR_0, "%s %s: found icon w:%d h:%d", VAR_3->watcher_id, VAR_4, VAR_8, VAR_9);
   struct swaybar_pixmap *VAR_12 =
    FUNC_3(sizeof(struct swaybar_pixmap) + VAR_11);
   VAR_12->size = VAR_9;


   for (int VAR_13 = 0; VAR_13 < VAR_9 * VAR_8; ++VAR_13) {
    ((uint32_t *)VAR_12->pixels)[VAR_13] = FUNC_4(((uint32_t *)VAR_10)[VAR_13]);
   }

   FUNC_1(VAR_7, VAR_12);
  } else {
   FUNC_11(VAR_0, "%s %s: discard invalid icon w:%d h:%d", VAR_3->watcher_id, VAR_4, VAR_8, VAR_9);
  }

  FUNC_7(VAR_2);
 }

 if (VAR_7->length < 1) {
  FUNC_11(VAR_0, "%s %s no. of icons = 0", VAR_3->watcher_id, VAR_4);
  goto error;
 }

 FUNC_2(*VAR_5);
 *VAR_5 = VAR_7;
 FUNC_11(VAR_0, "%s %s no. of icons = %d", VAR_3->watcher_id, VAR_4,
   VAR_7->length);

 return VAR_6;
error:
 FUNC_2(VAR_7);
 return VAR_6;
}
