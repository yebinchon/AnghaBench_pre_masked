
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {scalar_t__ sun_family; scalar_t__* sun_path; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockaddr_un const*) ;
 int VAR_2 ;
 char* FUNC_1 (scalar_t__*,int ,int) ;
 char* FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (char const*) ;

int FUNC_4(const struct sockaddr_un *VAR_3) {
        const char *VAR_4, * VAR_5;

        FUNC_0(VAR_3);

        if (VAR_3->sun_family != VAR_0)
                return -VAR_1;

        if (VAR_3->sun_path[0] == 0)
                return 0;


        VAR_5 = FUNC_1(VAR_3->sun_path, 0, sizeof(VAR_3->sun_path));
        if (VAR_5)
                VAR_4 = VAR_3->sun_path;
        else
                VAR_4 = FUNC_2(VAR_3->sun_path, sizeof(VAR_3->sun_path));

        if (FUNC_3(VAR_4) < 0)
                return -VAR_2;

        return 1;
}
