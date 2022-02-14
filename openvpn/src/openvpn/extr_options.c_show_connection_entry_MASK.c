
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection_entry {int key_direction; scalar_t__ http_proxy_options; int af; int proto; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,int,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int ,char*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (int ,int ,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_7 (scalar_t__) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;

__attribute__((used)) static void
FUNC_8(const struct connection_entry *VAR_27)
{
    FUNC_5(VAR_0, "  proto = %s", FUNC_6(VAR_27->proto, VAR_27->af, 0));
    FUNC_3(VAR_11);
    FUNC_3(VAR_12);
    FUNC_3(VAR_15);
    FUNC_3(VAR_17);
    FUNC_0(VAR_16);
    FUNC_0(VAR_1);
    FUNC_0(VAR_3);
    FUNC_0(VAR_2);
    FUNC_1(VAR_4);
    FUNC_1(VAR_5);

    if (VAR_27->http_proxy_options)
    {
        FUNC_7(VAR_27->http_proxy_options);
    }
    FUNC_3(VAR_19);
    FUNC_3(VAR_18);
    FUNC_1(VAR_23);
    FUNC_0(VAR_24);
    FUNC_1(VAR_9);
    FUNC_0(VAR_10);
    FUNC_1(VAR_25);
    FUNC_0(VAR_26);

    FUNC_1(VAR_14);




    FUNC_1(VAR_13);





    FUNC_3(VAR_20);
    FUNC_2(VAR_8, FUNC_4(VAR_27->key_direction, 0, 1),
              "%s");
    FUNC_3(VAR_21);
    FUNC_3(VAR_22);
}
