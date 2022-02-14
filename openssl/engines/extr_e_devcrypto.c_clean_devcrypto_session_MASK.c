
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session_op {int ses; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct session_op*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct session_op *VAR_4) {
    if (FUNC_1(VAR_2, VAR_0, &VAR_4->ses) < 0) {
        FUNC_0(VAR_1, VAR_3, "calling ioctl()");
        return 0;
    }
    FUNC_2(VAR_4, 0, sizeof(struct session_op));
    return 1;
}
