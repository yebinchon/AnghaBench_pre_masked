
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int client ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1(client *VAR_2, long long VAR_3) {
    if (VAR_3 > 512*1024*1024) {
        FUNC_0(VAR_2,"string exceeds maximum allowed size (512MB)");
        return VAR_0;
    }
    return VAR_1;
}
