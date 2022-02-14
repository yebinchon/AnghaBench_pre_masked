
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ fpos_t ;
struct TYPE_10__ {scalar_t__ _cnt; int _flag; scalar_t__ _ptr; scalar_t__ _base; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,char*) ;
 char* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,int,int,TYPE_1__*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (char*,int,int,TYPE_1__*) ;
 int FUNC_9 (int,int,int ) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;
 int FUNC_11 (int,char*,...) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_13(FILE *VAR_3, int VAR_4)
{
    char *VAR_5;
    char *VAR_6;
    int VAR_7, VAR_8;
    fpos_t VAR_9, VAR_10;

    VAR_8 = FUNC_4(VAR_3);
    VAR_5 = FUNC_1(1, VAR_4 + 1);
    VAR_6 = FUNC_1(1, VAR_4 + 1);
    FUNC_0(VAR_6, VAR_4 + 1, "0,1,2,3,4,5,6,7,8,9");

    for (VAR_7 = VAR_4 + 1; VAR_7 >= VAR_4 - 1; VAR_7--) {
        FUNC_12(VAR_3);
        FUNC_11(VAR_3->_cnt == 0, "_cnt should be 0 after rewind, but is %d\n", VAR_3->_cnt);
        FUNC_8(VAR_6, 1, VAR_7, VAR_3);



        FUNC_9(VAR_8, 1, VAR_1);
        FUNC_2(VAR_3);
        FUNC_11(VAR_3->_cnt == 0, "_cnt should be 0 after fflush, but is %d\n", VAR_3->_cnt);
        FUNC_7(VAR_3, 0, VAR_1);
        FUNC_11(FUNC_5(VAR_5, 1, VAR_4, VAR_3) == VAR_4, "read failed\n");
        if (VAR_7 == VAR_4)
            FUNC_11(FUNC_10(VAR_6, VAR_5, VAR_4) == 0, "missing flush by %d byte write\n", VAR_7);
        else
            FUNC_11(FUNC_10(VAR_6, VAR_5, VAR_4) != 0, "unexpected flush by %d byte write\n", VAR_7);
    }
    FUNC_12(VAR_3);
    FUNC_8(VAR_6, 1, VAR_4 / 2, VAR_3);
    FUNC_8(VAR_6 + VAR_4 / 2, 1, VAR_4 / 2, VAR_3);
    FUNC_9(VAR_8, 1, VAR_1);
    FUNC_2(VAR_3);
    FUNC_7(VAR_3, 0, VAR_1);
    FUNC_11(FUNC_5(VAR_5, 1, VAR_4, VAR_3) == VAR_4, "read failed\n");
    FUNC_11(FUNC_10(VAR_6, VAR_5, VAR_4) != 0, "unexpected flush by %d/2 byte double write\n", VAR_4);

    FUNC_11(!FUNC_7(VAR_3, -1, VAR_0), "fseek failed\n");
    FUNC_11(!FUNC_3(VAR_3, &VAR_9), "fgetpos failed\n");
    FUNC_11(FUNC_5(VAR_5, 1, 1, VAR_3) == 1, "fread failed\n");
    FUNC_11(VAR_3->_flag & VAR_2, "file->_flag = %x\n", VAR_3->_flag);
    FUNC_11(!VAR_3->_cnt, "file->_cnt = %d\n", VAR_3->_cnt);
    FUNC_11(VAR_3->_ptr != VAR_3->_base, "file->_ptr == file->_base\n");
    FUNC_11(FUNC_8(VAR_6, 1, VAR_4, VAR_3), "fwrite failed\n");
    FUNC_11(VAR_3->_flag & VAR_2, "file->_flag = %x\n", VAR_3->_flag);
    FUNC_11(!VAR_3->_cnt, "file->_cnt = %d\n", VAR_3->_cnt);
    FUNC_11(VAR_3->_ptr == VAR_3->_base, "file->_ptr == file->_base\n");
    FUNC_11(!FUNC_3(VAR_3, &VAR_10), "fgetpos failed\n");
    FUNC_11(VAR_9+VAR_4+1 == VAR_10, "pos = %d (%d)\n", (int)VAR_9, (int)VAR_10);
    FUNC_6(VAR_5);
    FUNC_6(VAR_6);
}
