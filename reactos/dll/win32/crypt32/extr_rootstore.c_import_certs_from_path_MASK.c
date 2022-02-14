
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int LPCSTR ;
typedef int HCERTSTORE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int ,scalar_t__) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int,struct stat*) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int,int ) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static BOOL FUNC_11(LPCSTR VAR_2, HCERTSTORE VAR_3,
 BOOL VAR_4)
{
    BOOL VAR_5 = VAR_0;
    int VAR_6;

    FUNC_3("(%s, %p, %d)\n", FUNC_6(VAR_2), VAR_3, VAR_4);

    VAR_6 = FUNC_10(VAR_2, VAR_1);
    if (VAR_6 != -1)
    {
        struct stat VAR_7;

        if (FUNC_7(VAR_6, &VAR_7) == 0)
        {
            if (FUNC_2(VAR_7.st_mode))
                VAR_5 = FUNC_9(VAR_6, VAR_3);
            else if (FUNC_1(VAR_7.st_mode))
            {
                if (VAR_4)
                    VAR_5 = FUNC_8(VAR_2, VAR_3);
                else
                    FUNC_4("%s is a directory and directories are disallowed\n",
                     FUNC_6(VAR_2));
            }
            else
                FUNC_0("%s: invalid file type\n", VAR_2);
        }
        FUNC_5(VAR_6);
    }
    return VAR_5;
}
