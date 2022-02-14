
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_widget_tree {int root; struct hdac_widget_tree* nodes; } ;
struct hdac_device {scalar_t__ start_nid; int num_nodes; scalar_t__ end_nid; struct hdac_widget_tree* widgets; } ;
typedef scalar_t__ hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int *,struct hdac_widget_tree*) ;
 int FUNC_1 (struct hdac_widget_tree,int *) ;
 struct hdac_widget_tree* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct hdac_widget_tree*) ;
 struct hdac_widget_tree* FUNC_4 (struct hdac_widget_tree*,int,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_3 ;

int FUNC_6(struct hdac_device *VAR_4,
       hda_nid_t VAR_5, int VAR_6)
{
 struct hdac_widget_tree *VAR_7;
 hda_nid_t VAR_8 = VAR_5 + VAR_6;
 hda_nid_t VAR_9;
 int VAR_10;

 if (!VAR_4->widgets)
  return 0;

 VAR_7 = FUNC_4(VAR_4->widgets, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->nodes = FUNC_2(VAR_6 + 1, sizeof(*VAR_7->nodes), VAR_1);
 if (!VAR_7->nodes) {
  FUNC_3(VAR_7);
  return -VAR_0;
 }


 for (VAR_10 = 0, VAR_9 = VAR_4->start_nid; VAR_10 < VAR_4->num_nodes; VAR_10++, VAR_9++) {
  if (VAR_9 < VAR_5 || VAR_9 >= VAR_8)
   FUNC_1(VAR_4->widgets->nodes[VAR_10],
      &VAR_3);
 }


 for (VAR_10 = 0, VAR_9 = VAR_5; VAR_10 < VAR_6; VAR_10++, VAR_9++) {
  if (VAR_9 < VAR_4->start_nid || VAR_9 >= VAR_4->end_nid)
   FUNC_0(VAR_7->root, VAR_9, &VAR_3,
     &VAR_7->nodes[VAR_10]);
  else
   VAR_7->nodes[VAR_10] =
    VAR_4->widgets->nodes[VAR_9 - VAR_4->start_nid];
 }


 FUNC_3(VAR_4->widgets->nodes);
 FUNC_3(VAR_4->widgets);
 VAR_4->widgets = VAR_7;

 FUNC_5(VAR_7->root, VAR_2);
 return 0;
}
