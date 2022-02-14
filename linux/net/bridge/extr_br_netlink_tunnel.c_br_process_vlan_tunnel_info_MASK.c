
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtunnel_info {int flags; scalar_t__ vid; scalar_t__ tunid; } ;
struct net_bridge_port {int dummy; } ;
struct net_bridge {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_bridge_port*,int,int,int,int*) ;
 int FUNC_1 (struct vtunnel_info*,struct vtunnel_info*,int) ;
 int FUNC_2 (struct vtunnel_info*,int ,int) ;

int FUNC_3(struct net_bridge *VAR_3,
    struct net_bridge_port *VAR_4, int VAR_5,
    struct vtunnel_info *VAR_6,
    struct vtunnel_info *VAR_7,
    bool *VAR_8)
{
 int VAR_9;

 if (VAR_6->flags & VAR_0) {
  if (VAR_7->flags & VAR_0)
   return -VAR_2;
  FUNC_1(VAR_7, VAR_6, sizeof(struct vtunnel_info));
 } else if (VAR_6->flags & VAR_1) {
  int VAR_10, VAR_11;

  if (!(VAR_7->flags & VAR_0))
   return -VAR_2;
  if ((VAR_6->vid - VAR_7->vid) !=
      (VAR_6->tunid - VAR_7->tunid))
   return -VAR_2;
  VAR_10 = VAR_7->tunid;
  for (VAR_11 = VAR_7->vid; VAR_11 <= VAR_6->vid; VAR_11++) {
   VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_11, VAR_10, VAR_8);
   if (VAR_9)
    return VAR_9;
   VAR_10++;
  }
  FUNC_2(VAR_7, 0, sizeof(struct vtunnel_info));
  FUNC_2(VAR_6, 0, sizeof(struct vtunnel_info));
 } else {
  if (VAR_7->flags)
   return -VAR_2;
  VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6->vid,
       VAR_6->tunid, VAR_8);
  if (VAR_9)
   return VAR_9;
  FUNC_2(VAR_7, 0, sizeof(struct vtunnel_info));
  FUNC_2(VAR_6, 0, sizeof(struct vtunnel_info));
 }

 return 0;
}
