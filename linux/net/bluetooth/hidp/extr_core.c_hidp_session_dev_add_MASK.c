
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hidp_session {scalar_t__ input; TYPE_1__* hid; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct hidp_session *VAR_0)
{
 int VAR_1;






 if (VAR_0->hid) {
  VAR_1 = FUNC_1(VAR_0->hid);
  if (VAR_1)
   return VAR_1;
  FUNC_0(&VAR_0->hid->dev);
 } else if (VAR_0->input) {
  VAR_1 = FUNC_3(VAR_0->input);
  if (VAR_1)
   return VAR_1;
  FUNC_2(VAR_0->input);
 }

 return 0;
}
