
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Window ;
struct TYPE_3__ {int display; } ;
typedef TYPE_1__ RDPCLIENT ;
typedef scalar_t__ Atom ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,scalar_t__,int ,long,int ,int ,scalar_t__*,int*,unsigned long*,unsigned long*,unsigned char**) ;
 scalar_t__ FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_3(RDPCLIENT * VAR_6, Window VAR_7, char *VAR_8, long VAR_9,
     unsigned long *VAR_10, unsigned char **VAR_11, int VAR_12)
{
 int VAR_13;
 Atom VAR_14;
 Atom VAR_15;
 int VAR_16;
 unsigned long VAR_17;

 VAR_14 = FUNC_1(VAR_6->display, VAR_8, VAR_4);
 if (VAR_14 == VAR_2)
 {
  FUNC_2(VAR_5, "Atom %s does not exist\n", VAR_8);
  return (-1);
 }

 VAR_13 = FUNC_0(VAR_6->display, VAR_7, VAR_14, 0,
        VAR_9,
        VAR_1,
        VAR_0,
        &VAR_15,
        &VAR_16,
        VAR_10, &VAR_17, VAR_11);

 if (VAR_13 != VAR_3)
 {
  FUNC_2(VAR_5, "XGetWindowProperty failed\n");
  return (-1);
 }

 if (VAR_15 == VAR_2 || VAR_16 == 0)
 {
  if (!VAR_12)
   FUNC_2(VAR_5, "Window is missing property %s\n", VAR_8);
  return (-1);
 }

 if (VAR_17)
 {
  FUNC_2(VAR_5, "%s is too big for me\n", VAR_8);
  return (-1);
 }

 if (VAR_16 != 32)
 {
  FUNC_2(VAR_5, "%s has bad format\n", VAR_8);
  return (-1);
 }

 return (0);
}
