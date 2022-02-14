
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int,int) ;
 scalar_t__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_4(void)

{
    int VAR_8, VAR_9;

    VAR_9 = (int) FUNC_3(VAR_4);
    if (VAR_9 > 0) {
 if (VAR_5 == 0) {
            if (VAR_2 + VAR_9 >= VAR_0 - 1)
         FUNC_1("\n*** Error: getline(): input buffer overflow\n");
            for (VAR_8=VAR_2; VAR_8 >= VAR_6; VAR_8--)
                VAR_1[VAR_8+VAR_9] = VAR_1[VAR_8];
     for (VAR_8=0; VAR_8 < VAR_9; VAR_8++)
                VAR_1[VAR_6+VAR_8] = VAR_4[VAR_8];
            FUNC_2(VAR_7, VAR_6, VAR_6+VAR_9);
 } else {
     if (VAR_6 + VAR_9 > VAR_2) {
                if (VAR_6 + VAR_9 >= VAR_0 - 1)
             FUNC_1("\n*** Error: getline(): input buffer overflow\n");
  VAR_1[VAR_6 + VAR_9] = 0;
            }
     for (VAR_8=0; VAR_8 < VAR_9; VAR_8++)
                VAR_1[VAR_6+VAR_8] = VAR_4[VAR_8];
     VAR_3 = VAR_9;
            FUNC_2(VAR_7, VAR_6, VAR_6+VAR_9);
 }
    } else
 FUNC_0();
}
