
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data; struct TYPE_4__* next; } ;
typedef TYPE_1__ node ;
typedef scalar_t__ INT ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(node * VAR_0)
{
    INT VAR_1 = 0;
    node * VAR_2 = ((void*)0);
    node * VAR_3 = ((void*)0);
    node * VAR_4 = VAR_0;

    if(!VAR_0)
        goto end;

    do{
        VAR_2 = VAR_0;
        while((VAR_2 = VAR_2->next)){
            if(VAR_0->data == VAR_2->data){
                VAR_1++;
                break;
            }
            if(VAR_1 > 0)
                break;
        }
    }while((VAR_0 = VAR_0->next));

    VAR_2 = VAR_4;
    do{
        VAR_3 = VAR_2->next;
        FUNC_1(FUNC_0(), 0, VAR_2);
        VAR_2 = VAR_3;
    }while(VAR_2);

end:
    FUNC_2(0, VAR_1);
}
