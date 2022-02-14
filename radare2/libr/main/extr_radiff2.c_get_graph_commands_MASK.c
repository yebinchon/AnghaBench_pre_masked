
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_2__ {int is_html; } ;
typedef int RCore ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (int *,int ,int) ;
 char* FUNC_6 (char const*) ;

__attribute__((used)) static char *FUNC_7(RCore *VAR_3, ut64 VAR_4) {
        bool VAR_5 = FUNC_4 ()->is_html;
        FUNC_4 ()->is_html = 0;
        FUNC_3 ();
        FUNC_5 (VAR_3, VAR_4, VAR_0 | VAR_1 | VAR_2);
        const char *VAR_6 = FUNC_1 ();
        char *VAR_7 = FUNC_6 (VAR_6? VAR_6: "");
        FUNC_2 ();
        FUNC_0 (((void*)0));
        FUNC_4 ()->is_html = VAR_5;
        return VAR_7;
}
