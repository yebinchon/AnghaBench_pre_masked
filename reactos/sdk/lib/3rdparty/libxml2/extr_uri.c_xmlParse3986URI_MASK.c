
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlURIPtr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const**) ;
 int FUNC_2 (int ,char const**) ;
 int FUNC_3 (int ,char const**) ;
 int FUNC_4 (int ,char const**) ;

__attribute__((used)) static int
FUNC_5(xmlURIPtr VAR_0, const char *VAR_1) {
    int VAR_2;

    VAR_2 = FUNC_4(VAR_0, &VAR_1);
    if (VAR_2 != 0) return(VAR_2);
    if (*VAR_1 != ':') {
 return(1);
    }
    VAR_1++;
    VAR_2 = FUNC_2(VAR_0, &VAR_1);
    if (VAR_2 != 0) return(VAR_2);
    if (*VAR_1 == '?') {
 VAR_1++;
 VAR_2 = FUNC_3(VAR_0, &VAR_1);
 if (VAR_2 != 0) return(VAR_2);
    }
    if (*VAR_1 == '#') {
 VAR_1++;
 VAR_2 = FUNC_1(VAR_0, &VAR_1);
 if (VAR_2 != 0) return(VAR_2);
    }
    if (*VAR_1 != 0) {
 FUNC_0(VAR_0);
 return(1);
    }
    return(0);
}
