
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int crit; } ;
typedef TYPE_1__ file_crit ;
struct TYPE_8__ {int wxflag; } ;
struct TYPE_7__ {int _file; unsigned int _flag; int * _tmpfname; scalar_t__ _cnt; int * _base; int _ptr; } ;
typedef TYPE_2__ FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* FUNC_3 () ;
 int * FUNC_4 () ;
 TYPE_2__* VAR_3 ;
 TYPE_4__* FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(FILE* VAR_4, int VAR_5, unsigned VAR_6)
{
  FUNC_1(":fd (%d) allocating FILE*\n",VAR_5);
  if (!(FUNC_5(VAR_5)->wxflag & VAR_1))
  {
    FUNC_2(":invalid fd %d\n",VAR_5);
    *FUNC_3() = 0;
    *FUNC_4() = VAR_0;
    return -1;
  }
  VAR_4->_ptr = *(VAR_4->_base = ((void*)0));
  VAR_4->_cnt = 0;
  VAR_4->_file = VAR_5;
  VAR_4->_flag = VAR_6;
  VAR_4->_tmpfname = ((void*)0);

  if(VAR_4<VAR_3 || VAR_4>=VAR_3+VAR_2)
      FUNC_0(&((file_crit*)VAR_4)->crit);

  FUNC_1(":got FILE* (%p)\n",VAR_4);
  return 0;
}
