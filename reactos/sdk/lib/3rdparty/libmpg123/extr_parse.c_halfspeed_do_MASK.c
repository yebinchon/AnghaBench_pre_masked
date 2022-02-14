
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ halfspeed; } ;
struct TYPE_6__ {unsigned char* wordpointer; int lay; TYPE_1__ p; scalar_t__ halfphase; int crc; scalar_t__ error_protection; int ssize; int ssave; scalar_t__ bsbuf; scalar_t__ bitindex; int to_ignore; int to_decode; } ;
typedef TYPE_2__ mpg123_handle ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_3(mpg123_handle *VAR_1)
{

 if (VAR_1->p.halfspeed)
 {
  if(VAR_1->halfphase)
  {
   FUNC_0("repeat!");
   VAR_1->to_decode = VAR_1->to_ignore = VAR_0;
   --VAR_1->halfphase;
   VAR_1->bitindex = 0;
   VAR_1->wordpointer = (unsigned char *) VAR_1->bsbuf;
   if(VAR_1->lay == 3) FUNC_2 (VAR_1->bsbuf, VAR_1->ssave, VAR_1->ssize);
   if(VAR_1->error_protection) VAR_1->crc = FUNC_1(VAR_1, 16);
   return 1;
  }
  else
  {
   VAR_1->halfphase = VAR_1->p.halfspeed - 1;
  }
 }
 return 0;
}
