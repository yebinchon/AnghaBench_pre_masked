
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int _flag; } ;
typedef TYPE_1__ FILE ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(int VAR_1)
{
  int VAR_2, VAR_3 = 0;
  FILE *VAR_4;

  FUNC_0();
  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
    VAR_4 = FUNC_4(VAR_2);

    if (VAR_4->_flag)
    {
      if(VAR_4->_flag & VAR_1) {
 FUNC_3(VAR_4);
        VAR_3++;
      }
    }
  }
  FUNC_2();

  FUNC_1(":flushed (%d) handles\n",VAR_3);
  return VAR_3;
}
