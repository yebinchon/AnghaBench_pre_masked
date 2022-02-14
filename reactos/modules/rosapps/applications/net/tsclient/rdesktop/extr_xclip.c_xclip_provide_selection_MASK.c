
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint32 ;
struct TYPE_9__ {scalar_t__ requestor; int time; int property; int target; int selection; } ;
typedef TYPE_2__ XSelectionRequestEvent ;
struct TYPE_8__ {int time; int property; int target; int selection; scalar_t__ requestor; int send_event; scalar_t__ serial; int type; } ;
struct TYPE_10__ {TYPE_1__ xselection; } ;
typedef TYPE_3__ XEvent ;
struct TYPE_11__ {int display; } ;
typedef TYPE_4__ RDPCLIENT ;
typedef int Atom ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,scalar_t__,int ,int ,unsigned int,int ,int *,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,scalar_t__,int ,int ,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_4(RDPCLIENT * VAR_5, XSelectionRequestEvent * VAR_6, Atom VAR_7, unsigned int VAR_8, uint8 * VAR_9,
   uint32 VAR_10)
{
 XEvent VAR_11;

 FUNC_0(("xclip_provide_selection: requestor=0x%08x, target=%s, property=%s, length=%u\n", (unsigned) VAR_6->requestor, FUNC_2(VAR_5->display, VAR_6->target), FUNC_2(VAR_5->display, VAR_6->property), (unsigned) VAR_10));

 FUNC_1(VAR_5->display, VAR_6->requestor, VAR_6->property,
   VAR_7, VAR_8, VAR_2, VAR_9, VAR_10);

 VAR_11.xselection.type = VAR_3;
 VAR_11.xselection.serial = 0;
 VAR_11.xselection.send_event = VAR_4;
 VAR_11.xselection.requestor = VAR_6->requestor;
 VAR_11.xselection.selection = VAR_6->selection;
 VAR_11.xselection.target = VAR_6->target;
 VAR_11.xselection.property = VAR_6->property;
 VAR_11.xselection.time = VAR_6->time;
 FUNC_3(VAR_5->display, VAR_6->requestor, VAR_0, VAR_1, &VAR_11);
}
