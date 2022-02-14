
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int send_dir ;
struct TYPE_4__ {scalar_t__ datalen; int * data; } ;
typedef TYPE_1__ send_context ;


 int FUNC_0 (char*,int *,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_3(send_context* VAR_0, uint16_t VAR_1, send_dir* VAR_2, char* VAR_3, uint16_t VAR_4) {
    uint16_t VAR_5 = FUNC_1(VAR_2, VAR_4);

    FUNC_2(VAR_0, VAR_1, ((void*)0), VAR_5);

    if (VAR_5 > 0)
        FUNC_0((char*)&VAR_0->data[VAR_0->datalen - VAR_5], VAR_2, VAR_3, VAR_4);
}
