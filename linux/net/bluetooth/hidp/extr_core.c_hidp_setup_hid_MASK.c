
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct hidp_session {struct hid_device* rd_data; struct hid_device* hid; TYPE_5__* conn; TYPE_2__* ctrl_sock; int rd_size; } ;
struct hidp_connadd_req {int name; int country; int version; int product; int vendor; int rd_size; int rd_data; } ;
struct TYPE_9__ {int * parent; } ;
struct hid_device {int * ll_driver; TYPE_3__ dev; int uniq; int phys; int name; int country; int version; int product; int vendor; int bus; struct hidp_session* driver_data; } ;
struct TYPE_12__ {TYPE_1__* chan; } ;
struct TYPE_11__ {TYPE_4__* hcon; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_8__ {int sk; } ;
struct TYPE_7__ {int dst; int src; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*) ;
 struct hid_device* FUNC_2 () ;
 int FUNC_3 (struct hid_device*) ;
 scalar_t__ FUNC_4 (struct hid_device*) ;
 int VAR_2 ;
 int FUNC_5 (struct hid_device*) ;
 TYPE_6__* FUNC_6 (int ) ;
 struct hid_device* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int,char*,int *) ;
 int FUNC_9 (int ,int ,int) ;

__attribute__((used)) static int FUNC_10(struct hidp_session *VAR_3,
    const struct hidp_connadd_req *VAR_4)
{
 struct hid_device *VAR_5;
 int VAR_6;

 VAR_3->rd_data = FUNC_7(VAR_4->rd_data, VAR_4->rd_size);
 if (FUNC_0(VAR_3->rd_data))
  return FUNC_1(VAR_3->rd_data);

 VAR_3->rd_size = VAR_4->rd_size;

 VAR_5 = FUNC_2();
 if (FUNC_0(VAR_5)) {
  VAR_6 = FUNC_1(VAR_5);
  goto fault;
 }

 VAR_3->hid = VAR_5;

 VAR_5->driver_data = VAR_3;

 VAR_5->bus = VAR_0;
 VAR_5->vendor = VAR_4->vendor;
 VAR_5->product = VAR_4->product;
 VAR_5->version = VAR_4->version;
 VAR_5->country = VAR_4->country;

 FUNC_9(VAR_5->name, VAR_4->name, sizeof(VAR_5->name));

 FUNC_8(VAR_5->phys, sizeof(VAR_5->phys), "%pMR",
   &FUNC_6(VAR_3->ctrl_sock->sk)->chan->src);




 FUNC_8(VAR_5->uniq, sizeof(VAR_5->uniq), "%pMR",
   &FUNC_6(VAR_3->ctrl_sock->sk)->chan->dst);

 VAR_5->dev.parent = &VAR_3->conn->hcon->dev;
 VAR_5->ll_driver = &VAR_2;


 if (FUNC_4(VAR_5)) {
  FUNC_3(VAR_3->hid);
  VAR_3->hid = ((void*)0);
  return -VAR_1;
 }

 return 0;

fault:
 FUNC_5(VAR_3->rd_data);
 VAR_3->rd_data = ((void*)0);

 return VAR_6;
}
