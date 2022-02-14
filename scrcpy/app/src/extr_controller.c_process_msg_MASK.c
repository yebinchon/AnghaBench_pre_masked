
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct controller {int control_socket; } ;
struct control_msg {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct control_msg const*,unsigned char*) ;
 int FUNC_1 (int ,unsigned char*,int) ;

__attribute__((used)) static bool
FUNC_2(struct controller *VAR_1,
              const struct control_msg *VAR_2) {
    unsigned char VAR_3[VAR_0];
    int VAR_4 = FUNC_0(VAR_2, VAR_3);
    if (!VAR_4) {
        return 0;
    }
    int VAR_5 = FUNC_1(VAR_1->control_socket, VAR_3, VAR_4);
    return VAR_5 == VAR_4;
}
