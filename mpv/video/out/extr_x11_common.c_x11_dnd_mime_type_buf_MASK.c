
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_x11_state {int display; } ;
typedef scalar_t__ Atom ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,int ) ;
 char* FUNC_1 (struct vo_x11_state*,scalar_t__,char*,size_t) ;

__attribute__((used)) static char *FUNC_2(struct vo_x11_state *VAR_1, Atom VAR_2,
                                   char *VAR_3, size_t VAR_4)
{
    if (VAR_2 == FUNC_0(VAR_1->display, "UTF8_STRING", VAR_0))
        return "text";
    return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
}
