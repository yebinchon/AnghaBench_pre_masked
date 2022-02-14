
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dev_info {int dummy; } ;
struct cflayer {int name; int transmit; int receive; } ;
struct TYPE_2__ {struct cflayer layer; int release; } ;
struct cfrfml {int fragment_size; TYPE_1__ serv; int sync; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int,struct dev_info*,int) ;
 struct cfrfml* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,char*,int) ;
 int FUNC_3 (int *) ;

struct cflayer *FUNC_4(u8 VAR_6, struct dev_info *VAR_7,
         int VAR_8)
{
 int VAR_9;
 struct cfrfml *VAR_10 = FUNC_1(sizeof(struct cfrfml), VAR_1);

 if (!VAR_10)
  return ((void*)0);

 FUNC_0(&VAR_10->serv, VAR_6, VAR_7, 0);
 VAR_10->serv.release = VAR_4;
 VAR_10->serv.layer.receive = VAR_3;
 VAR_10->serv.layer.transmit = VAR_5;


 VAR_9 = (VAR_8 - VAR_2 - 6) / 16;
 VAR_9 *= 16;

 VAR_10->fragment_size = VAR_9;
 FUNC_3(&VAR_10->sync);
 FUNC_2(VAR_10->serv.layer.name, VAR_0,
  "rfm%d", VAR_6);

 return &VAR_10->serv.layer;
}
