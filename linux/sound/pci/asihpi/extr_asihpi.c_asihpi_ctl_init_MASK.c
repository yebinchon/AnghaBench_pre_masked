
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {scalar_t__ index; int iface; int private_value; int name; } ;
struct hpi_control {size_t src_node_type; size_t dst_node_type; int src_node_index; int dst_node_index; int name; int h_control; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 char** VAR_6 ;
 char** VAR_7 ;
 int FUNC_0 (struct snd_kcontrol_new*,int ,int) ;
 int FUNC_1 (int ,char*,char*,int,char*,...) ;

__attribute__((used)) static void FUNC_2(struct snd_kcontrol_new *VAR_8,
    struct hpi_control *VAR_9,
    char *VAR_10)
{
 char *VAR_11;
 FUNC_0(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->name = VAR_9->name;
 VAR_8->private_value = VAR_9->h_control;
 VAR_8->iface = VAR_5;
 VAR_8->index = 0;

 if (VAR_9->src_node_type + VAR_3 == VAR_2)
  VAR_11 = "";
 else if (VAR_9->dst_node_type + VAR_1 == VAR_0)
  VAR_11 = "Capture ";
 else if ((VAR_9->src_node_type + VAR_3 != VAR_4) &&
  (!VAR_9->dst_node_type))
  VAR_11 = "Capture ";
 else if (VAR_9->src_node_type &&
  (VAR_9->src_node_type + VAR_3 != VAR_4) &&
  (VAR_9->dst_node_type))
  VAR_11 = "Monitor Playback ";
 else
  VAR_11 = "Playback ";

 if (VAR_9->src_node_type && VAR_9->dst_node_type)
  FUNC_1(VAR_9->name, "%s %d %s %d %s%s",
   VAR_7[VAR_9->src_node_type],
   VAR_9->src_node_index,
   VAR_6[VAR_9->dst_node_type],
   VAR_9->dst_node_index,
   VAR_11, VAR_10);
 else if (VAR_9->dst_node_type) {
  FUNC_1(VAR_9->name, "%s %d %s%s",
  VAR_6[VAR_9->dst_node_type],
  VAR_9->dst_node_index,
  VAR_11, VAR_10);
 } else {
  FUNC_1(VAR_9->name, "%s %d %s%s",
  VAR_7[VAR_9->src_node_type],
  VAR_9->src_node_index,
  VAR_11, VAR_10);
 }


}
