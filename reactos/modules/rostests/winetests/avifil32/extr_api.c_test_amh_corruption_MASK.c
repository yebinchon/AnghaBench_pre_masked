
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * fh; } ;
typedef int PAVIFILE ;
typedef TYPE_1__ COMMON_AVI_HEADERS ;


 int FUNC_0 (int *,char*,int ,long) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char,char,char,char) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_9(void)
{
    COMMON_AVI_HEADERS VAR_3;
    char VAR_4[VAR_0];
    PAVIFILE VAR_5;
    int VAR_6;

    FUNC_2(VAR_0, VAR_4);
    FUNC_7(VAR_4+FUNC_8(VAR_4), VAR_2);


    FUNC_4(&VAR_3);
    VAR_3.fh[3] = FUNC_5('A', 'V', 'i', ' ');

    FUNC_3(&VAR_3, VAR_4);
    VAR_6 = FUNC_0(&VAR_5, VAR_4, VAR_1, 0L);
    FUNC_6(VAR_6 != 0, "Able to open file: error=%u\n", VAR_6);

    FUNC_6(FUNC_1(VAR_4) !=0, "Deleting file %s failed\n", VAR_4);
}
