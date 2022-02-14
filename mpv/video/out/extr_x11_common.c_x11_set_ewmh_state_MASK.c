
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_x11_state {int display; } ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct vo_x11_state*,char*,long*) ;

__attribute__((used)) static void FUNC_2(struct vo_x11_state *VAR_3, char *VAR_4, bool VAR_5)
{
    long VAR_6[5] = {
        VAR_5 ? VAR_1 : VAR_2,
        FUNC_0(VAR_3->display, VAR_4, VAR_0),
    };
    FUNC_1(VAR_3, "_NET_WM_STATE", VAR_6);
}
