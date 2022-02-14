
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GifFileType ;
typedef int GifByteType ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int*,int) ;

__attribute__((used)) static int
FUNC_1(GifFileType * VAR_2,
                  GifByteType * VAR_3,
                  GifByteType * VAR_4) {

    if (VAR_3[0] == 0) {

        if (FUNC_0(VAR_2, VAR_3, 1) != 1) {
            return VAR_0;
        }




        if (VAR_3[0] == 0) {
            return VAR_0;
        }
        if (FUNC_0(VAR_2, &VAR_3[1], VAR_3[0]) != VAR_3[0]) {
            return VAR_0;
        }
        *VAR_4 = VAR_3[1];
        VAR_3[1] = 2;
        VAR_3[0]--;
    } else {
        *VAR_4 = VAR_3[VAR_3[1]++];
        VAR_3[0]--;
    }

    return VAR_1;
}
