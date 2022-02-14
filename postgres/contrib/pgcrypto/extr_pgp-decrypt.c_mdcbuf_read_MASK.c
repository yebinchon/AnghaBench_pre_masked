
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
struct MDCBufData {int avail; int * pos; int eof; } ;
typedef int PullFilter ;


 int FUNC_0 (struct MDCBufData*,int *) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, PullFilter *VAR_1, int VAR_2,
   uint8 **VAR_3, uint8 *VAR_4, int VAR_5)
{
 struct MDCBufData *VAR_6 = VAR_0;
 int VAR_7;

 if (!VAR_6->eof && VAR_2 > VAR_6->avail)
 {
  VAR_7 = FUNC_0(VAR_6, VAR_1);
  if (VAR_7 < 0)
   return VAR_7;
 }

 if (VAR_2 > VAR_6->avail)
  VAR_2 = VAR_6->avail;

 *VAR_3 = VAR_6->pos;
 VAR_6->pos += VAR_2;
 VAR_6->avail -= VAR_2;
 return VAR_2;
}
