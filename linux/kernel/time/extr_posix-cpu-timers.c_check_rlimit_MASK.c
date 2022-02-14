
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {int comm; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*,char*,char*,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_3(u64 VAR_3, u64 VAR_4, int VAR_5, bool VAR_6, bool VAR_7)
{
 if (VAR_3 < VAR_4)
  return 0;

 if (VAR_2) {
  FUNC_1("%s Watchdog Timeout (%s): %s[%d]\n",
   VAR_6 ? "RT" : "CPU", VAR_7 ? "hard" : "soft",
   VAR_1->comm, FUNC_2(VAR_1));
 }
 FUNC_0(VAR_5, VAR_0, VAR_1);
 return 1;
}
