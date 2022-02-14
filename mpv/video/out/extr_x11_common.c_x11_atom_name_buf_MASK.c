
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_x11_state {int display; } ;
typedef int Atom ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,size_t,char*,char*) ;

__attribute__((used)) static char *FUNC_3(struct vo_x11_state *VAR_0, Atom VAR_1,
                               char *VAR_2, size_t VAR_3)
{
    VAR_2[0] = '\0';

    char *VAR_4 = FUNC_1(VAR_0->display, VAR_1);
    if (VAR_4) {
        FUNC_2(VAR_2, VAR_3, "%s", VAR_4);
        FUNC_0(VAR_4);
    }

    return VAR_2;
}
