
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* db; } ;
struct TYPE_4__ {int data; } ;
typedef TYPE_2__ CA_DB ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 char** FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(CA_DB *VAR_3, int VAR_4, int VAR_5, char *VAR_6)
{
    if (VAR_4 >= 0 && VAR_5) {
        int VAR_7;
        char **VAR_8 = FUNC_1(VAR_3->db->data, VAR_4);
        FUNC_0(VAR_2, "%s \"%s\"\n", VAR_6, VAR_8[VAR_1]);
        for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
            FUNC_0(VAR_2, "  %d = \"%s\"\n", VAR_7, VAR_8[VAR_7]);
        }
    }
}
