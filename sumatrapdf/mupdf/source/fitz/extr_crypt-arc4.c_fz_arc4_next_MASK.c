
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* state; int x; unsigned int y; } ;
typedef TYPE_1__ fz_arc4 ;



__attribute__((used)) static unsigned char
FUNC_0(fz_arc4 *VAR_0)
{
 unsigned int VAR_1;
 unsigned int VAR_2;
 unsigned int VAR_3, VAR_4;
 unsigned char *VAR_5;

 VAR_5 = VAR_0->state;

 VAR_1 = (VAR_0->x + 1) & 0xff;
 VAR_3 = VAR_5[VAR_1];
 VAR_2 = (VAR_3 + VAR_0->y) & 0xff;
 VAR_4 = VAR_5[VAR_2];

 VAR_0->x = VAR_1;
 VAR_0->y = VAR_2;

 VAR_5[VAR_2] = VAR_3;
 VAR_5[VAR_1] = VAR_4;

 return VAR_5[(VAR_3 + VAR_4) & 0xff];
}
