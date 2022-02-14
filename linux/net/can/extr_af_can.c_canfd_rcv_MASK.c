
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct packet_type {int dummy; } ;
struct net_device {scalar_t__ type; } ;
struct canfd_frame {scalar_t__ len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_5, struct net_device *VAR_6,
       struct packet_type *VAR_7, struct net_device *VAR_8)
{
 struct canfd_frame *VAR_9 = (struct canfd_frame *)VAR_5->data;

 if (FUNC_3(VAR_6->type != VAR_0 || VAR_5->len != VAR_2 ||
       VAR_9->len > VAR_1)) {
  FUNC_2("PF_CAN: dropped non conform CAN FD skbuf: dev type %d, len %d, datalen %d\n",
        VAR_6->type, VAR_5->len, VAR_9->len);
  FUNC_1(VAR_5);
  return VAR_3;
 }

 FUNC_0(VAR_5, VAR_6);
 return VAR_4;
}
