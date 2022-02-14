
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int FUNC_5(char *VAR_2) {
    FUNC_2("%s (type 'yes' to accept): ", VAR_2);
    FUNC_0(VAR_1);
    char VAR_3[4];
    int VAR_4 = FUNC_3(FUNC_1(VAR_0),VAR_3,4);
    VAR_3[3] = '\0';
    return (VAR_4 != 0 && !FUNC_4("yes", VAR_3));
}
