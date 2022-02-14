
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t uNumTics; int* tics; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef int LONG ;
typedef size_t INT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int*,size_t,int,int ) ;

__attribute__((used)) static inline LONG
FUNC_1 (const TRACKBAR_INFO *VAR_1, INT VAR_2)
{
    if ((VAR_2 < 0) || (VAR_2 >= VAR_1->uNumTics) || !VAR_1->tics)
 return -1;

    FUNC_0(VAR_1->tics, VAR_1->uNumTics, sizeof(DWORD), VAR_0);
    return VAR_1->tics[VAR_2];
}
