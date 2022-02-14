
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int atomlist ;
struct TYPE_4__ {scalar_t__ property; int time; scalar_t__ target; scalar_t__ selection; int requestor; int display; int send_event; int type; } ;
struct TYPE_5__ {TYPE_1__ xselection; } ;
typedef TYPE_2__ XEvent ;
typedef int Window ;
typedef int Time ;
typedef scalar_t__ Atom ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,int ,scalar_t__,scalar_t__,int,int ,unsigned char*,int) ;
 int FUNC_1 (int ,int ,int ,int ,TYPE_2__*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_3(Window VAR_13, Atom VAR_14, Atom VAR_15, Atom VAR_16, Time VAR_17)
{
 XEvent VAR_18;

 VAR_9 = 0;

 if (VAR_16 == VAR_1)
  VAR_16 = VAR_15;

 VAR_18.xselection.type = VAR_3;
 VAR_18.xselection.send_event = VAR_4;
 VAR_18.xselection.display = VAR_12;
 VAR_18.xselection.requestor = VAR_13;
 VAR_18.xselection.selection = VAR_14;
 VAR_18.xselection.target = VAR_15;
 VAR_18.xselection.property = VAR_16;
 VAR_18.xselection.time = VAR_17;

 if (VAR_15 == VAR_6)
 {
  Atom VAR_19[4];
  VAR_19[0] = VAR_6;
  VAR_19[1] = VAR_7;
  VAR_19[2] = VAR_5;
  VAR_19[3] = VAR_8;
  FUNC_0(VAR_12, VAR_13, VAR_16, VAR_15,
   32, VAR_2,
   (unsigned char *)VAR_19, sizeof(VAR_19)/sizeof(Atom));
 }

 else if (VAR_15 == VAR_5)
 {
  FUNC_0(VAR_12, VAR_13, VAR_16, VAR_15,
   8, VAR_2,
   (unsigned char *)VAR_10, FUNC_2(VAR_10));
 }

 else if (VAR_15 == VAR_8)
 {
  FUNC_0(VAR_12, VAR_13, VAR_16, VAR_15,
   8, VAR_2,
   (unsigned char *)VAR_11, FUNC_2(VAR_11));
 }

 else
 {
  VAR_18.xselection.property = VAR_1;
 }

 FUNC_1(VAR_12, VAR_13, VAR_0, 0, &VAR_18);
}
