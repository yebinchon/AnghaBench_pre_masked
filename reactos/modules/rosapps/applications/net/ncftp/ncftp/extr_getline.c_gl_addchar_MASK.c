
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (int ,int,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_2(int VAR_7)


{
    int VAR_8;

    if (VAR_2 >= VAR_0 - 1)
 FUNC_0("\n*** Error: getline(): input buffer overflow\n");
    if (VAR_4 == 0 || VAR_5 == VAR_2) {
        for (VAR_8=VAR_2; VAR_8 >= VAR_5; VAR_8--)
            VAR_1[VAR_8+1] = VAR_1[VAR_8];
        VAR_1[VAR_5] = (char) VAR_7;
        FUNC_1(VAR_6, VAR_5, VAR_5+1);
    } else {
 VAR_1[VAR_5] = (char) VAR_7;
 VAR_3 = 1;
        FUNC_1(VAR_6, VAR_5, VAR_5+1);
    }
}
