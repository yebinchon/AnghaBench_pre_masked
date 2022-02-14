
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint16 ;
struct TYPE_8__ {TYPE_1__* info; struct TYPE_8__* next; } ;
typedef TYPE_2__ codec_t ;
struct TYPE_9__ {scalar_t__ scheme; scalar_t__ name; } ;
struct TYPE_7__ {scalar_t__ scheme; } ;
typedef TYPE_3__ TIFFCodec ;


 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;

const TIFFCodec*
FUNC_0(uint16 VAR_2)
{
 const TIFFCodec* VAR_3;
 codec_t* VAR_4;

 for (VAR_4 = VAR_1; VAR_4; VAR_4 = VAR_4->next)
  if (VAR_4->info->scheme == VAR_2)
   return ((const TIFFCodec*) VAR_4->info);
 for (VAR_3 = VAR_0; VAR_3->name; VAR_3++)
  if (VAR_3->scheme == VAR_2)
   return (VAR_3);
 return ((const TIFFCodec*) 0);
}
