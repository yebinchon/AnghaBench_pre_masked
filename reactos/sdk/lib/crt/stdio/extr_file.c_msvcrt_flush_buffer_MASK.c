
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int _flag; int _ptr; int _base; scalar_t__ _cnt; int _file; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static int FUNC_1(FILE* VAR_7)
{
    if((VAR_7->_flag & (VAR_3|VAR_5)) == VAR_5 &&
            VAR_7->_flag & (VAR_2|VAR_6)) {
        int VAR_8=VAR_7->_ptr-VAR_7->_base;
        if(VAR_8>0 && FUNC_0(VAR_7->_file, VAR_7->_base, VAR_8) != VAR_8) {
            VAR_7->_flag |= VAR_1;
            return VAR_0;
        }

        if(VAR_7->_flag & VAR_4)
            VAR_7->_flag &= ~VAR_5;





    }


    VAR_7->_ptr=VAR_7->_base;
    VAR_7->_cnt=0;

    return 0;
}
