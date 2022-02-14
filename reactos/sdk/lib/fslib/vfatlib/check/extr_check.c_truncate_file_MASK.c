
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int DOS_FS ;
typedef int DOS_FILE ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static void FUNC_4(DOS_FS * VAR_0, DOS_FILE * VAR_1, uint32_t VAR_2)
{
    int VAR_3;
    uint32_t VAR_4, VAR_5;

    VAR_4 = FUNC_0(VAR_1, VAR_0);
    if ((VAR_3 = !VAR_2))
 FUNC_1(VAR_1, 0, VAR_0);
    while (VAR_4 > 0 && VAR_4 != -1) {
 VAR_5 = FUNC_2(VAR_0, VAR_4);
 if (VAR_3)
     FUNC_3(VAR_0, VAR_4, 0);
 else if ((VAR_3 = !--VAR_2))
     FUNC_3(VAR_0, VAR_4, -1);
 VAR_4 = VAR_5;
    }
}
