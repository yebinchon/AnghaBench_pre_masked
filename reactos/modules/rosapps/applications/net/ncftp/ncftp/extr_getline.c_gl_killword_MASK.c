
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int) ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char*,char*,size_t) ;

__attribute__((used)) static void
FUNC_4(int VAR_5)
{
    int VAR_6 = VAR_3;
    int VAR_7 = VAR_3;
    int VAR_8;
    int VAR_9;

    if (VAR_5 > 0) {
        while (!FUNC_2(VAR_0[VAR_6]) && VAR_6 < VAR_1)
     VAR_6++;
 while (FUNC_2(VAR_0[VAR_6]) && VAR_6 < VAR_1)
     VAR_6++;
    } else {
 if (VAR_6 > 0)
     VAR_6--;
 while (FUNC_2(VAR_0[VAR_6]) && VAR_6 > 0)
     VAR_6--;
        while (!FUNC_2(VAR_0[VAR_6]) && VAR_6 > 0)
     VAR_6--;
 if (VAR_6 < VAR_1 && FUNC_2(VAR_0[VAR_6]))
     VAR_6++;
    }
    if (VAR_6 < VAR_7) {
     VAR_8 = VAR_6;
 VAR_6 = VAR_7;
 VAR_7 = VAR_8;
    }
    FUNC_3(VAR_2, VAR_0 + VAR_7, (size_t) (VAR_6 - VAR_7));
    VAR_2[VAR_6 - VAR_7] = '\0';
    if (FUNC_2(VAR_2[VAR_6 - VAR_7 - 1]))
     VAR_2[VAR_6 - VAR_7 - 1] = '\0';
    FUNC_1(VAR_4, -1, VAR_7);
    for (VAR_9=0, VAR_8=VAR_6 - VAR_7; VAR_9<VAR_8; VAR_9++)
     FUNC_0(0, 0);
}
