
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct usb_config {int source_generator; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct usb_config*) ;
 int FUNC_9 (int *,int ,struct usb_config*) ;

void FUNC_10(void) {
    uint32_t VAR_4;


    VAR_4 = FUNC_2();
    FUNC_1();
    FUNC_0();

    struct usb_config VAR_5;


    FUNC_8(&VAR_5);
    VAR_5.source_generator = VAR_0;
    FUNC_9(&VAR_3, VAR_2, &VAR_5);


    FUNC_7(&VAR_3);


    FUNC_6();

    FUNC_5(VAR_1);



    FUNC_4();


    FUNC_0();
    FUNC_3(VAR_4);
}
