
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,char*,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int,char*) ;
 scalar_t__ FUNC_7 (int,char*,int ,char*,int ) ;
 int FUNC_8 (char*) ;

int FUNC_9(int VAR_5, char *VAR_6[])
{
 int VAR_7, VAR_8;


 VAR_7 = FUNC_5("afs", 0);
 if (VAR_7 == -1) {
  FUNC_8("fsopen");
  FUNC_3(1);
 }

 FUNC_1(VAR_7, VAR_2, "source", "#grand.central.org:root.cell.", 0);
 FUNC_1(VAR_7, VAR_1, ((void*)0), ((void*)0), 0);

 VAR_8 = FUNC_4(VAR_7, 0, VAR_3);
 if (VAR_8 < 0)
  FUNC_6(VAR_7, "fsmount");
 FUNC_0(FUNC_2(VAR_7));

 if (FUNC_7(VAR_8, "", VAR_0, "/mnt", VAR_4) < 0) {
  FUNC_8("move_mount");
  FUNC_3(1);
 }

 FUNC_0(FUNC_2(VAR_8));
 FUNC_3(0);
}
