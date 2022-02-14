
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct evsel_priv {struct bt_ctf_event_class* event_class; } ;
struct TYPE_3__ {int type; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {struct evsel_priv* priv; TYPE_2__ core; } ;
struct ctf_writer {int stream_class; } ;
struct bt_ctf_event_class {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ctf_writer*,struct bt_ctf_event_class*) ;
 int FUNC_1 (struct ctf_writer*,struct evsel*,struct bt_ctf_event_class*) ;
 int FUNC_2 (struct ctf_writer*,struct evsel*,struct bt_ctf_event_class*) ;
 struct bt_ctf_event_class* FUNC_3 (char const*) ;
 int FUNC_4 (struct bt_ctf_event_class*) ;
 int FUNC_5 (int ,struct bt_ctf_event_class*) ;
 struct evsel_priv* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct evsel*) ;
 char* FUNC_8 (struct evsel*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,char const*) ;

__attribute__((used)) static int FUNC_11(struct ctf_writer *VAR_1, struct evsel *VAR_2)
{
 struct bt_ctf_event_class *VAR_3;
 struct evsel_priv *VAR_4;
 const char *VAR_5 = FUNC_8(VAR_2);
 int VAR_6;

 FUNC_9("Adding event '%s' (type %d)\n", VAR_5, VAR_2->core.attr.type);

 VAR_3 = FUNC_3(VAR_5);
 if (!VAR_3)
  return -1;

 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_6)
  goto err;

 if (VAR_2->core.attr.type == VAR_0) {
  VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3);
  if (VAR_6)
   goto err;
 }

 if (FUNC_7(VAR_2)) {
  VAR_6 = FUNC_0(VAR_1, VAR_3);
  if (VAR_6)
   goto err;
 }

 VAR_6 = FUNC_5(VAR_1->stream_class, VAR_3);
 if (VAR_6) {
  FUNC_9("Failed to add event class into stream.\n");
  goto err;
 }

 VAR_4 = FUNC_6(sizeof(*VAR_4));
 if (!VAR_4)
  goto err;

 VAR_4->event_class = VAR_3;
 VAR_2->priv = VAR_4;
 return 0;

err:
 FUNC_4(VAR_3);
 FUNC_10("Failed to add event '%s'.\n", VAR_5);
 return -1;
}
