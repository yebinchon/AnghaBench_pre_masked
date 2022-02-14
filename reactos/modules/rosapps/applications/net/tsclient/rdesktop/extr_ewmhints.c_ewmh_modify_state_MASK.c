
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_8__ {scalar_t__* l; } ;
struct TYPE_9__ {int format; TYPE_1__ data; int message_type; int window; } ;
struct TYPE_10__ {TYPE_2__ xclient; int type; } ;
typedef TYPE_3__ XEvent ;
typedef int Window ;
struct TYPE_11__ {int display; int net_wm_state_atom; } ;
typedef int Status ;
typedef TYPE_4__ RDPCLIENT ;
typedef scalar_t__ Atom ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ,int ,int,int ,unsigned char*,unsigned long) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (int ,int ,int ,int,TYPE_3__*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_4 (TYPE_4__*,int ,char*,int,unsigned long*,unsigned char**,int) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_6(RDPCLIENT * VAR_10, Window VAR_11, int VAR_12, Atom VAR_13, Atom VAR_14)
{
 Status VAR_15;
 XEvent VAR_16;

 int VAR_17;
 unsigned long VAR_18;
 unsigned char *VAR_19;
 uint32 VAR_20 = VAR_6;





 VAR_17 = FUNC_4(VAR_10, VAR_11, "WM_STATE", 64, &VAR_18, &VAR_19, 1);
 if ((VAR_17 >= 0) && VAR_18)
 {
  VAR_20 = *(uint32 *) VAR_19;
  FUNC_2(VAR_19);
 }

 if (VAR_20 == VAR_6)
 {
  if (VAR_12)
  {
   Atom VAR_21[2];

   VAR_21[0] = VAR_13;
   VAR_18 = 1;
   if (VAR_14)
   {
    VAR_21[1] = VAR_14;
    VAR_18 = 2;
   }

   FUNC_1(VAR_10->display, VAR_11, VAR_10->net_wm_state_atom, VAR_7,
     32, VAR_2, (unsigned char *) VAR_21, VAR_18);
  }
  else
  {
   Atom *VAR_22;
   int VAR_23;

   if (FUNC_4(VAR_10, VAR_11, "_NET_WM_STATE", 64, &VAR_18, &VAR_19, 1) < 0)
    return 0;

   VAR_22 = (Atom *) VAR_19;

   for (VAR_23 = 0; VAR_23 < VAR_18; VAR_23++)
   {
    if ((VAR_22[VAR_23] == VAR_13) || (VAR_14 && (VAR_22[VAR_23] == VAR_14)))
    {
     if (VAR_23 != (VAR_18 - 1))
      FUNC_5(&VAR_22[VAR_23], &VAR_22[VAR_23 + 1],
       sizeof(Atom) * (VAR_18 - VAR_23 - 1));
     VAR_18--;
     VAR_23--;
    }
   }

   FUNC_1(VAR_10->display, VAR_11, VAR_10->net_wm_state_atom, VAR_7,
     32, VAR_3, (unsigned char *) VAR_22, VAR_18);

   FUNC_2(VAR_19);
  }

  return 0;
 }

 VAR_16.type = VAR_0;
 VAR_16.xclient.window = VAR_11;
 VAR_16.xclient.message_type = VAR_10->net_wm_state_atom;
 VAR_16.xclient.format = 32;
 if (VAR_12)
  VAR_16.xclient.data.l[0] = VAR_8;
 else
  VAR_16.xclient.data.l[0] = VAR_9;
 VAR_16.xclient.data.l[1] = VAR_13;
 VAR_16.xclient.data.l[2] = VAR_14;
 VAR_16.xclient.data.l[3] = 0;
 VAR_16.xclient.data.l[4] = 0;
 VAR_15 = FUNC_3(VAR_10->display, FUNC_0(VAR_10->display), VAR_1,
       VAR_4 | VAR_5, &VAR_16);
 if (!VAR_15)
  return -1;

 return 0;
}
