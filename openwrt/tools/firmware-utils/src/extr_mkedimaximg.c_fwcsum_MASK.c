
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {int size; scalar_t__ start; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned short) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static unsigned short FUNC_1 (struct buf *VAR_2) {
    int VAR_3;
    unsigned short VAR_4 = 0;

    for (VAR_3 = 0; VAR_3 < VAR_2->size / 2; VAR_3++) {
 if (VAR_1 == VAR_0)
     VAR_4 -= ((unsigned short *) VAR_2->start)[VAR_3];
 else
     VAR_4 -= FUNC_0(((unsigned short *) VAR_2->start)[VAR_3]);
    }

    return VAR_4;
}
