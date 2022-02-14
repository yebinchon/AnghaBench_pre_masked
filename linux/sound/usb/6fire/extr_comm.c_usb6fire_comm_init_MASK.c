
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int transfer_buffer_length; int interval; struct comm_runtime* context; int complete; TYPE_1__* dev; int pipe; struct comm_runtime* transfer_buffer; } ;
struct sfire_chip {struct comm_runtime* comm; TYPE_1__* dev; } ;
struct comm_runtime {int serial; struct comm_runtime* receiver_buffer; int write16; int write8; int init_urb; struct sfire_chip* chip; struct urb receiver; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct comm_runtime*) ;
 void* FUNC_2 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct urb*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (struct urb*,int ) ;

int FUNC_6(struct sfire_chip *VAR_8)
{
 struct comm_runtime *VAR_9 = FUNC_2(sizeof(struct comm_runtime),
   VAR_3);
 struct urb *VAR_10;
 int VAR_11;

 if (!VAR_9)
  return -VAR_2;

 VAR_9->receiver_buffer = FUNC_2(VAR_1, VAR_3);
 if (!VAR_9->receiver_buffer) {
  FUNC_1(VAR_9);
  return -VAR_2;
 }

 VAR_10 = &VAR_9->receiver;
 VAR_9->serial = 1;
 VAR_9->chip = VAR_8;
 FUNC_3(VAR_10);
 VAR_9->init_urb = VAR_4;
 VAR_9->write8 = VAR_7;
 VAR_9->write16 = VAR_6;


 VAR_10->transfer_buffer = VAR_9->receiver_buffer;
 VAR_10->transfer_buffer_length = VAR_1;
 VAR_10->pipe = FUNC_4(VAR_8->dev, VAR_0);
 VAR_10->dev = VAR_8->dev;
 VAR_10->complete = VAR_5;
 VAR_10->context = VAR_9;
 VAR_10->interval = 1;
 VAR_11 = FUNC_5(VAR_10, VAR_3);
 if (VAR_11 < 0) {
  FUNC_1(VAR_9->receiver_buffer);
  FUNC_1(VAR_9);
  FUNC_0(&VAR_8->dev->dev, "cannot create comm data receiver.");
  return VAR_11;
 }
 VAR_8->comm = VAR_9;
 return 0;
}
