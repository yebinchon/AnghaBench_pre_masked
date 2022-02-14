
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; int sha; int crc64; int crc; } ;
typedef TYPE_1__ CXzCheck ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;




void FUNC_1(CXzCheck *VAR_2, int VAR_3)
{
  VAR_2->mode = VAR_3;
  switch (VAR_3)
  {
    case 130: VAR_2->crc = VAR_1; break;
    case 129: VAR_2->crc64 = VAR_0; break;
    case 128: FUNC_0(&VAR_2->sha); break;
  }
}
