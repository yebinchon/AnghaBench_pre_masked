
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_3__ {scalar_t__ pos; scalar_t__ wp; scalar_t__ rp; } ;
typedef TYPE_1__ fz_stream ;
typedef int fz_context ;



__attribute__((used)) static void FUNC_0(fz_context *VAR_0, fz_stream *VAR_1, int64_t VAR_2, int VAR_3)
{
 int64_t VAR_4 = VAR_1->pos - (VAR_1->wp - VAR_1->rp);

 if (VAR_3 == 1)
 {
  VAR_2 += VAR_4;
 }
 else if (VAR_3 == 2)
 {
  VAR_2 += VAR_1->pos;
 }

 if (VAR_2 < 0)
  VAR_2 = 0;
 if (VAR_2 > VAR_1->pos)
  VAR_2 = VAR_1->pos;
 VAR_1->rp += (int)(VAR_2 - VAR_4);
}
