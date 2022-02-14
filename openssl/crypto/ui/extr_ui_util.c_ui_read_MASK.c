
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pem_password_cb_data {int (* cb ) (char*,int,int ,int ) ;int rwflag; } ;
typedef int UI_STRING ;
typedef int UI ;


 int VAR_0 ;






 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct pem_password_cb_data* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int *,char*,int) ;
 int FUNC_6 (char*,int,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(UI *VAR_2, UI_STRING *VAR_3)
{
    switch (FUNC_3(VAR_3)) {
    case 129:
        {
            char VAR_4[VAR_0 + 1];
            const struct pem_password_cb_data *VAR_5 =
                FUNC_4(FUNC_1(VAR_2), VAR_1);
            int VAR_6 = FUNC_2(VAR_3);
            int VAR_7 = VAR_5->cb(VAR_4,
                               VAR_6 > VAR_0 ? VAR_0 : VAR_6,
                               VAR_5->rwflag, FUNC_0(VAR_2));

            if (VAR_7 >= 0)
                VAR_4[VAR_7] = '\0';
            if (VAR_7 <= 0)
                return VAR_7;
            if (FUNC_5(VAR_2, VAR_3, VAR_4, VAR_7) >= 0)
                return 1;
            return 0;
        }
    case 128:
    case 130:
    case 133:
    case 131:
    case 132:
        break;
    }
    return 1;
}
