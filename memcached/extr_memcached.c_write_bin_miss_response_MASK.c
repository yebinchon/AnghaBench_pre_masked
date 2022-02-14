
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int protocol_binary_response_header ;
struct TYPE_7__ {char* wbuf; int write_and_go; } ;
typedef TYPE_1__ conn ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ,size_t,size_t) ;
 int FUNC_1 (TYPE_1__*,char*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (TYPE_1__*,int ,int *,int ) ;

__attribute__((used)) static void FUNC_5(conn *VAR_3, char *VAR_4, size_t VAR_5) {
    if (VAR_5) {
        char *VAR_6 = VAR_3->wbuf + sizeof(protocol_binary_response_header);
        FUNC_0(VAR_3, VAR_0,
                0, VAR_5, VAR_5);
        FUNC_3(VAR_6, VAR_4, VAR_5);
        FUNC_1(VAR_3, VAR_6, VAR_5);
        FUNC_2(VAR_3, VAR_1);
        VAR_3->write_and_go = VAR_2;
    } else {
        FUNC_4(VAR_3, VAR_0,
                        ((void*)0), 0);
    }
}
