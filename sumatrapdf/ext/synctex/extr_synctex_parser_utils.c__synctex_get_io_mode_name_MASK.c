
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int synctex_io_mode_t ;


 int VAR_0 ;
 int VAR_1 ;

const char * FUNC_0(synctex_io_mode_t VAR_2) {
    static const char * VAR_3[4] = {"r","rb","a","ab"};
    unsigned VAR_4 = ((VAR_2 & VAR_1)?1:0) + ((VAR_2 & VAR_0)?2:0);
    return VAR_3[VAR_4];
}
