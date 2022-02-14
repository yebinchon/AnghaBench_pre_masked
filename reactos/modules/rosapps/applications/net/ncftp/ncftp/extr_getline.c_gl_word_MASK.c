
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(int VAR_4)


{
    int VAR_5 = VAR_2;

    if (VAR_4 > 0) {
        while (!FUNC_1(VAR_0[VAR_5]) && VAR_5 < VAR_1)
     VAR_5++;
 while (FUNC_1(VAR_0[VAR_5]) && VAR_5 < VAR_1)
     VAR_5++;
    } else {
 if (VAR_5 > 0)
     VAR_5--;
 while (FUNC_1(VAR_0[VAR_5]) && VAR_5 > 0)
     VAR_5--;
        while (!FUNC_1(VAR_0[VAR_5]) && VAR_5 > 0)
     VAR_5--;
 if (VAR_5 < VAR_1 && FUNC_1(VAR_0[VAR_5]))
     VAR_5++;
    }
    FUNC_0(VAR_3, -1, VAR_5);
}
