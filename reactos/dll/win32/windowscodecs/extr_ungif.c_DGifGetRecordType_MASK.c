
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GifRecordType ;
typedef int GifFileType ;
typedef int GifByteType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int*,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_1(GifFileType * VAR_6,
                  GifRecordType * VAR_7) {

    GifByteType VAR_8;

    if (FUNC_0(VAR_6, &VAR_8, 1) != 1) {


        *VAR_7 = VAR_4;
        return VAR_2;
    }

    switch (VAR_8) {
      case ',':
          *VAR_7 = VAR_3;
          break;
      case '!':
          *VAR_7 = VAR_0;
          break;
      case ';':
          *VAR_7 = VAR_4;
          break;
      default:
          *VAR_7 = VAR_5;
          return VAR_1;
    }

    return VAR_2;
}
