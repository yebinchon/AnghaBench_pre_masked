
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ dwSize; scalar_t__ dwUsed; scalar_t__* buffer; TYPE_1__* editstream; } ;
struct TYPE_7__ {TYPE_3__* stream; } ;
struct TYPE_6__ {scalar_t__ dwError; } ;
typedef TYPE_2__ RTF_Info ;
typedef TYPE_3__ ME_InStream ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;

int FUNC_1(RTF_Info *VAR_1)
{
 int VAR_2;
        ME_InStream *VAR_3 = VAR_1->stream;

 if (VAR_3->dwSize <= VAR_3->dwUsed)
 {
                FUNC_0(VAR_3);

  if (VAR_3->editstream->dwError)
   return VAR_0;

  if (VAR_3->dwSize == 0)
   return VAR_0;
 }
 VAR_2 = (unsigned char)VAR_3->buffer[VAR_3->dwUsed++];
 if (!VAR_2)
   return ' ';
 return VAR_2;
}
