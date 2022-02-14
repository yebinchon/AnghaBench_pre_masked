
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GifPrefixType ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(const GifPrefixType *VAR_1,
                  int VAR_2,
                  int VAR_3) {

    int VAR_4 = 0;

    while (VAR_2 > VAR_3 && VAR_4++ <= VAR_0)
        VAR_2 = VAR_1[VAR_2];
    return VAR_2;
}
