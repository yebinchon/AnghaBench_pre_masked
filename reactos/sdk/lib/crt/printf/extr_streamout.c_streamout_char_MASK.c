
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int _flag; int _cnt; scalar_t__ _ptr; int * _base; } ;
typedef int TCHAR ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,TYPE_1__*) ;

__attribute__((used)) static
int
FUNC_1(FILE *VAR_2, int VAR_3)
{

     if ((VAR_2->_flag & VAR_0) && (VAR_2->_base == ((void*)0)))
        return 1;
    return FUNC_0((TCHAR)VAR_3, VAR_2) != VAR_1;

}
