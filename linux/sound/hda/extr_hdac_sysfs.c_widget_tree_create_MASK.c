
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdac_widget_tree {int root; int afg; int * nodes; } ;
struct TYPE_2__ {int kobj; } ;
struct hdac_device {int num_nodes; scalar_t__ afg; scalar_t__ start_nid; TYPE_1__ dev; struct hdac_widget_tree* widgets; } ;
typedef scalar_t__ hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int *,int *) ;
 int * FUNC_1 (int,int,int ) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (int ,int ) ;
 struct hdac_widget_tree* FUNC_4 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct hdac_device *VAR_5)
{
 struct hdac_widget_tree *VAR_6;
 int VAR_7, VAR_8;
 hda_nid_t VAR_9;

 VAR_6 = VAR_5->widgets = FUNC_4(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->root = FUNC_2("widgets", &VAR_5->dev.kobj);
 if (!VAR_6->root)
  return -VAR_0;

 VAR_6->nodes = FUNC_1(VAR_5->num_nodes + 1, sizeof(*VAR_6->nodes),
         VAR_1);
 if (!VAR_6->nodes)
  return -VAR_0;

 for (VAR_7 = 0, VAR_9 = VAR_5->start_nid; VAR_7 < VAR_5->num_nodes; VAR_7++, VAR_9++) {
  VAR_8 = FUNC_0(VAR_6->root, VAR_9, &VAR_4,
          &VAR_6->nodes[VAR_7]);
  if (VAR_8 < 0)
   return VAR_8;
 }

 if (VAR_5->afg) {
  VAR_8 = FUNC_0(VAR_6->root, VAR_5->afg,
          &VAR_3, &VAR_6->afg);
  if (VAR_8 < 0)
   return VAR_8;
 }

 FUNC_3(VAR_6->root, VAR_2);
 return 0;
}
