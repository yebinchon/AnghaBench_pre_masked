
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {scalar_t__ ws_row; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ,struct winsize*) ;

int FUNC_1(int VAR_3) {
        struct winsize VAR_4 = {};

        if (FUNC_0(VAR_3, VAR_1, &VAR_4) < 0)
                return -VAR_2;

        if (VAR_4.ws_row <= 0)
                return -VAR_0;

        return VAR_4.ws_row;
}
