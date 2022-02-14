
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct control_msg {unsigned char const type; } ;
typedef int expected ;


 int VAR_0 ;
 unsigned char const VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct control_msg*,unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned char const*,int) ;

__attribute__((used)) static void FUNC_3(void) {
    struct control_msg VAR_2 = {
        .type = VAR_1,
    };

    unsigned char VAR_3[VAR_0];
    int VAR_4 = FUNC_1(&VAR_2, VAR_3);
    FUNC_0(VAR_4 == 1);

    const unsigned char VAR_5[] = {
        VAR_1,
    };
    FUNC_0(!FUNC_2(VAR_3, VAR_5, sizeof(VAR_5)));
}
