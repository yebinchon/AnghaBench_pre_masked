
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int const nbBits; } ;
typedef TYPE_1__ HUF_CElt ;



__attribute__((used)) static size_t FUNC_0(HUF_CElt *VAR_0, const unsigned *VAR_1, unsigned VAR_2)
{
 size_t VAR_3 = 0;
 int VAR_4;
 for (VAR_4 = 0; VAR_4 <= (int)VAR_2; ++VAR_4) {
  VAR_3 += VAR_0[VAR_4].nbBits * VAR_1[VAR_4];
 }
 return VAR_3 >> 3;
}
