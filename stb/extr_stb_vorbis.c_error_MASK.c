
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int error; int eof; } ;
typedef TYPE_1__ vorb ;
typedef enum STBVorbisError { ____Placeholder_STBVorbisError } STBVorbisError ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(vorb *VAR_1, enum STBVorbisError VAR_2)
{
   VAR_1->error = VAR_2;
   if (!VAR_1->eof && VAR_2 != VAR_0) {
      VAR_1->error=VAR_2;
   }
   return 0;
}
