
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_3__ {long bitspersample; int * bluecmap; int * greencmap; int * redcmap; } ;
typedef TYPE_1__ TIFFRGBAImage ;



__attribute__((used)) static int
FUNC_0(TIFFRGBAImage* VAR_0)
{
    uint16* VAR_1 = VAR_0->redcmap;
    uint16* VAR_2 = VAR_0->greencmap;
    uint16* VAR_3 = VAR_0->bluecmap;
    long VAR_4 = 1L<<VAR_0->bitspersample;

    while (VAR_4-- > 0)
 if (*VAR_1++ >= 256 || *VAR_2++ >= 256 || *VAR_3++ >= 256)
     return (16);
    return (8);
}
