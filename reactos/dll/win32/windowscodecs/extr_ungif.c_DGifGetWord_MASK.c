
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int GifWord ;
typedef int GifFileType ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_1(GifFileType * VAR_2,
            GifWord *VAR_3) {

    unsigned char VAR_4[2];

    if (FUNC_0(VAR_2, VAR_4, 2) != 2) {
        return VAR_0;
    }

    *VAR_3 = (((unsigned int)VAR_4[1]) << 8) + VAR_4[0];
    return VAR_1;
}
