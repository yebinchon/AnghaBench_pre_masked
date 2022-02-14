
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t bufptr; size_t bufstart; int failed; size_t nchars; int stream; } ;
typedef TYPE_1__ PrintfTarget ;


 size_t FUNC_0 (size_t,int,size_t,int ) ;

__attribute__((used)) static void
FUNC_1(PrintfTarget *VAR_0)
{
 size_t VAR_1 = VAR_0->bufptr - VAR_0->bufstart;





 if (!VAR_0->failed && VAR_1 > 0)
 {
  size_t VAR_2;

  VAR_2 = FUNC_0(VAR_0->bufstart, 1, VAR_1, VAR_0->stream);
  VAR_0->nchars += VAR_2;
  if (VAR_2 != VAR_1)
   VAR_0->failed = 1;
 }
 VAR_0->bufptr = VAR_0->bufstart;
}
