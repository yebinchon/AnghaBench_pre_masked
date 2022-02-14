
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint16_t ;
typedef int send_dir ;
struct TYPE_6__ {size_t datalen; int * data; } ;
typedef TYPE_1__ send_context ;
typedef size_t ULONG ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int *,char*,size_t) ;
 size_t FUNC_1 (int *,size_t) ;
 int FUNC_2 (TYPE_1__*,int ,int *,size_t) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,size_t) ;

__attribute__((used)) static NTSTATUS FUNC_5(send_context* VAR_3, send_dir* VAR_4, uint16_t VAR_5, char* VAR_6) {
    ULONG VAR_7 = VAR_3->datalen;
    uint16_t VAR_8;

    FUNC_3(VAR_3, VAR_0);

    VAR_8 = FUNC_1(VAR_4, VAR_5);
    FUNC_2(VAR_3, VAR_1, ((void*)0), VAR_8);

    FUNC_0((char*)&VAR_3->data[VAR_3->datalen - VAR_8], VAR_4, VAR_6, VAR_5);

    FUNC_4(VAR_3, VAR_7);

    return VAR_2;
}
