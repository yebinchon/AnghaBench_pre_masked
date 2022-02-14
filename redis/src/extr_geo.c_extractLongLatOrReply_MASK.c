
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int robj ;
typedef int client ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int *,double*,int *) ;
 int FUNC_2 (int ,char*,double,double) ;
 int FUNC_3 () ;

int FUNC_4(client *VAR_6, robj **VAR_7, double *VAR_8) {
    int VAR_9;
    for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
        if (FUNC_1(VAR_6, VAR_7[VAR_9], VAR_8 + VAR_9, ((void*)0)) !=
            VAR_1) {
            return VAR_0;
        }
    }
    if (VAR_8[0] < VAR_5 || VAR_8[0] > VAR_4 ||
        VAR_8[1] < VAR_3 || VAR_8[1] > VAR_2) {
        FUNC_0(VAR_6, FUNC_2(FUNC_3(),
            "-ERR invalid longitude,latitude pair %f,%f\r\n",VAR_8[0],VAR_8[1]));
        return VAR_0;
    }
    return VAR_1;
}
