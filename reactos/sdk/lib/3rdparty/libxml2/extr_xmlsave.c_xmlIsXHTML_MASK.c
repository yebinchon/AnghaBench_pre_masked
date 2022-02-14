
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlChar ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int const*,int ) ;

int
FUNC_1(const xmlChar *VAR_6, const xmlChar *VAR_7) {
    if ((VAR_6 == ((void*)0)) && (VAR_7 == ((void*)0)))
 return(-1);
    if (VAR_7 != ((void*)0)) {
 if (FUNC_0(VAR_7, VAR_2)) return(1);
 if (FUNC_0(VAR_7, VAR_0)) return(1);
 if (FUNC_0(VAR_7, VAR_4)) return(1);
    }
    if (VAR_6 != ((void*)0)) {
 if (FUNC_0(VAR_6, VAR_3)) return(1);
 if (FUNC_0(VAR_6, VAR_1)) return(1);
 if (FUNC_0(VAR_6, VAR_5)) return(1);
    }
    return(0);
}
