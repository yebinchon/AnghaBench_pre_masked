
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
union pstun {char* pst_command; } ;
struct TYPE_2__ {int ps_nargvstr; char* ps_argvstr; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ,int) ;
 int * FUNC_4 (char*) ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,union pstun,int,int ,int ) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char const*,int) ;

int FUNC_9(const char* VAR_8)
{
    int VAR_9 = FUNC_2();
    if (VAR_9 != VAR_3)
        return VAR_9;

    FUNC_8(VAR_5, VAR_8, VAR_7);
    VAR_5[VAR_7 - 1] = '\0';
    VAR_6 = FUNC_7(VAR_5);
    return VAR_3;
}
