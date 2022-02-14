
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BUFFER ;


 int FUNC_0 (int *,char*,char*,char*,char*) ;

int FUNC_1(BUFFER *VAR_0, char* VAR_1, char* VAR_2, int VAR_3) {
    if (VAR_2) {
        FUNC_0(VAR_0, "%s\n\t\t\t\"%s\": \"%s\"", (VAR_3)?",":"", VAR_1, VAR_2);
        return 1;
    } else {
        return VAR_3;
    }
}
