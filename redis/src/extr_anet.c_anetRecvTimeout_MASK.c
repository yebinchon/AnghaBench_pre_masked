
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tv ;
struct timeval {long long tv_sec; long long tv_usec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*,int ) ;
 int VAR_4 ;
 int FUNC_1 (int,int ,int ,struct timeval*,int) ;
 int FUNC_2 (int ) ;

int FUNC_3(char *VAR_5, int VAR_6, long long VAR_7) {
    struct timeval VAR_8;

    VAR_8.tv_sec = VAR_7/1000;
    VAR_8.tv_usec = (VAR_7%1000)*1000;
    if (FUNC_1(VAR_6, VAR_2, VAR_3, &VAR_8, sizeof(VAR_8)) == -1) {
        FUNC_0(VAR_5, "setsockopt SO_RCVTIMEO: %s", FUNC_2(VAR_4));
        return VAR_0;
    }
    return VAR_1;
}
