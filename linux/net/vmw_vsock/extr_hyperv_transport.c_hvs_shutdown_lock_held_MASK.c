
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmpipe_proto_header {int dummy; } ;
struct hvsock {int fin_sent; int chan; } ;
struct hvs_send_buf {int dummy; } ;


 int FUNC_0 (int ,struct hvs_send_buf*,int ) ;

__attribute__((used)) static void FUNC_1(struct hvsock *VAR_0, int VAR_1)
{
 struct vmpipe_proto_header VAR_2;

 if (VAR_0->fin_sent || !VAR_0->chan)
  return;


 (void)FUNC_0(VAR_0->chan, (struct hvs_send_buf *)&VAR_2, 0);
 VAR_0->fin_sent = 1;
}
