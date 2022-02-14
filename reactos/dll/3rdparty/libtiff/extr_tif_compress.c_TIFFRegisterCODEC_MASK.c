
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint16 ;
typedef int tmsize_t ;
struct TYPE_5__ {TYPE_2__* info; struct TYPE_5__* next; } ;
typedef TYPE_1__ codec_t ;
struct TYPE_6__ {char* name; int init; int scheme; } ;
typedef int TIFFInitMethod ;
typedef TYPE_2__ TIFFCodec ;


 int FUNC_0 (int ,char*,char*,char const*) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

TIFFCodec*
FUNC_4(uint16 VAR_1, const char* VAR_2, TIFFInitMethod VAR_3)
{
 codec_t* VAR_4 = (codec_t*)
     FUNC_1((tmsize_t)(sizeof (codec_t) + sizeof (TIFFCodec) + FUNC_3(VAR_2)+1));

 if (VAR_4 != ((void*)0)) {
  VAR_4->info = (TIFFCodec*) ((uint8*) VAR_4 + sizeof (codec_t));
  VAR_4->info->name = (char*)
      ((uint8*) VAR_4->info + sizeof (TIFFCodec));
  FUNC_2(VAR_4->info->name, VAR_2);
  VAR_4->info->scheme = VAR_1;
  VAR_4->info->init = VAR_3;
  VAR_4->next = VAR_0;
  VAR_0 = VAR_4;
 } else {
  FUNC_0(0, "TIFFRegisterCODEC",
      "No space to register compression scheme %s", VAR_2);
  return ((void*)0);
 }
 return (VAR_4->info);
}
