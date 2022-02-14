
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16 ;
typedef int tmsize_t ;
struct TYPE_3__ {int td_bitspersample; int td_samplesperpixel; int td_extrasamples; scalar_t__** td_transferfunction; } ;
typedef TYPE_1__ TIFFDirectory ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (double,double) ;

__attribute__((used)) static int
FUNC_5(TIFFDirectory* VAR_0)
{
 uint16 **VAR_1 = VAR_0->td_transferfunction;
 tmsize_t VAR_2, VAR_3, VAR_4;

 VAR_1[0] = VAR_1[1] = VAR_1[2] = 0;
 if (VAR_0->td_bitspersample >= sizeof(tmsize_t) * 8 - 2)
  return 0;

 VAR_3 = ((tmsize_t)1)<<VAR_0->td_bitspersample;
 VAR_4 = VAR_3 * sizeof (uint16);
        VAR_1[0] = (uint16 *)FUNC_1(VAR_4);
 if (VAR_1[0] == ((void*)0))
  return 0;
 VAR_1[0][0] = 0;
 for (VAR_2 = 1; VAR_2 < VAR_3; VAR_2++) {
  double VAR_5 = (double)VAR_2/((double) VAR_3-1.);
  VAR_1[0][VAR_2] = (uint16)FUNC_3(65535.*FUNC_4(VAR_5, 2.2) + .5);
 }

 if (VAR_0->td_samplesperpixel - VAR_0->td_extrasamples > 1) {
                VAR_1[1] = (uint16 *)FUNC_1(VAR_4);
  if(VAR_1[1] == ((void*)0))
   goto bad;
  FUNC_2(VAR_1[1], VAR_1[0], VAR_4);
                VAR_1[2] = (uint16 *)FUNC_1(VAR_4);
  if (VAR_1[2] == ((void*)0))
   goto bad;
  FUNC_2(VAR_1[2], VAR_1[0], VAR_4);
 }
 return 1;

bad:
 if (VAR_1[0])
  FUNC_0(VAR_1[0]);
 if (VAR_1[1])
  FUNC_0(VAR_1[1]);
 if (VAR_1[2])
  FUNC_0(VAR_1[2]);
 VAR_1[0] = VAR_1[1] = VAR_1[2] = 0;
 return 0;
}
