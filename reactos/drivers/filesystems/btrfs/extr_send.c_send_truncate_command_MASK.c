
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef char uint64_t ;
typedef int uint16_t ;
struct TYPE_6__ {int datalen; } ;
typedef TYPE_1__ send_context ;
typedef int ULONG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,char*,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(send_context* VAR_3, char* VAR_4, uint64_t VAR_5) {
    ULONG VAR_6 = VAR_3->datalen;

    FUNC_1(VAR_3, VAR_0);

    FUNC_0(VAR_3, VAR_1, VAR_4, VAR_4 ? (uint16_t)FUNC_3(VAR_4) : 0);
    FUNC_0(VAR_3, VAR_2, &VAR_5, sizeof(uint64_t));

    FUNC_2(VAR_3, VAR_6);
}
