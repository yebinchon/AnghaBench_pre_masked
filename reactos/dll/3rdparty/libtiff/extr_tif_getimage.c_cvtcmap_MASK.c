
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_3__ {long bitspersample; int * bluecmap; int * greencmap; int * redcmap; } ;
typedef TYPE_1__ TIFFRGBAImage ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(TIFFRGBAImage* VAR_0)
{
    uint16* VAR_1 = VAR_0->redcmap;
    uint16* VAR_2 = VAR_0->greencmap;
    uint16* VAR_3 = VAR_0->bluecmap;
    long VAR_4;

    for (VAR_4 = (1L<<VAR_0->bitspersample)-1; VAR_4 >= 0; VAR_4--) {

 VAR_1[VAR_4] = ((uint16)((VAR_1[VAR_4])>>8));
 VAR_2[VAR_4] = ((uint16)((VAR_2[VAR_4])>>8));
 VAR_3[VAR_4] = ((uint16)((VAR_3[VAR_4])>>8));

    }
}
