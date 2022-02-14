
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct receiver {int control_socket; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;
 int FUNC_3 (int ,unsigned char*,int) ;
 int FUNC_4 (struct receiver*,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_5(void *VAR_1) {
    struct receiver *VAR_2 = VAR_1;

    unsigned char VAR_3[VAR_0];
    size_t VAR_4 = 0;

    for (;;) {
        FUNC_1(VAR_4 < VAR_0);
        ssize_t VAR_5 = FUNC_3(VAR_2->control_socket, VAR_3,
                             VAR_0 - VAR_4);
        if (VAR_5 <= 0) {
            FUNC_0("Receiver stopped");
            break;
        }

        ssize_t VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_5);
        if (VAR_6 == -1) {

            break;
        }

        if (VAR_6) {

            FUNC_2(VAR_3, &VAR_3[VAR_6], VAR_5 - VAR_6);
            VAR_4 = VAR_5 - VAR_6;
        }
    }

    return 0;
}
