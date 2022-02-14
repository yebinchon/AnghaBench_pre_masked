
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wait_queue_head_t ;
struct TYPE_2__ {scalar_t__ opcode; int status; } ;
struct q6afe_port {TYPE_1__ result; int wait; } ;
struct q6afe {int lock; int dev; int apr; } ;
struct apr_hdr {scalar_t__ opcode; } ;
struct apr_pkt {struct apr_hdr hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct apr_pkt*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct q6afe *VAR_3, struct apr_pkt *VAR_4,
       struct q6afe_port *VAR_5)
{
 wait_queue_head_t *VAR_6 = &VAR_5->wait;
 struct apr_hdr *VAR_7 = &VAR_4->hdr;
 int VAR_8;

 FUNC_3(&VAR_3->lock);
 VAR_5->result.opcode = 0;
 VAR_5->result.status = 0;

 VAR_8 = FUNC_0(VAR_3->apr, VAR_4);
 if (VAR_8 < 0) {
  FUNC_1(VAR_3->dev, "packet not transmitted (%d)\n", VAR_8);
  VAR_8 = -VAR_0;
  goto err;
 }

 VAR_8 = FUNC_5(*VAR_6, (VAR_5->result.opcode == VAR_7->opcode),
     FUNC_2(VAR_2));
 if (!VAR_8) {
  VAR_8 = -VAR_1;
 } else if (VAR_5->result.status > 0) {
  FUNC_1(VAR_3->dev, "DSP returned error[%x]\n",
   VAR_5->result.status);
  VAR_8 = -VAR_0;
 } else {
  VAR_8 = 0;
 }

err:
 FUNC_4(&VAR_3->lock);

 return VAR_8;
}
