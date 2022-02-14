
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int len ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned char*,unsigned int*,int) ;
 int FUNC_2 (unsigned char*) ;

__attribute__((used)) static unsigned int FUNC_3(unsigned char *VAR_1, unsigned int VAR_2) {
    if (VAR_1 == ((void*)0)) {
        return FUNC_0(VAR_2);
    } else {
        if (VAR_2 < VAR_0) {
            VAR_1[0] = VAR_2;
            return 1;
        } else {
            VAR_1[0] = VAR_0;
            FUNC_1(VAR_1+1,&VAR_2,sizeof(VAR_2));
            FUNC_2(VAR_1+1);
            return 1+sizeof(VAR_2);
        }
    }
}
