
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sta_info {TYPE_1__* mesh; } ;
struct TYPE_2__ {scalar_t__ local_pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sta_info*,int ) ;
 int FUNC_1 (struct sta_info*,int) ;
 int FUNC_2 (struct sta_info*,int ) ;
 int FUNC_3 (struct sta_info*,int ) ;
 scalar_t__ FUNC_4 (struct sta_info*,int ) ;

void FUNC_5(u8 *VAR_6, struct sta_info *VAR_7,
        bool VAR_8, bool VAR_9)
{
 u8 VAR_10 = VAR_6[1] & (VAR_1 >> 8);
 u8 VAR_11 = VAR_6[0] & VAR_0;

 if (VAR_8) {
  if (VAR_10 && VAR_9)
   FUNC_2(VAR_7, VAR_4);

  if (VAR_11)
   FUNC_0(VAR_7, VAR_3);
  else if (VAR_9 &&
    FUNC_4(VAR_7, VAR_5) &&
    !FUNC_3(VAR_7, VAR_3))
   FUNC_1(VAR_7, -1);
 } else {
  if (VAR_11)
   FUNC_0(VAR_7, VAR_4);
  else if (VAR_7->mesh->local_pm != VAR_2)
   FUNC_2(VAR_7, VAR_4);

  if (VAR_10 && !FUNC_3(VAR_7, VAR_3))
   FUNC_1(VAR_7, -1);
 }
}
