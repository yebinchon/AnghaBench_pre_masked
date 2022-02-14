
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mixart_pipe {int status; int group_uid; } ;
struct mixart_msg {int size; struct mixart_clock_properties* data; int uid; int message_id; } ;
struct mixart_mgr {TYPE_1__* pci; int uid_console_manager; } ;
struct mixart_clock_properties_resp {scalar_t__ status; scalar_t__ clock_mode; } ;
struct mixart_clock_properties {unsigned int frequency; int nb_callers; int * uid_caller; scalar_t__ clock_mode; int clock_generic_type; } ;
typedef int clock_properties ;
typedef int clock_prop_resp ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (int *,char*,unsigned int) ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (struct mixart_clock_properties*,int ,int) ;
 int FUNC_3 (struct mixart_mgr*,struct mixart_msg*,int,struct mixart_clock_properties_resp*) ;

__attribute__((used)) static int FUNC_4(struct mixart_mgr *VAR_5,
       struct mixart_pipe *VAR_6, unsigned int VAR_7)
{
 struct mixart_msg VAR_8;
 struct mixart_clock_properties VAR_9;
 struct mixart_clock_properties_resp VAR_10;
 int VAR_11;

 switch(VAR_6->status) {
 case 129:
  break;
 case 128:
  if(VAR_7 != 0)
   break;

 default:
  if(VAR_7 == 0)
   return 0;
  else {
   FUNC_1(&VAR_5->pci->dev,
    "error mixart_set_clock(%d) called with wrong pipe->status !\n",
    VAR_7);
   return -VAR_3;
  }
 }

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.clock_generic_type = (VAR_7 != 0) ? VAR_0 : VAR_1;
 VAR_9.clock_mode = VAR_2;
 VAR_9.frequency = VAR_7;
 VAR_9.nb_callers = 1;
 VAR_9.uid_caller[0] = VAR_6->group_uid;

 FUNC_0(&VAR_5->pci->dev, "mixart_set_clock to %d kHz\n", VAR_7);

 VAR_8.message_id = VAR_4;
 VAR_8.uid = VAR_5->uid_console_manager;
 VAR_8.data = &VAR_9;
 VAR_8.size = sizeof(VAR_9);

 VAR_11 = FUNC_3(VAR_5, &VAR_8, sizeof(VAR_10), &VAR_10);
 if (VAR_11 < 0 || VAR_10.status != 0 || VAR_10.clock_mode != VAR_2) {
  FUNC_1(&VAR_5->pci->dev,
   "error MSG_CLOCK_SET_PROPERTIES err=%x stat=%x mod=%x !\n",
   VAR_11, VAR_10.status, VAR_10.clock_mode);
  return -VAR_3;
 }

 if(VAR_7) VAR_6->status = 129;
 else VAR_6->status = 128;

 return 0;
}
