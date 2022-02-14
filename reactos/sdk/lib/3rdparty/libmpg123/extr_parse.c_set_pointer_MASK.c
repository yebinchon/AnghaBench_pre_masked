
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bitindex; scalar_t__ fsizeold; scalar_t__ bsbufold; scalar_t__ wordpointer; scalar_t__ ssize; scalar_t__ bsbuf; } ;
typedef TYPE_1__ mpg123_handle ;


 int FUNC_0 (scalar_t__,scalar_t__,long) ;

void FUNC_1(mpg123_handle *VAR_0, long VAR_1)
{
 VAR_0->wordpointer = VAR_0->bsbuf + VAR_0->ssize - VAR_1;
 if (VAR_1)
 FUNC_0(VAR_0->wordpointer,VAR_0->bsbufold+VAR_0->fsizeold-VAR_1,VAR_1);

 VAR_0->bitindex = 0;
}
