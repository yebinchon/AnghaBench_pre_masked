
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* Part; } ;
struct TYPE_5__ {int EditHwnd; } ;
typedef TYPE_1__ IPPART_INFO ;
typedef TYPE_2__ IPADDRESS_INFO ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__ const*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int VAR_5 ;

__attribute__((used)) static BOOL FUNC_5 (const IPADDRESS_INFO *VAR_6, int VAR_7, int VAR_8)
{
    FUNC_4("\n");

    if(VAR_7 >= -1 && VAR_7 < 4) {
 FUNC_1(VAR_6, VAR_7);

 if(VAR_7 < 3) {
     const IPPART_INFO *VAR_9 = &VAR_6->Part[VAR_7 + 1];
     int VAR_10 = 0, VAR_11 = 0;
            FUNC_3 (VAR_9->EditHwnd);
     if (VAR_8 != VAR_2) {
  if (VAR_8 == VAR_3)
      VAR_10 = VAR_11 = FUNC_0(VAR_9->EditHwnd);
  else if (VAR_8 == VAR_4)
      VAR_11 = -1;
         FUNC_2(VAR_9->EditHwnd, VAR_0, VAR_10, VAR_11);
     }
     return VAR_5;
 }

    }
    return VAR_1;
}
