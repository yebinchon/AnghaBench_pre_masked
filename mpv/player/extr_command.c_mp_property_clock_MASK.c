
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
struct m_property {int dummy; } ;
typedef int outstr ;


 int VAR_0 ;
 struct tm* FUNC_0 (int *) ;
 int FUNC_1 (int,void*,char*) ;
 int FUNC_2 (char*,int,char*,struct tm*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void *VAR_1, struct m_property *VAR_2,
                             int VAR_3, void *VAR_4)
{
    char VAR_5[6];
    time_t VAR_6 = FUNC_3(((void*)0));
    struct tm *VAR_7 = FUNC_0(&VAR_6);

    if ((VAR_7 != ((void*)0)) && (FUNC_2(VAR_5, sizeof(VAR_5), "%H:%M", VAR_7) == 5))
        return FUNC_1(VAR_3, VAR_4, VAR_5);
    return VAR_0;
}
