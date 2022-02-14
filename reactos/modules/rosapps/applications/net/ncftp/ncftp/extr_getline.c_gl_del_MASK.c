
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int) ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_2(int VAR_6, int VAR_7)






{
    int VAR_8, VAR_9;

    if ((VAR_6 == -1 && VAR_3 > 0) || (VAR_6 == 0 && VAR_3 < VAR_1)) {
        for (VAR_9=0, VAR_8=VAR_3+VAR_6; VAR_8 < VAR_1; VAR_8++) {
     if ((VAR_9 == 0) && (VAR_7 != 0) && (VAR_5 != 0)) {
      VAR_2[0] = VAR_0[VAR_8];
      VAR_2[1] = '\0';
  VAR_9 = 1;
     }
     VAR_0[VAR_8] = VAR_0[VAR_8+1];
 }
 FUNC_1(VAR_4, VAR_3+VAR_6, VAR_3+VAR_6);
    } else
 FUNC_0();
}
