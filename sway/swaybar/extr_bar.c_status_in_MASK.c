
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swaybar {int status; int eventloop; } ;


 short VAR_0 ;
 short VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct swaybar*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;

void FUNC_4(int VAR_2, short VAR_3, void *VAR_4) {
 struct swaybar *VAR_5 = VAR_4;
 if (VAR_3 & (VAR_1 | VAR_0)) {
  FUNC_2(VAR_5->status, "[error reading from status command]");
  FUNC_1(VAR_5);
  FUNC_0(VAR_5->eventloop, VAR_2);
 } else if (FUNC_3(VAR_5->status)) {
  FUNC_1(VAR_5);
 }
}
