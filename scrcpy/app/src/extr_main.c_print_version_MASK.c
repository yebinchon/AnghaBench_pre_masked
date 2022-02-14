
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_1(void) {
    FUNC_0(VAR_13, "scrcpy %s\n\n", VAR_9);

    FUNC_0(VAR_13, "dependencies:\n");
    FUNC_0(VAR_13, " - SDL %d.%d.%d\n", VAR_10, VAR_11,
                                         VAR_12);
    FUNC_0(VAR_13, " - libavcodec %d.%d.%d\n", VAR_0,
                                                VAR_2,
                                                VAR_1);
    FUNC_0(VAR_13, " - libavformat %d.%d.%d\n", VAR_3,
                                                 VAR_5,
                                                 VAR_4);
    FUNC_0(VAR_13, " - libavutil %d.%d.%d\n", VAR_6,
                                               VAR_8,
                                               VAR_7);
}
