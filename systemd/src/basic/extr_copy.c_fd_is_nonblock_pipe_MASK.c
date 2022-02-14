
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int,struct stat*) ;

__attribute__((used)) static int FUNC_4(int VAR_6) {
        struct stat VAR_7;
        int VAR_8;



        if (FUNC_3(VAR_6, &VAR_7) < 0)
                return -VAR_5;

        if (!FUNC_1(VAR_7.st_mode))
                return VAR_2;

        VAR_8 = FUNC_2(VAR_6, VAR_3);
        if (VAR_8 < 0)
                return -VAR_5;

        return FUNC_0(VAR_8, VAR_4) ? VAR_1 : VAR_0;
}
