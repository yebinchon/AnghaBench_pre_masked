
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ opcode; int status; } ;
struct q6copp {TYPE_2__ result; int wait; } ;
struct q6adm {int lock; int apr; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_3__ {scalar_t__ opcode; } ;
struct apr_pkt {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct apr_pkt*) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct q6adm *VAR_3, struct q6copp *VAR_4,
       struct apr_pkt *VAR_5, uint32_t VAR_6)
{
 struct device *VAR_7 = VAR_3->dev;
 uint32_t VAR_8 = VAR_5->hdr.opcode;
 int VAR_9;

 FUNC_3(&VAR_3->lock);
 VAR_4->result.opcode = 0;
 VAR_4->result.status = 0;
 VAR_9 = FUNC_0(VAR_3->apr, VAR_5);
 if (VAR_9 < 0) {
  FUNC_1(VAR_7, "Failed to send APR packet\n");
  VAR_9 = -VAR_0;
  goto err;
 }


 if (VAR_6)
  VAR_9 = FUNC_5(VAR_4->wait,
      (VAR_4->result.opcode == VAR_8) ||
      (VAR_4->result.opcode == VAR_6),
      FUNC_2(VAR_2));
 else
  VAR_9 = FUNC_5(VAR_4->wait,
      (VAR_4->result.opcode == VAR_8),
      FUNC_2(VAR_2));

 if (!VAR_9) {
  FUNC_1(VAR_7, "ADM copp cmd timedout\n");
  VAR_9 = -VAR_1;
 } else if (VAR_4->result.status > 0) {
  FUNC_1(VAR_7, "DSP returned error[%d]\n",
   VAR_4->result.status);
  VAR_9 = -VAR_0;
 }

err:
 FUNC_4(&VAR_3->lock);
 return VAR_9;
}
