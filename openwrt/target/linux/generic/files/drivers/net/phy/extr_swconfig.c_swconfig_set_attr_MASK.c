
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int val ;
struct TYPE_2__ {struct switch_val* link; struct switch_val* ports; int s; int i; } ;
struct switch_val {int len; TYPE_1__ value; struct switch_attr const* attr; } ;
struct switch_port_link {int dummy; } ;
struct switch_port {int dummy; } ;
struct switch_dev {int ports; struct switch_val linkbuf; struct switch_val* portbuf; } ;
struct switch_attr {int (* set ) (struct switch_dev*,struct switch_attr const*,struct switch_val*) ;int type; } ;
struct sk_buff {int dummy; } ;
struct genl_info {int * attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;





 int FUNC_0 (int ) ;
 int FUNC_1 (struct switch_val*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct switch_dev*,struct switch_attr const*,struct switch_val*) ;
 struct switch_dev* FUNC_5 (struct genl_info*) ;
 struct switch_attr* FUNC_6 (struct switch_dev*,struct genl_info*,struct switch_val*) ;
 int FUNC_7 (struct sk_buff*,int ,struct switch_val*) ;
 int FUNC_8 (struct sk_buff*,int ,struct switch_val*,int) ;
 int FUNC_9 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_10(struct sk_buff *VAR_7, struct genl_info *VAR_8)
{
 const struct switch_attr *VAR_9;
 struct switch_dev *VAR_10;
 struct switch_val VAR_11;
 int VAR_12 = -VAR_1;

 if (!FUNC_0(VAR_0))
  return -VAR_2;

 VAR_10 = FUNC_5(VAR_8);
 if (!VAR_10)
  return -VAR_1;

 FUNC_1(&VAR_11, 0, sizeof(VAR_11));
 VAR_9 = FUNC_6(VAR_10, VAR_8, &VAR_11);
 if (!VAR_9 || !VAR_9->set)
  goto error;

 VAR_11.attr = VAR_9;
 switch (VAR_9->type) {
 case 130:
  break;
 case 132:
  if (!VAR_8->attrs[VAR_3])
   goto error;
  VAR_11.value.i =
   FUNC_3(VAR_8->attrs[VAR_3]);
  break;
 case 128:
  if (!VAR_8->attrs[VAR_6])
   goto error;
  VAR_11.value.s =
   FUNC_2(VAR_8->attrs[VAR_6]);
  break;
 case 129:
  VAR_11.value.ports = VAR_10->portbuf;
  FUNC_1(VAR_10->portbuf, 0,
   sizeof(struct switch_port) * VAR_10->ports);


  if (VAR_8->attrs[VAR_5]) {
   VAR_12 = FUNC_8(VAR_7,
    VAR_8->attrs[VAR_5],
    &VAR_11, VAR_10->ports);
   if (VAR_12 < 0)
    goto error;
  } else {
   VAR_11.len = 0;
   VAR_12 = 0;
  }
  break;
 case 131:
  VAR_11.value.link = &VAR_10->linkbuf;
  FUNC_1(&VAR_10->linkbuf, 0, sizeof(struct switch_port_link));

  if (VAR_8->attrs[VAR_4]) {
   VAR_12 = FUNC_7(VAR_7,
        VAR_8->attrs[VAR_4],
        VAR_11.value.link);
   if (VAR_12 < 0)
    goto error;
  } else {
   VAR_11.len = 0;
   VAR_12 = 0;
  }
  break;
 default:
  goto error;
 }

 VAR_12 = VAR_9->set(VAR_10, VAR_9, &VAR_11);
error:
 FUNC_9(VAR_10);
 return VAR_12;
}
