
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct playlist_param {int value; int name; } ;
typedef int m_config_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(m_config_t *VAR_1,
                                  struct playlist_param *VAR_2,
                                  int VAR_3)
{
    for (int VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        FUNC_0(VAR_1, VAR_2[VAR_4].name, VAR_2[VAR_4].value,
                                VAR_0);
    }
}
