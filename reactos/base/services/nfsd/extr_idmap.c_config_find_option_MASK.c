
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_pair {int key; } ;
struct config_option {int key; } ;


 int FUNC_0 (struct config_option*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct config_option* VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(
    const struct config_pair *VAR_3,
    const struct config_option **VAR_4)
{
    int VAR_5, VAR_6 = FUNC_0(VAR_2);
    int VAR_7 = VAR_0;


    for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
        if (FUNC_1(VAR_3->key, VAR_2[VAR_5].key) == 0) {
            *VAR_4 = &VAR_2[VAR_5];
            VAR_7 = VAR_1;
            break;
        }
    }
    return VAR_7;
}
